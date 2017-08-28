#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

#include "doubly_linked_list.h"
#include "test_suite.h"
#include "../test/test.cpp"

int main() {
	test_suite* ts = new test_suite("Doubly Linked List Tests");
	ts->add("size test", test::test_size_10);
	ts->add("push_back", test::test_push_back);
	ts->run_all();
	
	return 0;
}
