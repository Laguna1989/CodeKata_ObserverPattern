#include "hud.hpp"
#include <gtest/gtest.h>

TEST(HudTest, RenderScoreInitial)
{
    Hud h;
    ASSERT_EQ("Score: 0", h.render_score_text());
}

TEST(HudTest, RenderHealthInitial)
{
    Hud h;
    ASSERT_EQ("100 / 100", h.render_player_health_text());
}

TEST(HudTest, RenderHealthAfterSetHealth)
{
    Hud h;
    h.get_observer_player_health_current()->notify(100);
    ASSERT_EQ("100 / 100", h.render_player_health_text());
}
