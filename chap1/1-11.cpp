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
	while (i <= j) {
		std::cout << i << std::endl;
		++i;
	}
	return 0;
}