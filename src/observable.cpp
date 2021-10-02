#include "observable.hpp"

Observable::Observable(int value) { m_value = value; }

Observable& Observable::operator=(int value)
{
    m_value = value;
    notify_all();
    return *this;
}

Observable Observable::operator++(int)
{
    m_value++;
    notify_all();
    return *this;
}

Observable::operator int() const { return m_value; }

Observable& Observable::operator+=(int value)
{
    m_value += value;
    notify_all();
    return *this;
}
Observable& Observable::operator-=(int value)
{
    m_value -= value;
    notify_all();
    return *this;
}

void Observable::notify_all()
{
    for (auto& s : subscribers) {
        s->notify(m_value);
    }
}
