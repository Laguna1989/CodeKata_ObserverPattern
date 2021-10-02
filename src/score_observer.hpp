
#ifndef CODE_KATA_SCORE_OBSERVER_HPP
#define CODE_KATA_SCORE_OBSERVER_HPP

#include "observer_interface.hpp"

class ScoreObserver : public ObserverInterface {
public:
    void notify(int value) override;
    bool isOver() const;

private:
    bool m_isOver { false };
};

#endif // CODE_KATA_SCORE_OBSERVER_HPP
