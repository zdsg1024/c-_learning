#include <iostream>
using namespace std;

/*
    结构体嵌套:
    定义：结构体中的成员可以是另一个结构体
    语法：struct 结构体名称 { 结构体变量 };

*/

// 1. 创建学生的结构体
struct student
{
    string name;
    int age;
    int score;
};

// 2. 创建老师的结构体,包含学生
struct teacher
{
    string name;
    student s1;
};

int main()
{

    teacher t1 = {"a", {"b", 10, 20}};
    // 输出老师a的学生的姓名
    cout << t1.s1.name << endl;

    return 0;
}