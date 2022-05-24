#include <iostream>
using namespace std;

/*
   指针和函数结合的案例: 利用函数,数组,指针相结合实现冒泡排序
*/

void bubbleSort(int *arr, int len)
{

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int arr[] = {9, 2, 3, 6, 8, 7, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;
    bubbleSort(p, length);

    int i = 0;
    while (i < length)
    {
        cout << arr[i] << " " << endl;
        i++;
    }

    return 0;
}