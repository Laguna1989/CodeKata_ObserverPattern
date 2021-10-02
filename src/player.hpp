#ifndef CODEKATA_OBSERVERPATTERN_PLAYER_HPP
#define CODEKATA_OBSERVERPATTERN_PLAYER_HPP

#include "observable.hpp"
#include <memory>

class Hud;

class Player {
public:
    explicit Player(std::shared_ptr<Hud> hud);
    int get_health_current();
    int get_health_max();
    bool is_alive();

    void take_damage(int value);
    void score_point();

    void set_score_observer(std::shared_ptr<ObserverInterface> o);

private:
    Observable m_health_max { 100 };
    Observable m_health { m_health_max };

    Observable m_score { 0 };
};

#endif // CODEKATA_OBSERVERPATTERN_PLAYER_HPP
