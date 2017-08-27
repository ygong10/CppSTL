CXX = clang++

CXXFLAGS = -Iinc -std=c++1y -stdlib=libstdc++ -c -g -O0 -Wall -Wextra
LDFLAGS = -std=c++1y -stdlib=libstdc++ -lc++abi

OBJECTS = main.o test_suite.o color.o

all: $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o main

main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) src/main.cpp

test_suite.o: inc/test_suite.h src/test_suite.cpp
	$(CXX) $(CXXFLAGS) src/test_suite.cpp

color.o: inc/color.h src/color.cpp
	$(CXX) $(CXXFLAGS) src/color.cpp

clean: 
	-rm -f *.o main