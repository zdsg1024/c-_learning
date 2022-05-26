#include <iostream>
using namespace std;

/*
    结构体函数参数:
    定义：结构体作为参数向函数中传递
    参数传递方式: 1.值传递 2.引用传递

*/

// 创建学生的结构体
struct student
{
    string name;
    int age;
    int score;
};

// 值传递
void printStudent(student s1)
{
    s1.age = 20;
    cout << s1.name << " " << s1.age << " " << s1.score << endl;
}

// 引用传递
void printStudent2(student *s1)
{
    /* // 以下两种赋值,取值方式都是正确的
      (*s1).age = 20;
      cout << (*s1).name << " " << (*s1).age << " " << (*s1).score << endl;
    */
    s1->age = 20;
    cout << s1->name << " " << s1->age << " " << s1->score << endl;
}

int main()
{

    student s1 = {"a", 10, 20};
    printStudent(s1); // a 20 20
    // 值传递实际的age并不会改变
    cout << s1.age << endl; // 10

    printStudent2(&s1);
    // 引用传递实际的age会被改变
    cout << s1.age << endl; // 20

    return 0;
}