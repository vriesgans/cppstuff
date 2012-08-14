#pragma once

namespace structures {

template <typename T>
class Node {
private:
	T value;
	Node<T> *previous;
	Node<T> *next;
public:
	Node(T value) {
		this->value = value;
		previous = next = nullptr;
	}

	Node<T> *getPrevious() {
		return previous;
	}

	void setPrevious(Node<T> *value) {
		previous = value;
	}

	Node<T> *getNext() {
		return next;
	}

	void setNext(Node<T> *value) {
		next = value;
	}

	T getValue() {
		return value;
	}

	virtual ~Node() {};
};

}
