#include <gtest/gtest.h>
#include "../../src/Observer/Observer.h"

TEST(ObserverTest, Test1) {
    Subscriber subscriber1{1};
    Subscriber subscriber2{2};
    Subscriber subscriber3{3};
    Publisher publisher;

    publisher.addSubscriber(&subscriber1);
    publisher.addSubscriber(&subscriber2);
    publisher.addSubscriber(&subscriber3);

    publisher.notifySubscribers();
}
