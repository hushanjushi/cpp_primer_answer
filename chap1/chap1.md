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

