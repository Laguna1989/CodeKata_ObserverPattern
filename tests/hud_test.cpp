#include "hud.hpp"
#include <gtest/gtest.h>

TEST(HudTest, RenderScoreInitial)
{
    Hud h;
    ASSERT_EQ("Score: 0", h.render_score_text());
}

TEST(HudTest, RenderScoreAfterSetScore)
{
    Hud h;
    h.set_score_text("Score: 100");
    ASSERT_EQ("Score: 100", h.render_score_text());
}

TEST(HudTest, RenderHealthInitial)
{
    Hud h;
    ASSERT_EQ("0 / 0", h.render_player_health_text());
}

TEST(HudTest, RenderHealthAfterSetHealth)
{
    Hud h;
    h.set_player_health_current(100);
    h.set_player_health_max(100);
    ASSERT_EQ("100 / 100", h.render_player_health_text());
}
