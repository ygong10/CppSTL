CXX = clang++

CXXFLAGS = -Iinc -std=c++1y -stdlib=libstdc++ -c -g -O0 -Wall -Wextra
LDFLAGS = -std=c++1y -stdlib=libstdc++ -lc++abi

OBJECTS = main.o

all: $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o main

main.o: src/main.cpp inc/doubly_linked_list.h inc/doubly_linked_list.tcc
	$(CXX) $(CXXFLAGS) src/main.cpp

clean: 
	-rm -f *.o main
