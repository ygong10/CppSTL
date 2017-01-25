#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <cstddef>

template <class T>
class doubly_linked_list {
	public:
		doubly_linked_list();
		doubly_linked_list(doubly_linked_list& other);
		doubly_linked_list(doubly_linked_list&& other);
		doubly_linked_list& operator=(const doubly_linked_list& other);
		~doubly_linked_list();
		
		void push_front(T const& elem);
		void push_back(T const& elem);
		void pop_front();
		void pop_back();
		size_t size() const;
		bool empty();
        T& front();
        T& back();
        
	private:
		size_t my_size;
		doubly_linked_list* prev;
		doubly_linked_list* next;
};

#include "doubly_linked_list.tcc"
#endif
