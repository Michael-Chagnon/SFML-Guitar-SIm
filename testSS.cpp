/*Copyright [2022] <Michael Chagnon>*/
#define BOOST_TEST_MODULE CircularBuffer
#include <boost/test/included/unit_test.hpp>
#include "StringSound.h"

BOOST_AUTO_TEST_SUITE(test_string_sound)

BOOST_AUTO_TEST_CASE(test_frequency) {
    BOOST_REQUIRE_THROW(StringSound test2(0), std::invalid_argument);
    // tests creating new StringSound with frequency of 0

    BOOST_REQUIRE_NO_THROW(StringSound test2(1));
    // tests StringSound with valid frequency
}

BOOST_AUTO_TEST_SUITE_END()
