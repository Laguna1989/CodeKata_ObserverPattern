#ifndef CODEKATA_OBSERVERPATTERN_PLAYSTATE_HPP
#define CODEKATA_OBSERVERPATTERN_PLAYSTATE_HPP

#include "hud.hpp"
#include "player.hpp"
#include <memory>

class Playstate {
public:
    Playstate(std::shared_ptr<Player> player = nullptr);

    void update();

    std::string render();

    bool is_game_over();

private:
    std::shared_ptr<Hud> m_hud;
    std::shared_ptr<Player> m_player;

    bool m_is_game_over{false};

};

#endif // CODEKATA_OBSERVERPATTERN_PLAYSTATE_HPP
