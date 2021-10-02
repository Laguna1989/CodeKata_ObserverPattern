#include "playstate.hpp"
Playstate::Playstate(std::shared_ptr<Player> player, std::shared_ptr<Hud> hud)
{
    m_hud = hud;
    if (m_hud == nullptr) {
        m_hud = std::make_shared<Hud>();
    }

    m_scoreObserver = std::make_shared<ScoreObserver>();

    m_player = player;
    if (m_player == nullptr) {
        m_player = std::make_shared<Player>(m_hud);
    }
    m_player->set_score_observer(m_scoreObserver);
}
void Playstate::update() { m_is_game_over = !m_player->is_alive(); }

std::string Playstate::render()
{
    return m_hud->render_score_text() + "\n" + m_hud->render_player_health_text();
}

bool Playstate::is_game_over() { return m_is_game_over || m_scoreObserver->isOver(); }
