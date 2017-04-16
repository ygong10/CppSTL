/* 
Author: Yicheng Gong
Date: January 25th, 2017
*/

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <cstddef>

template <typename T>
class doubly_linked_list {
	public:
		/* Constructor */
		doubly_linked_list();
		doubly_linked_list(doubly_linked_list& other);
		doubly_linked_list(doubly_linked_list&& other);

		/* Destructor */
		~doubly_linked_list();

		/* Operator= */
		doubly_linked_list& operator=(const doubly_linked_list& other);
		
		/* Capacity */
		bool empty() const;
		size_t size() const;

		/* Element Access */
        T& front();
        T& back();

		/* Modifiers */
		void push_front(T const& elem);
		void push_back(T const& elem);
		void pop_front();
		void pop_back();

	private:
		struct node {
			T _data;
			node* _prev;
			node* _next;

			node(T const& data) : _data(data), _prev(nullptr), _next(nullptr) {}
		};

		size_t _size;
		node* _head;
		node* _tail;
};

#include "doubly_linked_list.tcc"
#endif
