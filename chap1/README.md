**Exercise 1.1**: Review the documentation for your compiler and determine what file naming convention it uses. Compile and run the main program from page 2.

参见[为 Visual C++ 项目创建的文件类型](https://docs.microsoft.com/zh-cn/previous-versions/visualstudio/visual-studio-2013/3awe4781(v=vs.120)?redirectedfrom=MSDN)。
```cpp
int main()
{
    return 0;
}
```

**Exercise 1.2**: Change the program to return -1. A return value of -1 is often treated as an indicator that the program failed. Recompile and rerun your program to see how your system treats a failure indicator from main.
```cpp
int main()
{
    return -1;
}
```
<img width="458" alt="image" src="https://user-images.githubusercontent.com/68184886/150718134-f9cdc2fa-ff06-4e55-8b18-49c36a84e73f.png">

**Exercise 1.3**: Write a program to print Hello, World on the standard output.
```cpp
#include <iostream>
int main() {
	std::cout << "Hello, World" << std::endl;
	return 0;
}
```

**Exercise 1.4**: Our program used the addition operator, +, to add two numbers. Write a program that uses the multiplication operator, \*, to print the product instead.
```cpp
#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl; 
	int v1 = 0, v2 = 0; 
	std::cin >> v1 >> v2; 
	std::cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl; 
	return 0;
}
```

**Exercise 1.5**: We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.
```cpp
#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl; 
	int v1 = 0, v2 = 0; 
	std::cin >> v1 >> v2; 
	std::cout << "The product of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 * v2;
	std::cout << std::endl; 
	return 0;
}
```	

**Exercise 1.6**: Explain whether the following program fragment is legal.
```cpp
std::cout << "The sum of " << v1;
<< " and " << v2;
<< " is " << v1 + v2 << std::endl;
```
不合法，因为用分号隔开了之后，"<<"没有操作对象,在每一行第一个没有"std::cout"的"<<"加上它。

**Exercise 1.7**: Compile a program that has incorrectly nested comments.
```cpp
#include <iostream>
int main()
{
	/*
	This is a test./*
	*/
	*/
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
	return 0;
}
```
<img width="415" alt="image" src="https://user-images.githubusercontent.com/68184886/150902977-76d40ba4-b51f-4cef-9851-14cf0bd3a662.png">

**Exercise 1.8**: Indicate which, if any, of the following output statements are legal:
```cpp
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```
一二四合法。第三条实际参与编译的表达式为
```cpp
std::cout << " */;
```

**Exercise 1.9**: Write a program that uses a while to sum the numbers from 50 to 100.
```cpp
#include <iostream>
int main() {
	int i = 50, j = 0;
	while (i <= 100) {
		j = j + i;
		++i;
	}
	std::cout << j << std::endl;
	return 0;
}
```

**Exercise** 1.10: In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.
```cpp
#include <iostream>
int main() {
	int i = 100, j = 0;
	while (i >= 50) {
		j = j + i;
		--i;
	}
	std::cout << j << std::endl;
	return 0;
}
```

**Exercise 1.11**: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.
```cpp
#include <iostream>
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
```

**Exercise 1.12**: What does the following for loop do? What is the final value of sum?
```cpp
int sum = 0;
for (int i = -100; i <= 100; ++i)
 sum += i;
```
从-100加到100，最后sum的值是0。

**Exercise 1.13**: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.
1.9plus
```cpp
#include <iostream>
int main() {
	int j = 0;
	for (int i = 50; i <= 100; ++i) {
		j = j + i;
	}
	std::cout << j << std::endl;
	return 0;
}
```
1.10plus
```cpp
#include <iostream>
int main() {
	int j = 0;
	for (int i = 100; i >= 50; --i) {
		j = j + i;
	}
	std::cout << j << std::endl;
	return 0;
}
```
1.11plus
```cpp
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
```

**Exercise 1.14**: Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form?

for可以较为清楚地表述起始和终止条件，但是假如有多级判定不如while。

**Exercise 1.15**: Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages the compiler generates.
```cpp
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
```

**Exercise 1.16**: Write your own version of a program that prints the sum of a set of integers read from cin.
```cpp
#include <iostream>
int main()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value; 
	std::cout << "Sum is: " << sum << std::endl; 
	return 0;
}
```

**Exercise 1.17**: What happens in the program presented in this section if the input values are all equal? What if there are no duplicated values?

正常输出

**Exercise 1.18**: Compile and run the program from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.

<img width="103" alt="image" src="https://user-images.githubusercontent.com/68184886/150909175-42f663c1-064d-49b4-b482-156aaf0da244.png">

<img width="115" alt="image" src="https://user-images.githubusercontent.com/68184886/150909218-67993b76-ee65-4abe-979e-221b36cb2f11.png">

**Exercise 1.19**: Revise the program you wrote for the exercises in § 1.4.1 (p.13) that printed a range of numbers so that it handles input in which the first number is smaller than the second.

已经实现了，参加1.11的代码

**Exercise 1.20**: http://www.informit.com/title/032174113 contains a copy of Sales_item.h in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output.
```cpp
#include <iostream>
#include "Sales_item.h"
int main() {
	for (Sales_item item; std::cin >> item;) {
		std::cout << item << std::endl;
	}
	return 0;
}
```

**Exercise 1.21**: Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.
```cpp
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item1,item2; 
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
	return 0;
}
```

**Exercise 1.22**: Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were read.
```cpp
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item1, item2;
	if (std::cin >> item1) {
		while (std::cin >> item2) {
			if (item1.isbn() == item2.isbn()) {
				item1 += item2;
			}
			else {
				std::cout << "The isbn is not same!" << std::endl;
				return -1;
			}
		}
		std::cout << item1 << std::endl;
	}
	return 0;
}
```

**Exercise 1.23**: Write a program that reads several transactions and counts how many transactions occur for each ISBN.
```cpp
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item currItem, valItem;
	if (std::cin >> currItem)
	{
		int cnt = 1;
		while (std::cin >> valItem)
		{
			if (valItem.isbn() == currItem.isbn())
			{
				++cnt;
			}
			else
			{
				std::cout << currItem << " occurs " << cnt << " times " << std::endl;
				currItem = valItem;
				cnt = 1;
			}
		}
		std::cout << currItem << " occurs " << cnt << " times " << std::endl;
	}
	return 0;
}
```

**Exercise 1.24**: Test the previous program by giving multiple transactions representing multiple ISBNs. The records for each ISBN should be grouped together.
<img width="227" alt="image" src="https://user-images.githubusercontent.com/68184886/150912369-9c01d9bf-c3a9-4bc2-9bf0-c96bbfc7ff05.png">

**Exercise 1.25**: Using the Sales_item.h header from the Web site, compile and execute the bookstore program presented in this section.
```
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item total; // variable to hold data for the next transaction
	// read the first transaction and ensure that there are data to process
	if (std::cin >> total) {
		Sales_item trans; // variable to hold the running sum
		// read and process the remaining transactions
		while (std::cin >> trans) {
			// if we're still processing the same book
			if (total.isbn() == trans.isbn())
				total += trans; // update the running total
			else {
				// print results for the previous book
				std::cout << total << std::endl;
				total = trans; // total now refers to the next book
			}
		}
		std::cout << total << std::endl; // print the last transaction
	}
	else {
		// no input! warn the user
		std::cerr << "No data?!" << std::endl;
		return -1; // indicate failure
	}
	return 0;
}
```
