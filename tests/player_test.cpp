#include <gtest/gtest.h>
#include "player.hpp"


TEST(PlayerTest, IsAliveReturnsTrueInitially)
{
    Player p{nullptr};
    ASSERT_TRUE(p.is_alive());
}

TEST(PlayerTest, IsAliveReturnsFalseAfter100Damage)
{
    Player p{nullptr};
    p.take_damage(100);

    ASSERT_FALSE(p.is_alive());
}

TEST(PlayerTest, GetHealthInitial)
{
    Player p{nullptr};
    ASSERT_EQ(p.get_health_current(), p.get_health_max());
}

TEST(PlayerTest, GetHealthAfterTakeDamage)
{
    Player p{nullptr};
    int const damage_value = 5;
    p.take_damage(damage_value);
    ASSERT_EQ(p.get_health_current(), p.get_health_max() - damage_value);
}


// TODO How to test scoring of points? :/
