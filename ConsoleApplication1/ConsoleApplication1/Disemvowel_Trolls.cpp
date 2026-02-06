
#include <iostream>
#include <string>
#include <vector>


std::string disemvowel(const std::string& str) {

	std::vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
	std::string rez = "";

	for (int i = 0; i < str.length(); i++) {

		int flag = 0;
		for (int j = 0; j < vowels.size(); j++)

			if (tolower(str[i]) == vowels[j]) {
				flag = 1;
				break;
			};

		if (flag == 0)
			rez += str[i];

	};

	return rez;
};
