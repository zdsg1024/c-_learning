#include <iostream>
using namespace std;

/*
    结构体数组:
    定义：将定义的结构体放到数组中方便维护
    语法: struct 结构名[] { {结构体1},{结构体2}...};

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

    // struct 关键字可以省略
    Student arr[3]={
        {"a",10,11},
        {"b",11,12},
        {"c",12,13}
    };


    arr[0].name = "d";
    cout << arr[0].name << endl;

    

    return 0;
}