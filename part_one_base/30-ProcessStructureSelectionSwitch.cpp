#include <iostream>
using namespace std;
int main()
{
    /*
      switch 语句
      语法：
      switch (value)
      {
          case value1:
              xxxx;
              break;
          case value2:
              xxxx;
              break;
          [case ...]
          default:
              xxxx;
      }
    */

    int score = 0;
    cout << "please cin your score:";
    cin >> score;

    switch (score)
    {
    case 10:
        cout << "nice" << endl;
        break;
    case 9:
        cout << "just so so" << endl;
        break;
    default:
        cout << "nothing match";
    }

    return 0;
}