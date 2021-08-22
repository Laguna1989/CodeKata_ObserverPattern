#ifndef CODEKATA_OBSERVERPATTERN_HUD_HPP
#define CODEKATA_OBSERVERPATTERN_HUD_HPP

#include <string>

class Hud {
public:
    void set_score_text(std::string const& new_text);
    std::string render_score_text();

    void set_player_health_current(int health_current);
    void set_player_health_max(int health_max);
    std::string render_player_health_text();
private:
    std::string m_score_text{"Score: 0"};

    int m_player_health_current{0};
    int m_player_health_max{0};
};

#endif // CODEKATA_OBSERVERPATTERN_HUD_HPP
