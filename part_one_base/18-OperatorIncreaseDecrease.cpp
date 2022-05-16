#include <iostream>
using namespace std;
int main()
{
    /*
    运算符 ++  --
    前置运算： ++a  --a
    后置运算:  a++  a--
    */
     
    int a = 10;
    int b = ++a;
    cout << "先递增a,后赋值b：b=" << b << endl;  // 11
    a = 10;
    b = a++;
    cout << "先赋值b,后递增a：b=" << b << endl;  // 10
    return 0;

    // 递减也是同理
}