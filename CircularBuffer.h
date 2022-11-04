/*Copyright [2022] <Michael Chagnon>*/
#pragma once
#ifndef CIRCULARBUFFER_H_
#define CIRCULARBUFFER_H_
#include <stdint.h>
#include <iostream>

class CircularBuffer{
 public:
    explicit CircularBuffer(int newCapacity);  // create an empty ring buffer,
    // with given max capacity
    size_t size();  // return number of items currently in the buffer
    bool isEmpty();  // is the buffer empty (size equals zero)?
    bool isFull();  // is the buffer full (size equals capacity)?
    void enqueue(int16_t x);  // add item x to the end
    int16_t dequeue();  // delete and return item from the front
    int16_t peek();  // return (but do not delete) item from the front

    void printArray();  // prints values of array
 private:
    size_t capacity;
    size_t bufferSize;
    int16_t *buffer;
};

#endif
