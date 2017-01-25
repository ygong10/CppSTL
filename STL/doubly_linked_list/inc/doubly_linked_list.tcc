template <class T>
doubly_linked_list<T>::doubly_linked_list() : my_size(0), prev(nullptr), next(nullptr) {}

template <class T>
size_t doubly_linked_list<T>::size() const {
	return my_size;
}
