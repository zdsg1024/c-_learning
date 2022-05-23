#include <iostream>
using namespace std;

/*
   函数的声明: 函数可以声明很多次,但是只能定义一次
   作用: 当函数定义在main后面实现,那么代码会找不到该函数存在,但是可以先在main的前面声明一下该函数,这样就解决了该问题;
*/

int max(int a,int b);

int main(){

   cout << max(1,2) << endl;;

    return 0;
}

int max(int a,int b){
    return a>b?a:b;
}