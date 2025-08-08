#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int a, id, money, sum, b, c;
    std::string name;
    

    for (int i= 1; i <= 10; i++){
        cout << endl; 
        cout << "-----Menu------" << endl;
        cout << "1. 계좌개설" << endl;
        cout << "2. 입 금" << endl;
        cout << "3. 출 금" << endl;
        cout << "4. 계좌정보 전체 출력" << endl;
        cout << "5. 프로그램 종료" << endl;
        cout << "선택: "; cin >> a;
        cout << endl;

        switch(a){
            case 1:
                cout << "[계좌개설]" << endl;
                cout << "계좌ID: "; cin >> id;
                cout << "이 름: "; cin >> name;
                cout << "입금액: "; cin >> money;
                sum += money;
                break;
            case 2:
                cout << "[입 금]" << endl;
                cout << "계좌ID: "; cin >> id;
                cout << "입금액: "; cin >> b;
                cout << "입금완료" << endl;
                sum += b;
                break;
            case 3:
                cout << "[출 금]" << endl;
                cout << "계좌ID: "; cin >> id;
                cout << "출금액: "; cin >> c;
                cout << "출금완료" << endl;
                sum -= c;
                break;
            case 4:
                cout << "[계좌정보 전체출력]" << endl;
                cout << "계좌ID: " << id << endl;
                cout << "이 름: " << name << endl;
                cout << "잔액: " << sum << endl;
                break;
            case 5:
                return 0;
        }
    }

    system("pause");
    return 0;
}