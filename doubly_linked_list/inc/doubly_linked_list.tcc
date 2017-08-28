/* Constructors */
template <typename T>
doubly_linked_list<T>::doubly_linked_list() : _size(0), _head(nullptr), _tail(nullptr) {}

/* Destructor */
template <typename T>
doubly_linked_list<T>::~doubly_linked_list() {
	while (_tail) {
		auto temp = _tail;
		_tail = _tail->prev;
		delete temp;
	}
}

/* Operator= */

/* Capacity */
template <typename T>
bool doubly_linked_list<T>::empty() const {
	return _size == 0;
}

template <typename T>
size_t doubly_linked_list<T>::size() const {
	return _size;
}

/* Element Access */
template <typename T>
T& doubly_linked_list<T>::front() {
	if (!_head) {
		throw std::runtime_error("Empty List");
	}

	return _head->_data;
}

template <typename T>
T& doubly_linked_list<T>::back() {
	if (!_tail) {
		throw std::runtime_error("Empty List");
	}

	return _tail->_data;
}

/* Modifiers */
template <typename T>
void doubly_linked_list<T>::push_front(T const& elem) {
	node* new_node = new node(elem);

	// If empty
	if (!_head) {
		_head = new_node;
		_tail = new_node;
	} else {
		_head->_prev = new_node;
		new_node->_next = _head;
		_head = new_node;
	}

	_size++;
}

template <typename T>
void doubly_linked_list<T>::push_back(T const& elem) {
	node* new_node = new node(elem);

	// If empty
	if (!_tail) {
		_head = new_node;
		_tail = new_node;
	} else {
		_tail->_next = new_node;
		new_node->_prev = _tail;
		_tail = new_node;
	}

	_size++;
}

template <typename T>
void doubly_linked_list<T>::pop_front() {
	if (_size == 0) {
		throw std::runtime_error("Empty List");
	}

	auto temp = _head;
	_head = _head->_next;
	_head->_prev = nullptr;
	delete temp;
	_size--;
}

template <typename T>
void doubly_linked_list<T>::pop_back() {
	if (_size == 0) {
		throw std::runtime_error("Empty List");
	}

	auto temp = _tail;
	_tail = _tail->_prev;
	_tail->_next = nullptr;
	delete temp;
	_size--;
}
