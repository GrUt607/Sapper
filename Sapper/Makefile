CXX=g++
CXXFLAGS=-std=c++11 -Wall

SOURCES=Sapper.cpp map.cpp main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=sapper_game

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)