#include <iostream>
#include <deque>

using namespace std;

void PrintDeque(deque<string> strings) {
	for (deque<string>::const_iterator it = strings.begin(); it != strings.end(); it++) {
		cout << *it << endl;
	}
}

deque<string> AddToQueue(deque<string> strings) {
	string frontInput;
	string backInput;

	cout << "Enter a string for the front of the queue: " << endl;
	cin >> frontInput;
	strings.push_front(frontInput);

	cout << "Enter a string for the back of the queue: " << endl;
	cin >> backInput;
	strings.push_back(backInput);

	return strings;
}

deque<string> RemoveEnds(deque<string> strings) {
	strings.pop_back();
	strings.pop_front();

	return strings;
}

int main() {
	deque<string> names = { "oscar", "elliott", "aimee", "jonathan", "ricky" };

	deque<string> modNames = AddToQueue(names);

	cout << endl;

	PrintDeque(RemoveEnds(modNames));

	

	return 0;
}