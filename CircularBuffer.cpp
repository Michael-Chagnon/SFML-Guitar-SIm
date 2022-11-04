/*Copyright [2022] <Michael Chagnon>*/
#include "CircularBuffer.h"
#include <iostream>

CircularBuffer::CircularBuffer(int newCapacity) {
    if (newCapacity <= 0) {
        throw std::invalid_argument(
            "CircularBuffer constructor: capacity must be greater than zero.");
    }
    capacity = newCapacity;
    buffer = new int16_t[newCapacity];
    bufferSize = newCapacity;
}

size_t CircularBuffer::size() {
    return bufferSize;
}

bool CircularBuffer::isEmpty() {
    if (bufferSize == 0) {
        return true;
    } else {
        return false;
    }
}

bool CircularBuffer::isFull() {
    if (bufferSize == capacity) {
        return true;
    } else {
    return false;
    }
}

void CircularBuffer::enqueue(int16_t x) {
    if (bufferSize == capacity) {
        throw std::runtime_error("enqueue: can't enqueue to a full ring.");
    }
    buffer[bufferSize] = x;
    bufferSize += 1;
}

int16_t CircularBuffer::dequeue() {
    if (bufferSize == 0) {
        throw std::runtime_error("dequeue: can't dequeue an empty ring");
    }
    int16_t i;
    i = buffer[0];
    for (int i = 0; i < bufferSize; i++) {
        buffer[i] = buffer[i + 1];
    }
    bufferSize -= 1;
     return i;
}

int16_t CircularBuffer::peek() {
    if (bufferSize == 0) {
        throw std::runtime_error("peek: can't peek at empty ring");
    }
    return buffer[0];
}

void CircularBuffer::printArray() {
       for (int i  = 0; i < bufferSize; i++) {
          std::cout << buffer[i] << " ";
       }
       std::cout << std::endl;
}
