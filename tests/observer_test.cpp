
#include "observer.hpp"
#include <gtest/gtest.h>

TEST(ObserverTest, NotifyChangesValue)
{
    std::string str = "";
    Observer observer(str);

    observer.notify(15);
    ASSERT_EQ(str, "15");
}

TEST(ObserverTest, PrefixIsUsed)
{
    std::string str = "";
    Observer observer(str, "ABCD ");

    observer.notify(15);
    ASSERT_EQ(str, "ABCD 15");
}
