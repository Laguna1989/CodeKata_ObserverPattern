#ifndef CODEKATA_OBSERVERPATTERN_PLAYER_HPP
#define CODEKATA_OBSERVERPATTERN_PLAYER_HPP

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

private:
    int m_health_max{100};
    int m_health{m_health_max};

    int m_score{0};

    std::shared_ptr<Hud> m_hud;
};

#endif // CODEKATA_OBSERVERPATTERN_PLAYER_HPP
