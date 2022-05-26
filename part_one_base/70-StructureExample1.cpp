#include <iostream>
using namespace std;

/*
    案例1: 3个老师,每个老师5个学生,通过函数输入每个老师以及学生的信息,并输出
*/

// 1. 创建学生的结构体
struct student
{
    string name;
    int score;
};

// 2. 创建老师的结构体,包含学生
struct teacher
{
    string name;
    student arr[5];
};

// 给老师和学生赋值
void allocateSpace(teacher arr[], int length)
{
    // 输入老师信息
    for (int i = 0; i < length; i++)
    {
        cout << "请输入第" << i + 1 << "个老师姓名：";
        cin >> arr[i].name;
        cout << endl;
        // 统计每个老师下的学生数量
        int stuNum = sizeof(arr[i].arr) / sizeof(arr[i].arr[0]);
        // 输入学生信息
        for (int j = 0; j < stuNum; j++)
        {
            cout << "请输入第" << i + 1 << "个老师的第" << j + 1 << "个学生的姓名：";
            cin >> arr[i].arr[j].name;
            cout << endl;
            cout << "请输入第" << i + 1 << "个老师的第" << j + 1 << "个学生的分数：";
            cin >> arr[i].arr[j].score;
            cout << endl;
        }
    }
}

// 输出老师和学生信息
void printInfo(teacher t[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "第" << i + 1 << "位老师的姓名为：";
        cout << t[i].name << endl;
        int stuNum = sizeof(t[i].arr) / sizeof(t[i].arr[0]);
        cout << t[i].name << "老师的学生信息为：" << endl;
        for (int j = 0; j < stuNum; j++)
        {
            cout << "姓名:" << t[i].arr[j].name << "  分数:" << t[i].arr[j].score << endl;
        }
    }
}

int main()
{

    // 1.定义3个老师
    teacher tarr[3];
    // 2.通过函数对老师信息以及学生信息进行赋值
    int length = sizeof(tarr) / sizeof(tarr[0]);
    allocateSpace(tarr, length);
    // 3.输出老师和学生的信息
    printInfo(tarr, length);

    return 0;
}