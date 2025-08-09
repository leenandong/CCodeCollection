#include <iostream>
using namespace std;

void Up(int &a)
{
    a++;
}

void Change(int &d)
{
    d *= -1;
}

int main(void){
    int val1 = 2;
    Up(val1);
    cout << val1 << endl;

    int val2 = 5;
    Change(val2);
    cout << val2 << endl;

    system("pause");
}