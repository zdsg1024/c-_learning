#include <iostream>
using namespace std;

/*
    结构体指针:
    定义：利用操作符 -> 可以通过结构体指针访问结构体属性

*/

// 1. 创建一个学生的结构体
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{

    // 定义一个结构体变量
    Student s1 = {"a", 10, 20};
    // 定义一个结构体指针
    Student * p = &s1;
    // 输出结构体变量的值
    cout << "name: " << p->name << " age: " << p->age << " score: " << p->score;

    return 0;
}