#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <ctime>

using namespace std;

// Insert elements in the front and back
void VectorInsert(vector<int> vec, int x, int y) {
	vec.push_back(x);
	vec.emplace(vec.begin(), y);
}

void ListInsert(list<int> ints, int x, int y) {
	ints.push_back(x);
	ints.push_front(y);
}

void DequeInsert(deque<int> ints, int x, int y) {
	ints.push_back(x);
	ints.push_front(y);
}

// Random access
void AccessVector(vector<int> vec) {
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}
}

void AccessList(list<int> ints) {
	for (list<int>::iterator it = ints.begin(); it != ints.end(); it++) {
		cout << *it << endl;
	}
}

void AccessDeque(deque<int> ints) {
	for (deque<int>::iterator it = ints.begin(); it != ints.end(); it++) {
		cout << *it << endl;
	}
}

int main() {
	clock_t time;

	vector<int> vecNumbers = { 1,2,3,4,5,6,7,8,9 };
	list<int> listNumbers = { 1,2,3,4,5,6,7,8,9 };
	deque<int> deqNumbers = { 1,2,3,4,5,6,7,8,9 };

	// Inserting elements
	time = clock();
	VectorInsert(vecNumbers, 1, 2);
	time = clock() - time;
	cout << "Time to insert in a vector: " << (float)time / CLOCKS_PER_SEC << " seconds." << endl;

	time = clock();
	ListInsert(listNumbers, 1, 2);
	time = clock() - time;
	cout << "Time to insert in a list: " << (float)time / CLOCKS_PER_SEC << " seconds." << endl;

	time = clock();
	DequeInsert(deqNumbers, 1, 2);
	time = clock() - time;
	cout << "Time to insert in a deque: " << (float)time / CLOCKS_PER_SEC << " seconds." << endl;

	return 0;
}