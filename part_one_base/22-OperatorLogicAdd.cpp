#include <iostream>
using namespace std;

int main()
{
    /*
    逻辑运算符：
    逻辑与：&&    两者都为真才真
    */

    int a = 10;
    int b = 10;
    cout << (a&&b) << endl;  // 1
    int c = 0;
    cout << (a&&c) << endl;  // 0
    
    return 0;
}