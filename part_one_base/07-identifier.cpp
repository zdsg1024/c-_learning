#include <iostream>
using namespace std;
int main()
{
    // 标识符命名规则
    /*
    1. 标识符不能是关键字
    2. 标识符只能由数字,字母,下划线组成
    3. 标识符第一个字符只能是字母或下划线
    4. 标识符中字母区分大小写
    5. $也是支持的(并且也可以放在第一个字符)
    */

    int $a = 10;
    int a$ = 10;
    int b2 = 10;
    cout << "$a=" << $a << endl;
    cout << "a$=" << a$ << endl;
    cout << "b2=" << b2 << endl;
    return 0;
}