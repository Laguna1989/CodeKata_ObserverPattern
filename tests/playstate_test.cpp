#include "playstate.hpp"
#include <gtest/gtest.h>

TEST(PlaystateTest, RenderInitial)
{
    Playstate ps;
    ps.update();

    ASSERT_EQ("Score: 0\n100 / 100", ps.render());
}

TEST(PlaystateTest, GameIsOverAfterPlayerDeath)
{
    auto p = std::make_shared<Player>(nullptr);
    Playstate ps { p };

    p->take_damage(100);
    ps.update();
    ASSERT_TRUE(ps.is_game_over());
}

TEST(PlaystateTest, RenderHealthWithCustomPlayer)
{
    auto h = std::make_shared<Hud>();
    auto p = std::make_shared<Player>(h);
    Playstate ps { p, h };
    p->take_damage(5);
    ps.update();
    ASSERT_EQ("Score: 0\n95 / 100", ps.render());
}

TEST(PlaystateTest, GameOverAfterReach100Points)
{
    auto h = std::make_shared<Hud>();
    auto p = std::make_shared<Player>(h);
    Playstate ps { p, h };
    for (int i = 0; i != 100; ++i) {
        p->score_point();
    }
    ASSERT_TRUE(ps.is_game_over());
}
