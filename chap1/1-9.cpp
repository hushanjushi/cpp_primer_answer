#include<iostream>
int main() {
	int i = 50, j = 0;
	while (i <= 100) {
		j = j + i;
		++i;
	}
	std::cout << j << std::endl;
	return 0;
}