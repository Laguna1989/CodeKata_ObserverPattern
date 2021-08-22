#include "hud.hpp"

void Hud::set_score_text(std::string const& new_text) { m_score_text = new_text; }
std::string Hud::render_score_text() { return m_score_text; }
void Hud::set_player_health_current(int health_current)
{
    m_player_health_current = health_current;
}
void Hud::set_player_health_max(int health_max) { m_player_health_max = health_max; }

std::string Hud::render_player_health_text()
{
    return std::to_string(m_player_health_current) + " / " + std::to_string(m_player_health_max);
}
