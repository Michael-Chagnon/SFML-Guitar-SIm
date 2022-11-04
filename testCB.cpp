/*Copyright [2022] <Michael Chagnon>*/
#define BOOST_TEST_MODULE CircularBuffer
#include <boost/test/included/unit_test.hpp>
#include "CircularBuffer.h"

BOOST_AUTO_TEST_SUITE(test_circular_buffer)

BOOST_AUTO_TEST_CASE(test_capacity) {
    BOOST_REQUIRE_THROW(CircularBuffer test2(0), std::invalid_argument);
    // tests creating new buffer with capacity of 0

    BOOST_REQUIRE_NO_THROW(CircularBuffer test2(1));
    // tests buffer with valid capacity
}
BOOST_AUTO_TEST_CASE(test_enqueue) {
    CircularBuffer test1(1);
    test1.enqueue(2);
    BOOST_REQUIRE_THROW(test1.enqueue(3), std::runtime_error);
    // tests enqueuing on a full buffer
}

BOOST_AUTO_TEST_CASE(test_dequeue) {
    CircularBuffer test2(1);
    BOOST_REQUIRE_THROW(test2.dequeue(), std::runtime_error);
    // tests dequeuing on empty buffer
}

BOOST_AUTO_TEST_CASE(test_peek) {
    CircularBuffer test3(1);
    BOOST_REQUIRE_THROW(test3.peek(), std::runtime_error);
    // tests peeking on empty buffer
}

BOOST_AUTO_TEST_CASE(test_working) {
    CircularBuffer test4(5);
    test4.enqueue(0);  // shows that enqueue works
    test4.enqueue(1);
    test4.enqueue(2);
    test4.enqueue(3);
    test4.enqueue(4);

    std::cout << "Array values after enqueue: ";
    test4.printArray();

    test4.dequeue();  // shows that dequeue works

    std::cout << "Array values after dequeue: ";
    test4.printArray();

    std::cout << "Peek: " << test4.peek() << std::endl;
    // shows that peek works

    test4.enqueue(5);
    bool result = test4.isFull();  // shows that isFull() works
    if (result == 1) {
        std::cout << "True, is full" << std::endl;
    } else {
        std::cout << "False, isn't full" << std::endl;
    }

    CircularBuffer test5(1);
    result = test5.isEmpty();  // shows that isEmpty() works
    if (result == 1) {
        std::cout << "True, is empty" << std::endl;
    } else {
        std::cout << "False, isn't empty" << std::endl;
    }
}

BOOST_AUTO_TEST_SUITE_END()
