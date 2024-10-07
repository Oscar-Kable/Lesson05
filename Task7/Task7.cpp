#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void PrintVector(vector<string> vec) {
	for (vector<string>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}
}

string ReverseString(string str) {
	vector<char> reversed;
	string ans = "";
	for (char c : str) {
		reversed.emplace(reversed.begin(), c);
	}

	for (int i = 0; i < reversed.size(); i++) {
		ans += reversed[i];
	}

	return ans;
}

void GetPalindromes(const string& filename) {
	ifstream dictionary(filename);
	string s;
	vector<string> strs;

	while (getline(dictionary, s)) {
		if (s == ReverseString(s)) {
			cout << s << endl;
		}
	}
	dictionary.close();
}

int main() {

	GetPalindromes("Dictionary.txt");

	return 0;
}