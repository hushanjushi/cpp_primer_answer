/* 1.9plus
#include<iostream>
int main() {
	int j = 0;
	for (int i = 50; i <= 100; ++i) {
		j = j + i;
	}
	std::cout << j << std::endl;
	return 0;
}
*/
/* 1.10plus
#include<iostream>
int main() {
	int j = 0;
	for (int i = 100; i >= 50; --i) {
		j = j + i;
	}
	std::cout << j << std::endl;
	return 0;
}
*/
#include<iostream>
int main() {
	int i, j, k;
	std::cout << "Please input two integers:" << std::endl;
	std::cin >> i >> j;
	if (i > j) {
		k = i;
		i = j;
		j = k;
	}
	for (; i <= j; ++i) {
		std::cout << i << std::endl;
	}
	return 0;
}