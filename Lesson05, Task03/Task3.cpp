#include <iostream>
#include <list>

using namespace std;

void PrintList(list<int> nums) {
	list<int>::iterator it = nums.begin();

	for (list<int>::const_iterator it = nums.begin(); it != nums.end(); ++it) {
		cout << *it << endl;
	}
}

list<int> Task3(list<int> ints) {
	int frontInput;
	int backInput;

	cout << "Enter a number to go at the back: " << endl;
	cin >> backInput;
	ints.push_back(backInput);

	cout << "Enter a number to go at the front: " << endl;
	cin >> frontInput;
	ints.push_front(frontInput);

	int midPos = ints.size() / 2;
	list<int>::iterator it = ints.begin();

	advance(it, midPos);

	ints.erase(it);

	return ints;
}

int main() {
	list<int> numbers = { 1,2,3,4,5,6,7,8,9 };

	PrintList(numbers);

	list<int> modifiedList = Task3(numbers);

	PrintList(modifiedList);

	return 0;
}