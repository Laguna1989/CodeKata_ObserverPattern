#ifndef CODE_KATA_OBSERVABLE_HPP
#define CODE_KATA_OBSERVABLE_HPP

#include "observer_interface.hpp"
#include <memory>
#include <vector>

class Observable {
public:
    std::vector<std::shared_ptr<ObserverInterface>> subscribers;

    Observable(int value = 0);

    Observable& operator=(int value);
    Observable operator++(int);
    operator int() const;
    Observable& operator+=(int value);
    Observable& operator-=(int value);

private:
    int m_value { 0 };

    void notify_all();
};

#endif // CODE_KATA_OBSERVABLE_HPP
