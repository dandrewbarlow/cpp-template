CXX = g++
CXXFLAGS = -Wall -Og `pkg-config --cflags --libs gtkmm-3.0`

main: main.o
	$(CXX) $(CXXFLAGS) main.o -o main

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm *.o
	rm main
