CXX = g++ -std=c++17
WINDOWSCXX = i586-mingw32msvc-g++
CXXFLAGS = -Wall -Og
GTKFLAGS = `pkg-config gtkmm-3.0 --cflags --libs`
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
EXEC=main

$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC) $(GTKFLAGS)

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS) $(GTKFLAGS)


clean:
	rm -f $(OBJECTS) $(DEPENDS) $(EXEC)
