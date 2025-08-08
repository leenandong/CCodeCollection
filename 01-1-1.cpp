#include <iostream>
using namespace std;

int main(){
    // int a, b, c, d, e;
    // cout << "1번째 정수 입력: ";
    // cin >> a;
    // cout << "2번째 정수 입력: ";
    // cin >> b;
    // cout << "3번째 정수 입력: ";
    // cin >> c;
    // cout << "4번째 정수 입력: ";
    // cin >> d;
    // cout << "5번째 정수 입력: ";
    // cin >> e;
    // cout << "합계: ";
    // cout << a+b+c+d+e;

    int num = 0, a;
    
    for (int i = 1; i <= 5; i++){
        cout << i << "번째 정수 입력: ";
        cin >> a;
        num += a;
    }
    cout << "합계: " << num << endl;
    system("pause");
    return 0;
}