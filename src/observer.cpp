
#include "observer.hpp"
Observer::Observer(std::string& display_string, std::string prefix)
    : m_string { display_string }
    , m_prefix { prefix }
{
}

void Observer::notify(int value) { m_string = m_prefix + std::to_string(value); }
