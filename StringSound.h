/*Copyright [2022] <Michael Chagnon>*/
#pragma once
#ifndef STRINGSOUND_H_
#define STRINGSOUND_H_
#include <stdint.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "CircularBuffer.h"

class StringSound {
 public:
    explicit StringSound(double frequency);
    // create a guitar string sound of the
    // given frequency using a sampling rate of 44,100

    explicit StringSound(std::vector<sf::Int16> init);
    // create a guitar string with
    // size and initial values are given by the vector

    StringSound (const StringSound &obj) = delete;

    ~StringSound();

    void pluck();
    // pluck the guitar string by replacing
    // the buffer with random values, representing white noise

    void tic();
    // advance the simulation one time step

    sf::Int16 sample();
    // return the current sample

    int time();
    // return number of times tic was called so far
 private:
    CircularBuffer * _cb;
    int _time;
};

#endif
