#include <iostream>
using namespace std;

/*
   函数的常见样式
   1: 无参无返
   2: 有参无返
   3: 无参有返
   4: 有参有返
*/

// 1. 无参无返
void test01(){
    cout << "test01" <<endl;
}

// 2. 有参无返
void test02(int a){
    cout << "test02" <<endl;
}

// 3. 无参有返
int test03(){
    cout << "test03" <<endl;
    return 10;
}

// 4. 有参有返
int test04(int a){
    cout << "test04" <<endl;
    return a;
}

int main(){

    test01();
    test02(100);
    int num3=test03();
    cout << num3 << endl;
    int num4=test04(15);
    cout << num4 << endl;
  

    return 0;
}