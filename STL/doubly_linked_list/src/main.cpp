#include <iostream>
#include "doubly_linked_list.h"

int main() {
	doubly_linked_list<int>* list = new doubly_linked_list<int>();
	std::cout << list->size() << std::endl;
	return 0;
}
