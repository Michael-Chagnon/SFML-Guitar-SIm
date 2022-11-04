/*Copyright [2022] <Michael Chagnon>*/
#include "StringSound.h"
#include <iostream>
#define SAMPLES_PER_SEC 44100


StringSound::StringSound(double frequency) {
    if (frequency <= 0) {
        throw std::invalid_argument(
            "Can't have a frequency less than or equal to 0");
    }
    _cb = new CircularBuffer(ceil(SAMPLES_PER_SEC / frequency));
    _time = 0;
}

StringSound::StringSound(std::vector<sf::Int16> init) {
    for (size_t i = 0; i < init.size(); i++) {
        _cb->enqueue(init[i]);
    }
    _time = 0;
}

StringSound::~StringSound() {
    delete[] _cb;
}

void StringSound::pluck() {
    size_t temp = _cb->size();

    srand(time());
    int16_t random;

    for (size_t i = 0; i < temp; i++) {
        _cb->dequeue();
    }

    for (size_t i = 0; i < temp; i++) {
        random = -32768 + (rand() % 32767);  // NOLINT
        _cb->enqueue(random);
    }
}

void StringSound::tic() {
    double temp;
    temp = .996 * (.5 * (_cb->dequeue() + _cb->peek()));
    _cb->enqueue(temp);
    _time++;
}

sf::Int16 StringSound::sample() {
return _cb->peek();
}

int StringSound::time() {
return _time;
}
