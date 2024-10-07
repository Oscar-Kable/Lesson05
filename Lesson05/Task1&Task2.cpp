#include <iostream>
#include <vector>

using namespace std;

void PrintVector(vector<int> vec);
void PrintVector(vector<string> vec);
void Task1(vector<int>& numbers);
void RemoveEvens(vector<int>& vec);
void Task2(vector<string> strVec);


void PrintVector(vector<int> vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}

void PrintVector(vector<string> vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}


void Task1(vector<int>& numbers) {
	int counter = 0;
	int input;

	while (counter < 5) {
		cout << "Enter a value: " << endl;
		cin >> input;

		numbers.push_back(input);
		cout << "The capacity of the vector is: " << numbers.capacity() << endl;
		cout << "The size of the vector is: " << numbers.size() << endl;

		counter++;
	}
}

void RemoveEvens(vector<int>& vec) {
	vector<int> temp = {};

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] % 2 != 0) {
			temp.push_back(vec[i]);
		}
	}
	cout << "The capacity of the vector is: " << temp.capacity() << endl;
	cout << "The size of the vector is: " << temp.size() << endl;
	PrintVector(temp);
}

void Task2(vector<string> strVec) {
	for (int i = 0; i < strVec.size(); i++) {
		for (int j = 0; j < strVec[i].size(); j++) {
				strVec[i].at(j) = toupper(strVec[i].at(j));			
		}
	}
	PrintVector(strVec);
}

vector<string> Task2Revised(vector<string> strVec) {
	for (int i = 0; i < strVec.size(); i++) {
		for (int j = 0; j < strVec[i].size(); j++) {
			strVec[i].at(j) = toupper(strVec[i].at(j));
		}
	}
	return strVec;
}

void ReverseString(vector<string>& strVec) {
	for (int i = 0; i < strVec.size(); i++) {
		reverse(strVec[i].begin(), strVec[i].end());
	}
	PrintVector(strVec);
}

vector<string> ReverseOrder(vector<string> strVec) {
	vector<string> temp;
	for (int i = strVec.size() - 1; i >= 0; i--) {
		temp.push_back(strVec[i]);
	}
	return temp;
}


int main() {

	vector<string> strings = { "hello", "oscar", "c plus plus", "programming" };

	Task2(strings);

	vector<string> revOrder = ReverseOrder(strings);

	PrintVector(revOrder);


	return 0;
}