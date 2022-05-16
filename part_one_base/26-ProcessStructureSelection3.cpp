#include <iostream>
using namespace std;
int main()
{
    /*
      程序流程结构有三种：
      顺序结构: 所有的代码一条一条执行,都是顺序结构
      选择结构: 判断条件是否满足,有选择的执行相应代码
      循环结构: 判断条件是否满足循环之行某段代码
    */

    /*
      选择结构-if 多条件if语句
      语法：if (condition1)
                {true-exec}
            else if (condifion2)
                {true exec}
            else if (condition3)
                {true exec}
            else
                exec
    */

    int score = 82;
    if (score >= 90)
    {
        cout << "成绩优异" << endl;
    }
    else if (score >= 80)
    {
        cout << "成绩良好" << endl;
    }
    else if (score >= 60)
    {
        cout << "成绩合格" << endl;
    }
    else if (score >= 0)
    {
        cout << "成绩不合格" << endl;
    }
    else
    {
        cout << "成绩有误" << endl;
    }

    return 0;
}