#include "player.hpp"
#include "hud.hpp"
#include <string>

Player::Player(std::shared_ptr<Hud> hud)
    : m_hud { hud }
{
}

bool Player::is_alive() { return get_health_current() > 0; }
int Player::get_health_max() { return m_health_max; }
int Player::get_health_current() { return m_health; }
void Player::take_damage(int value) { m_health -= value; }

void Player::score_point()
{
    m_score++;
    if (m_hud) {
        m_hud->set_score_text("Score: " + std::to_string(m_score));
    }
}
