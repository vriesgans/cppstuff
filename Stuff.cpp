#include <iostream>
#include "lib/LinkedList.hpp"

using namespace std;

int main() {
	// Example usage
	auto list = new structures::LinkedList<int>();
	list->addToBack(11);
	list->addToBack(22);
	list->addToBack(33);
	list->addToBack(44);
	cout << list->getBack() << endl;
	list->popBack();
	cout << list->getBack() << endl;
	return 0;
}
