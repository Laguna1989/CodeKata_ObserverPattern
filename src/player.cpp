#include "player.hpp"
#include "hud.hpp"
#include <string>

Player::Player(std::shared_ptr<Hud> hud)
{
    if (hud) {
        m_score.subscribers.push_back(hud->get_observer_score());
        m_health.subscribers.push_back(hud->get_observer_player_health_current());
        m_health_max.subscribers.push_back(hud->get_observer_player_health_max());
    }
    m_health_max = 100;
}

bool Player::is_alive() { return get_health_current() > 0; }
int Player::get_health_max() { return m_health_max; }
int Player::get_health_current() { return m_health; }
void Player::take_damage(int value) { m_health -= value; }

void Player::score_point() { m_score++; }

void Player::set_score_observer(std::shared_ptr<ObserverInterface> o)
{
    m_score.subscribers.push_back(o);
}
