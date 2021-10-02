#include "hud.hpp"

Hud::Hud()
{
    m_score_observer = std::make_shared<Observer>(m_score_text, "Score: ");
    m_player_health_current_observer = std::make_shared<Observer>(m_player_health_current_text);
    m_player_health_max_observer = std::make_shared<Observer>(m_player_health_max_text, " / ");
}

std::string Hud::render_score_text() { return m_score_text; }
std::string Hud::render_player_health_text()
{
    return m_player_health_current_text + m_player_health_max_text;
}
std::shared_ptr<ObserverInterface> Hud::get_observer_score() { return m_score_observer; }
std::shared_ptr<ObserverInterface> Hud::get_observer_player_health_current()
{
    return m_player_health_current_observer;
}
std::shared_ptr<ObserverInterface> Hud::get_observer_player_health_max()
{
    return m_player_health_max_observer;
}
