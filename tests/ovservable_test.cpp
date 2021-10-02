#include "observable.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(ObservableTest, InitialNoSubscribers)
{
    Observable o;
    ASSERT_TRUE(o.subscribers.empty());
}

TEST(ObservableTest, InitialValueIsZero)
{
    Observable o;
    ASSERT_EQ(o, 0);
}

TEST(ObservableTEst, ConstructorSetsValue)
{
    Observable o { 42 };
    ASSERT_EQ(o, 42);
}

class MockObserver : public ObserverInterface {
public:
    MOCK_METHOD(void, notify, (int), (override));
};

TEST(ObservableTest, AssignmentCallsNotifyOnSubscribedObserver)
{
    Observable o;
    auto observer = std::make_shared<MockObserver>();
    o.subscribers.push_back(observer);

    int const value = 5;
    EXPECT_CALL(*observer, notify(value));

    o = value;
}

TEST(ObservableTest, PostIncrement)
{
    Observable o;
    o++;
    ASSERT_EQ(o, 1);
}

TEST(ObservableTest, AssignmentChangesValue)
{
    Observable o;
    o = 15;
    ASSERT_EQ(o, 15);
}

TEST(ObservableTest, AssignIncrement)
{
    Observable o;
    o = 15;
    o += 5;
    ASSERT_EQ(o, 20);
}

TEST(ObservableTest, AssignDecrement)
{
    Observable o;
    o = 15;
    o -= 5;
    ASSERT_EQ(o, 10);
}
