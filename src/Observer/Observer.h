#ifndef OBSERVER_H
#define OBSERVER_H
#include <iostream>
#include <memory>
#include <ostream>
#include <vector>


class Subscriber;

class Publisher {
private:
    std::vector<std::shared_ptr<Subscriber>> subscribers;
public:
    Publisher() = default;
    ~Publisher() = default;

    void addSubscriber(Subscriber* subscriber);
    void removeSubscriber(const Subscriber* subscriber);
    void notifySubscribers();
};

class Subscriber {
private:
    int id;
public:
    explicit Subscriber(const int id): id(id) {};
    void update() const { std::cout << "Subscriber " << id << " updated" << std::endl; };
};


#endif //OBSERVER_H
