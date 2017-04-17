#include <iostream>
#include "doubly_linked_list.h"

namespace test {
    bool test_size_10() {
        doubly_linked_list<int>* list = new doubly_linked_list<int>();

        for (int i = 0; i < 10; i++) {
            list->push_back(i);
        }

        return list->size() == 10;
    }

    bool test_push_back() {
        doubly_linked_list<int>* list = new doubly_linked_list<int>();

        list->push_back(2);

        return list->back() == 2;
    }
}