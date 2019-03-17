#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	set<string> dict = { "vil", "sit", "flick", "pat", "pluck", "sat", "vat", "vit" };
	map<int, vector<string>> myMap;
	string result[3];

	string input = "vit";

	for(auto iter = dict.begin(); iter != dict.end(); ++iter) {
		if(input.length() != iter->length()) continue;

		int diffCount = 0;
		for(int i = 0; i < input.length(); ++i) {
			if(input.at(i) != iter->at(i)) diffCount++;
		}

		myMap[diffCount].push_back(*iter);
	}

	for(int i = 0; i < 3; ++i) {
		result[i] = myMap[1][i];
		cout << result[i] << endl;
	}

	return 0;
}