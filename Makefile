CC = g++
CFLAGS = -std=c++11 -Wall -Werror -pedantic
SFMLFLAGS = -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system
DEPS = CircularBuffer.h StringSound.h
all: KSGuitarSim lint

lint:
	cpplint CircularBuffer.h CircularBuffer.cpp StringSound.h StringSound.cpp KSGuitarSim.cpp testSS.cpp testCB.cpp

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -o $@ -c $<

KSGuitarSim: CircularBuffer.o StringSound.o KSGuitarSim.o
	$(CC) $(CFLAGS) -o KSGuitarSim $^ $(LIBS) $(SFMLFLAGS)

clean:
	rm *.o KSGuitarSim
