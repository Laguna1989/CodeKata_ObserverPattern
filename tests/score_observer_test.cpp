#include "score_observer.hpp"
#include <gtest/gtest.h>

TEST(ScoreObserver, InitiallyNotOver)
{
    ScoreObserver o;
    ASSERT_FALSE(o.isOver());
}

TEST(ScoreObserver, IsOverActerNotifyWith100)
{
    ScoreObserver o;
    o.notify(100);
    ASSERT_TRUE(o.isOver());
}
