CXX = clang++

CXXFLAGS = -Iinc -I../test_suite/inc -std=c++1y -stdlib=libstdc++ -c -g -O0 -Wall -Wextra
LDFLAGS = -std=c++1y -stdlib=libstdc++ -lc++abi

OBJECTS = main.o test_suite.o color.o

.PHONY: clean

all: $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o main

color.o: ../test_suite/src/test_suite.cpp ../test_suite/src/color.cpp
	$(CXX) $(CXXFLAGS) ../test_suite/src/color.cpp

test_suite.o: ../test_suite/inc/test_suite.h ../test_suite/src/test_suite.cpp 
	$(CXX) $(CXXFLAGS) ../test_suite/src/test_suite.cpp

main.o: src/main.cpp inc/doubly_linked_list.h inc/doubly_linked_list.tcc
	$(CXX) $(CXXFLAGS) src/main.cpp

clean: 
	-rm -f *.o main
