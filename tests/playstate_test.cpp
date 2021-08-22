#include <gtest/gtest.h>
#include "playstate.hpp"

TEST(PlaystateTest, RenderInitial)
{
    Playstate ps;
    ps.update();

    ASSERT_EQ("Score: 0\n100 / 100", ps.render());
}

TEST(PlaystateTest, GameIsOverAfterPlayerDeath)
{
    // Smort Dependency Injection
    auto p = std::make_shared<Player>(nullptr);
    Playstate ps{p};

    p->take_damage(100);
    ps.update();
    ASSERT_TRUE(ps.is_game_over());
}


TEST(PlaystateTest, RenderHealthWithCustomPlayer)
{
    // Smort Dependency Injection
    auto p = std::make_shared<Player>(nullptr);
    Playstate ps{p};
    p->take_damage(5);
    ps.update();
    ASSERT_EQ("Score: 0\n95 / 100", ps.render());
}

// TODO How to test render after score point? :/
