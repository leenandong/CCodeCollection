#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    cout << num1 << ' ' << num2 << endl;

    system("pause");
    return 0;
}