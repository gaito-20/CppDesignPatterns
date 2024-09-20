#include "Observer.h"


void Publisher::addSubscriber(Subscriber *subscriber) {
    subscribers.push_back(std::make_shared<Subscriber>(*subscriber));
}

void Publisher::removeSubscriber(const Subscriber *subscriber) {
    for (int i = 0; i < subscribers.size(); i++) {
        if (subscribers.at(i).get() == subscriber) {
            subscribers.erase(subscribers.begin() + i);
            return;
        }
    }
}

void Publisher::notifySubscribers() {
    for (const auto &subscriber: subscribers) {
        subscriber->update();
    }
}
