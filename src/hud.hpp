#ifndef CODEKATA_OBSERVERPATTERN_HUD_HPP
#define CODEKATA_OBSERVERPATTERN_HUD_HPP

#include "observer.hpp"
#include <memory>
#include <string>

class Hud {
public:
    Hud();
    std::string render_score_text();
    std::string render_player_health_text();

    std::shared_ptr<ObserverInterface> get_observer_score();
    std::shared_ptr<ObserverInterface> get_observer_player_health_current();
    std::shared_ptr<ObserverInterface> get_observer_player_health_max();

private:
    std::string m_score_text { "Score: 0" };
    std::shared_ptr<Observer> m_score_observer;

    std::string m_player_health_current_text { "100" };
    std::shared_ptr<Observer> m_player_health_current_observer;

    std::string m_player_health_max_text { " / 100" };
    std::shared_ptr<Observer> m_player_health_max_observer;
};

#endif // CODEKATA_OBSERVERPATTERN_HUD_HPP
