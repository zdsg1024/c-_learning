#include <iostream>
using namespace std;

/*
   练习: 成绩统（求出数组每一行的和并输出）
*/

int main()
{
    string name[3]={"张三","李四","王五"};
    int score[3][3] = {{100,90,80},{70,95,95},{82,88,98}};
    for (int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum += score[i][j];
        }
        cout << name[i] << "的总分为：" << sum << endl;
    }
    return 0;
}