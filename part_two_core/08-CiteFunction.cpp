#include <iostream>
using namespace std;

/*
   引用传递,将实参的地址传递给形参
*/

// 值传递
void swap1(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout << "函数内部a和b的值分别为:" << a << " " << b << endl;
}



// 地址传递
void swap2(int * a, int * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    cout << "函数内部a和b的值分别为:" << *a << " " << *b << endl;
}

// 引用传递
void swap3(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout << "函数内部a和b的值分别为:" << a << " " << b << endl;
}

int main()
{
   int a = 10;
   int b = 20;
   cout << "函数执行前函数外部a和b的值分别为:" << a << " " << b << endl; // 10 20
   swap1(a,b);
   cout << "函数执行后函数外部a和b的值分别为:" << a << " " << b << endl; // 10 20


   a = 10;
   b = 20;
   cout << "函数执行前函数外部a和b的值分别为:" << a << " " << b << endl; // 10 20
   swap2(&a,&b);
   cout << "函数执行后函数外部a和b的值分别为:" << a << " " << b << endl; // 20 10

   a = 10;
   b = 20;
   cout << "函数执行前函数外部a和b的值分别为:" << a << " " << b << endl; // 10 20
   swap3(a,b);
   cout << "函数执行后函数外部a和b的值分别为:" << a << " " << b << endl; // 20 10

   return 0;

}