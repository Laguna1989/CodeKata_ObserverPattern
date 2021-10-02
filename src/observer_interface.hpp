#ifndef CODE_KATA_OBSERVER_INTERFACE_HPP
#define CODE_KATA_OBSERVER_INTERFACE_HPP

class ObserverInterface {
public:
    virtual ~ObserverInterface() = default;
    virtual void notify(int value) = 0;
};

#endif // CODE_KATA_OBSERVER_INTERFACE_HPP
