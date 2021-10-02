#ifndef CODE_KATA_OBSERVER_HPP
#define CODE_KATA_OBSERVER_HPP

#include "observer_interface.hpp"
#include <string>

class Observer : public ObserverInterface {
public:
    Observer(std::string& display_string, std::string prefix = "");
    void notify(int value) override;

private:
    std::string& m_string;
    std::string const m_prefix;
};

#endif // CODE_KATA_OBSERVER_HPP
