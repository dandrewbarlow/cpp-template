CXX = g++ -std=c++17
CXXFLAGS = -Wall -Og
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
EXEC=main

$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC)

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


clean:
	rm -f $(OBJECTS) $(DEPENDS) $(EXEC)
