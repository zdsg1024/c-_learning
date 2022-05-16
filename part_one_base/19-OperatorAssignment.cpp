#include <iostream>
using namespace std;
int main()
{
    /*
       赋值运算符：+= -= /= %=
    */

    int a = 10;
    a += 10; // 等同与 a = a + 10;
    cout << a << endl; // 20

    a -= 2; // 等同与 a = a - 2;
    cout << a << endl; // 18

    a /= 3; // 等同与 a = a / 3;
    cout << a << endl; // 6

    a %= 4; // 等同与 a = a % 4;
    cout << a << endl; // 2

    a *= 2; // 等同与 a = a * 4;
    cout << a << endl; // 4
    

    return 0;
}