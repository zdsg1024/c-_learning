#include <iostream>
using namespace std;
int main()
{
    /*
      程序流程结构: 循环结构
      练习：猜数字
      题目描述：程序随机生成1个1-100之间的数字，循环输入进行猜测,直到猜测正确,程序结束
    */
    // 设置随机种子,如果不设定,每次随机数的结果相同
    srand(unsigned(time(NULL)));
    int a = rand() % 100 + 1;
    int b = 0;

    cout << "please enter a number:";
    cin >> b;
    cout << endl;

    int count = 1;

    while (b != a)
    {
        count += 1;
        if (a > b)
        {
            cout << "the number you have entered is less then the result" << endl;
            cout << "please enter again:";
            cin >> b;
            cout << endl;
        }
        else
        {
            cout << "the number you have entered is bigger then the result" << endl;
            cout << "please enter again:";
            cin >> b;
            cout << endl;
        }
    }

    printf("veitory,you have entered %d times", count);

    return 0;
}