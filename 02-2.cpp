#include <iostream>
using namespace std;

int main()
{
    const int num = 12;
    const int *p = &num;
    const int *(&ref) = p;

    cout << *p << endl;
    cout << *ref << endl;
    system("pause");
}