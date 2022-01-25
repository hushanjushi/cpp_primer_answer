/* Syntax errors
int main({
	// error: used colon, not a semicolon, after endl
	std::cout << "Read each file." << std::endl:
	// error: missing quotes around string literal
	std::cout << Update master. << std::endl;
	// error: second output operator is missing
	std::cout << "Write new master." std::endl;
	// error: missing ; on return statement
	return 0
}
*/
/* Type errors
#include <iostream>
int main()
{
	int v1 = 0;
	string v2 = "0";
	v1 = v2;
	return 0;
}
*/
/* Declaration errors
#include <iostream>
int main()
{
	int v1 = 0, v2 = 0;
	std::cin >> v >> v2; // error: uses "v" not "v1"
	// error: cout not defined; should be std::cout
	cout << v1 + v2 << std::endl; 
	return 0;
}
*/