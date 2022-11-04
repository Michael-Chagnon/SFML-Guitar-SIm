/*Copyright [2022] <Michael Chagnon>*/
#include <math.h>
#include <limits.h>
#include <string>
#include <exception>
#include <stdexcept>
#include <vector>

#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>

#include "CircularBuffer.h"
#include "StringSound.h"

#define CONCERT_A 440.0
#define SAMPLES_PER_SEC 44100

std::vector<sf::Int16> makeSamples(StringSound& gs) {  // NOLINT
    std::vector<sf::Int16> samples;

    gs.pluck();
    int duration = 8;  // seconds
    int i;
    for (i= 0; i < SAMPLES_PER_SEC * duration; i++) {
        gs.tic();
        samples.push_back(gs.sample());
    }

    return samples;
}

int main() {
    sf::RenderWindow window(sf::VideoMode(300, 200),
     "KSGuitarSim");
    sf::Event event;
    double freq;
    std::vector<sf::Int16> samples;

    freq = CONCERT_A * pow(2, (1.0 - 24.0)/12.0);
    StringSound gs1(freq);
    sf::Sound sound1;
    sf::SoundBuffer buf1;
    samples = makeSamples(gs1);
    std::cout << samples.size() << std::endl;
    if (!buf1.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound1.setBuffer(buf1);

    freq = CONCERT_A * pow(2, (2.0 - 24.0)/12.0);
    StringSound gs2(freq);
    sf::Sound sound2;
    sf::SoundBuffer buf2;
    samples = makeSamples(gs2);
    if (!buf2.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound2.setBuffer(buf2);

    freq = CONCERT_A * pow(2, (3.0 - 24.0)/12.0);
    StringSound gs3(freq);
    sf::Sound sound3;
    sf::SoundBuffer buf3;
    samples = makeSamples(gs3);
    if (!buf3.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound3.setBuffer(buf3);

    freq = CONCERT_A * pow(2, (4.0 - 24.0)/12.0);
    StringSound gs4(freq);
    sf::Sound sound4;
    sf::SoundBuffer buf4;
    samples = makeSamples(gs4);
    if (!buf4.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound4.setBuffer(buf4);

    freq = CONCERT_A * pow(2, (5.0 - 24.0)/12.0);
    StringSound gs5(freq);
    sf::Sound sound5;
    sf::SoundBuffer buf5;
    samples = makeSamples(gs5);
    if (!buf5.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound5.setBuffer(buf5);

    freq = CONCERT_A * pow(2, (6.0 - 24.0)/12.0);
    StringSound gs6(freq);
    sf::Sound sound6;
    sf::SoundBuffer buf6;
    samples = makeSamples(gs6);
    if (!buf6.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound6.setBuffer(buf6);

    freq = CONCERT_A * pow(2, (7.0 - 24.0)/12.0);
    StringSound gs7(freq);
    sf::Sound sound7;
    sf::SoundBuffer buf7;
    samples = makeSamples(gs7);
    if (!buf7.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound7.setBuffer(buf7);

    freq = CONCERT_A * pow(2, (8.0 - 24.0)/12.0);
    StringSound gs8(freq);
    sf::Sound sound8;
    sf::SoundBuffer buf8;
    samples = makeSamples(gs8);
    if (!buf8.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound8.setBuffer(buf8);

    freq = CONCERT_A * pow(2, (9.0 - 24.0)/12.0);
    StringSound gs9(freq);
    sf::Sound sound9;
    sf::SoundBuffer buf9;
    samples = makeSamples(gs9);
    if (!buf9.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound9.setBuffer(buf9);

    freq = CONCERT_A * pow(2, (10.0 - 24.0)/12.0);
    StringSound gs10(freq);
    sf::Sound sound10;
    sf::SoundBuffer buf10;
    samples = makeSamples(gs10);
    if (!buf10.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound10.setBuffer(buf10);

    freq = CONCERT_A * pow(2, (11.0 - 24.0)/12.0);
    StringSound gs11(freq);
    sf::Sound sound11;
    sf::SoundBuffer buf11;
    samples = makeSamples(gs11);
    if (!buf11.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound11.setBuffer(buf11);

    freq = CONCERT_A * pow(2, (12.0 - 24.0)/12.0);
    StringSound gs12(freq);
    sf::Sound sound12;
    sf::SoundBuffer buf12;
    samples = makeSamples(gs12);
    if (!buf12.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound12.setBuffer(buf12);

    freq = CONCERT_A * pow(2, (13.0 - 24.0)/12.0);
    StringSound gs13(freq);
    sf::Sound sound13;
    sf::SoundBuffer buf13;
    samples = makeSamples(gs13);
    if (!buf13.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound13.setBuffer(buf13);

    freq = CONCERT_A * pow(2, (14.0 - 24.0)/12.0);
    StringSound gs14(freq);
    sf::Sound sound14;
    sf::SoundBuffer buf14;
    samples = makeSamples(gs14);
    if (!buf14.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound14.setBuffer(buf14);

    freq = CONCERT_A * pow(2, (15.0 - 24.0)/12.0);
    StringSound gs15(freq);
    sf::Sound sound15;
    sf::SoundBuffer buf15;
    samples = makeSamples(gs15);
    if (!buf15.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound15.setBuffer(buf15);

    freq = CONCERT_A * pow(2, (16.0 - 24.0)/12.0);
    StringSound gs16(freq);
    sf::Sound sound16;
    sf::SoundBuffer buf16;
    samples = makeSamples(gs16);
    if (!buf16.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound16.setBuffer(buf16);

    freq = CONCERT_A * pow(2, (17.0 - 24.0)/12.0);
    StringSound gs17(freq);
    sf::Sound sound17;
    sf::SoundBuffer buf17;
    samples = makeSamples(gs17);
    if (!buf17.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound17.setBuffer(buf17);

    freq = CONCERT_A * pow(2, (18.0 - 24.0)/12.0);
    StringSound gs18(freq);
    sf::Sound sound18;
    sf::SoundBuffer buf18;
    samples = makeSamples(gs18);
    if (!buf18.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound18.setBuffer(buf18);

    freq = CONCERT_A * pow(2, (19.0 - 24.0)/12.0);
    StringSound gs19(freq);
    sf::Sound sound19;
    sf::SoundBuffer buf19;
    samples = makeSamples(gs19);
    if (!buf19.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound19.setBuffer(buf19);

    freq = CONCERT_A * pow(2, (20.0 - 24.0)/12.0);
    StringSound gs20(freq);
    sf::Sound sound20;
    sf::SoundBuffer buf20;
    samples = makeSamples(gs20);
    if (!buf20.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound20.setBuffer(buf20);

    freq = CONCERT_A * pow(2, (21.0 - 24.0)/12.0);
    StringSound gs21(freq);
    sf::Sound sound21;
    sf::SoundBuffer buf21;
    samples = makeSamples(gs21);
    if (!buf21.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound21.setBuffer(buf21);

    freq = CONCERT_A * pow(2, (22.0 - 24.0)/12.0);
    StringSound gs22(freq);
    sf::Sound sound22;
    sf::SoundBuffer buf22;
    samples = makeSamples(gs22);
    if (!buf22.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound22.setBuffer(buf22);

    freq = CONCERT_A * pow(2, (23.0 - 24.0)/12.0);
    StringSound gs23(freq);
    sf::Sound sound23;
    sf::SoundBuffer buf23;
    samples = makeSamples(gs23);
    if (!buf23.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound23.setBuffer(buf23);

    freq = CONCERT_A * pow(2, (24.0 - 24.0)/12.0);
    StringSound gs24(freq);
    sf::Sound sound24;
    sf::SoundBuffer buf24;
    samples = makeSamples(gs24);
    if (!buf24.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound24.setBuffer(buf24);

    freq = CONCERT_A * pow(2, (25.0 - 24.0)/12.0);
    StringSound gs25(freq);
    sf::Sound sound25;
    sf::SoundBuffer buf25;
    samples = makeSamples(gs25);
    if (!buf25.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound25.setBuffer(buf25);

    freq = CONCERT_A * pow(2, (26.0 - 24.0)/12.0);
    StringSound gs26(freq);
    sf::Sound sound26;
    sf::SoundBuffer buf26;
    samples = makeSamples(gs26);
    if (!buf26.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound26.setBuffer(buf26);

    freq = CONCERT_A * pow(2, (27.0 - 24.0)/12.0);
    StringSound gs27(freq);
    sf::Sound sound27;
    sf::SoundBuffer buf27;
    samples = makeSamples(gs27);
    if (!buf27.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound27.setBuffer(buf27);

    freq = CONCERT_A * pow(2, (28.0 - 24.0)/12.0);
    StringSound gs28(freq);
    sf::Sound sound28;
    sf::SoundBuffer buf28;
    samples = makeSamples(gs28);
    if (!buf28.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound28.setBuffer(buf28);

    freq = CONCERT_A * pow(2, (29.0 - 24.0)/12.0);
    StringSound gs29(freq);
    sf::Sound sound29;
    sf::SoundBuffer buf29;
    samples = makeSamples(gs29);
    if (!buf29.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound29.setBuffer(buf29);

    freq = CONCERT_A * pow(2, (30.0 - 24.0)/12.0);
    StringSound gs30(freq);
    sf::Sound sound30;
    sf::SoundBuffer buf30;
    samples = makeSamples(gs30);
    if (!buf30.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound30.setBuffer(buf30);

    freq = CONCERT_A * pow(2, (31.0 - 24.0)/12.0);
    StringSound gs31(freq);
    sf::Sound sound31;
    sf::SoundBuffer buf31;
    samples = makeSamples(gs31);
    if (!buf31.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound31.setBuffer(buf31);

    freq = CONCERT_A * pow(2, (32.0 - 24.0)/12.0);
    StringSound gs32(freq);
    sf::Sound sound32;
    sf::SoundBuffer buf32;
    samples = makeSamples(gs32);
    if (!buf32.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound32.setBuffer(buf32);

    freq = CONCERT_A * pow(2, (33.0 - 24.0)/12.0);
    StringSound gs33(freq);
    sf::Sound sound33;
    sf::SoundBuffer buf33;
    samples = makeSamples(gs33);
    if (!buf33.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound33.setBuffer(buf33);

    freq = CONCERT_A * pow(2, (34.0 - 24.0)/12.0);
    StringSound gs34(freq);
    sf::Sound sound34;
    sf::SoundBuffer buf34;
    samples = makeSamples(gs34);
    if (!buf34.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound34.setBuffer(buf34);

    freq = CONCERT_A * pow(2, (35.0 - 24.0)/12.0);
    StringSound gs35(freq);
    sf::Sound sound35;
    sf::SoundBuffer buf35;
    samples = makeSamples(gs35);
    if (!buf35.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound35.setBuffer(buf35);

    freq = CONCERT_A * pow(2, (36.0 - 24.0)/12.0);
    StringSound gs36(freq);
    sf::Sound sound36;
    sf::SoundBuffer buf36;
    samples = makeSamples(gs36);
    if (!buf36.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound36.setBuffer(buf36);

    freq = CONCERT_A * pow(2, (37.0 - 24.0)/12.0);
    StringSound gs37(freq);
    sf::Sound sound37;
    sf::SoundBuffer buf37;
    samples = makeSamples(gs37);
    if (!buf37.loadFromSamples(&samples[0], samples.size(), 2, SAMPLES_PER_SEC))
        throw std::runtime_error(
            "sf::SoundBuffer: failed to load from samples.");
    sound37.setBuffer(buf37);















    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            switch (event.type) {
            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::KeyPressed:
                switch (event.key.code) {
                case sf::Keyboard::Q:
                    sound1.play();
                    break;
                case sf::Keyboard::Num2:
                    sound2.play();
                    break;
                case sf::Keyboard::W:
                    sound3.play();
                    break;
                case sf::Keyboard::E:
                    sound4.play();
                    break;
                case sf::Keyboard::Num4:
                    sound5.play();
                    break;
                case sf::Keyboard::R:
                    sound6.play();
                    break;
                case sf::Keyboard::Num5:
                    sound7.play();
                    break;
                case sf::Keyboard::T:
                    sound8.play();
                    break;
                case sf::Keyboard::Y:
                    sound9.play();
                    break;
                case sf::Keyboard::Num7:
                    sound10.play();
                    break;
                case sf::Keyboard::U:
                    sound11.play();
                    break;
                case sf::Keyboard::Num8:
                    sound12.play();
                    break;
                case sf::Keyboard::I:
                    sound13.play();
                    break;
                case sf::Keyboard::Num9:
                    sound14.play();
                    break;
                case sf::Keyboard::O:
                    sound15.play();
                    break;
                case sf::Keyboard::P:
                    sound16.play();
                    break;
                case sf::Keyboard::Hyphen:
                    sound17.play();
                    break;
                case sf::Keyboard::LBracket:
                    sound18.play();
                    break;
                case sf::Keyboard::Equal:
                    sound19.play();
                    break;
                case sf::Keyboard::Z:
                    sound20.play();
                    break;
                case sf::Keyboard::X:
                    sound21.play();
                    break;
                case sf::Keyboard::D:
                    sound22.play();
                    break;
                case sf::Keyboard::C:
                    sound23.play();
                    break;
                case sf::Keyboard::F:
                    sound24.play();
                    break;
                case sf::Keyboard::V:
                    sound25.play();
                    break;
                case sf::Keyboard::G:
                    sound26.play();
                    break;
                case sf::Keyboard::B:
                    sound27.play();
                    break;
                case sf::Keyboard::N:
                    sound28.play();
                    break;
                case sf::Keyboard::J:
                    sound29.play();
                    break;
                case sf::Keyboard::M:
                    sound30.play();
                    break;
                case sf::Keyboard::K:
                    sound31.play();
                    break;
                case sf::Keyboard::Comma:
                    sound32.play();
                    break;
                case sf::Keyboard::Period:
                    sound33.play();
                    break;
                case sf::Keyboard::Semicolon:
                    sound34.play();
                    break;
                case sf::Keyboard::Slash:
                    sound35.play();
                    break;
                case sf::Keyboard::Quote:
                    sound36.play();
                    break;
                case sf::Keyboard::Space:
                    sound37.play();
                    break;
                default:
                    break;
                }

            default:
                break;
            }

            window.clear();
            window.display();
        }
    }
    return 0;
}
