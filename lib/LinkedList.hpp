#pragma once

#include <stdexcept>
#include "Node.hpp"

namespace structures {

template <typename T>
class LinkedList {
private:
	Node<T> *head;
	Node<T> *tail;
	int count;
public:
	LinkedList() {
		head = tail = nullptr;
		count = 0;
	};

	void addToFront(T item) {
		Node<T> *node = new Node<T>(item);
		if (count == 0) {
			head = tail = node;
		} else {
			node->setNext(head);
			head = node;
		}
		count++;
	}

	void addToBack(T item) {
		Node<T> *node = new Node<T>(item);
		if (count == 0) {
			head = tail = node;
		} else {
			tail->setNext(node);
			node->setPrevious(tail);
			tail = node;
		}
		count++;
	}

	void popFront() {
		if (count != 0) {
			if (head->getNext() != nullptr) {
				head = head->getNext();
				head->setPrevious(nullptr);
			} else {
				head = tail = nullptr;
			}
			count--;
		}
	}

	void popBack() {
		if (count != 0) {
			if (tail->getPrevious() != nullptr) {
				tail = tail->getPrevious();
				tail->setNext(nullptr);
			} else {
				head = tail = nullptr;
			}
			count--;
		}
	}

	T getFront() {
		if (count != 0) {
			return head->getValue();
		} else {
			throw std::out_of_range("Element access on empty container.");
		}
	}

	T getBack() {
		if (count != 0) {
			return tail->getValue();
		} else {
			throw std::out_of_range("Element access on empty container.");
		}
	}

	int Length() {
		return count;
	}

	virtual ~LinkedList() {};
};

}
