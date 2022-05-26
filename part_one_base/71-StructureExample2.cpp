#include <iostream>
using namespace std;

/*
    案例2: 定义一个英雄结构体,其中有五个英雄,属性包括,姓名,年龄,性别
*/

// 创建hero的结构体
struct hero
{
    string name;
    int age;
    string sex;
};

void bubbleSort(hero harr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (harr[j].age > harr[j + 1].age)
            {
                int tmp = harr[j].age;
                harr[j].age = harr[j + 1].age;
                harr[j + 1].age = tmp;
            }
        }
    }
}

void printInfo(hero harr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "姓名:" << harr[i].name << " 年龄:" << harr[i].age << " 性别:" << harr[i].sex << endl;
    }
}

int main()
{

    hero harr[5] = {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"}};

    // 对数组进行排序,按照年龄生序排序
    int length = sizeof(harr) / sizeof(harr[0]);
    bubbleSort(harr, length);

    printInfo(harr, length);

    return 0;
}