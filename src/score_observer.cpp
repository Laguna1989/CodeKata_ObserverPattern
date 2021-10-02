
#include "score_observer.hpp"
void ScoreObserver::notify(int value)
{
    if (value >= 100)
        m_isOver = true;
}
bool ScoreObserver::isOver() const { return m_isOver; }
