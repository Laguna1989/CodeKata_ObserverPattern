#include "playstate.hpp"
Playstate::Playstate(std::shared_ptr<Player> player)
{
    m_hud = std::make_shared<Hud>();
    m_player = player;
    if (m_player == nullptr) {
        m_player = std::make_shared<Player>(m_hud);
    }

}
void Playstate::update()
{
    m_hud->set_player_health_current(m_player->get_health_current());
    m_hud->set_player_health_max(m_player->get_health_max());

    m_is_game_over = !m_player->is_alive();
}

std::string Playstate::render()
{
    return m_hud->render_score_text() + "\n" + m_hud->render_player_health_text();
}

bool Playstate::is_game_over() { return m_is_game_over; }
