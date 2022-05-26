#include <iostream>
using namespace std;

/*
    结构体:
    定义：属于用户自定义的数据类型,可以包含多种数据类型
    语法: struct 结构名 {结构体成员列表};

*/

// 1. 创建一个学生的结构体
struct Student
{
    string name;
    int age;
    int score;
};

// 2.3 定义结构体的同时创建结构体的实例
struct Person
{
    string name;
} person1;

int main()
{

    // 2. 通过学生的结构体创建具体的学生
    // 2.1 方式1  创建结构体的实例的时候 struct关键字可以省略
    Student s3;
    struct Student s1;
    s1.name = "a";
    s1.age = 10;
    s1.score = 20;
    cout << "姓名: " << s1.name << " 年龄: " << s1.age << " 分数: " << s1.score << endl;
    ;
    // 2.2 方式2
    struct Student s2 = {"b", 15, 21};
    cout << "姓名: " << s2.name << " 年龄: " << s2.age << " 分数: " << s2.score << endl;

    // 2.3 方式3
    person1.name = "c";
    cout << "姓名: " << person1.name << endl;

    return 0;
}