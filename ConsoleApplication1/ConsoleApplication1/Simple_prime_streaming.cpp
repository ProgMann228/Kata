#include <string>
#include <iostream>
#include <cmath>

bool is_prime(int a) {

	int flag = 0;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) flag = 1;
	}

	if (flag == 0) return true;
	else return false;
}


std::string solve(int a, int b) {

	std::string s = "";
	std::string rez = "";
	int i = 2;

	while (s.length() <= 20010) {

		if (is_prime(i)) {
			s += std::to_string(i);
		}
		i++;
	}
	//std::cout << s << std::endl;

	int k = 0;
	while (k < b) {
		rez += s[a];
		a++; 
		k++;
	}

	return rez;
}