/*
例7.1 想输出以下的结果，用函数调用实现。
*******************
  How do you do!
*******************
*/

#include<iostream>
using namespace std;
int main()
{
    void print_star();
    void print_message();
    print_star();
    print_message();
    print_star();
    return 0;
}

void print_star()
{
    cout << "*******************" << endl;
}

void print_message()
{
    cout << "  How do you do!" << endl;
}
