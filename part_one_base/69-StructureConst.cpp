#include <iostream>
using namespace std;

/*
    结构体中const使用:
    定义：防止误操作

*/

// 创建学生的结构体
struct student
{
    string name;
    int age;
    int score;
};

// 引用传递
void printStudent2( const student *s1)
{
    // const 修饰的结构体,不可以被修改,所以对age的修改,期待报错
    // s1->age = 20;
    cout << s1->name << " " << s1->age << " " << s1->score << endl;
}

int main()
{

    student s1 = {"a", 10, 20};

    printStudent2(&s1);

    cout << "age=" << s1.age << endl;

    return 0;
}