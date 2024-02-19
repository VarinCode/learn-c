#include <iostream>

using namespace std;

class Bank {
private:
    int balance;
public:
    int money;

    Bank(){
        balance = 0;
        money = 0;
    }

    Bank(int Balance){
        balance = Balance;
        money = 0;
    }

    ~Bank(){
        cout << "End" << endl;
    }

    void deposit(int Money){
        money = Money;
        balance += money;
    }

    void withdraw(int Money){
        money = Money;
        balance -= money;
    }

    int getBalance(){
        return balance;
    }

};

int main() {
    Bank b1(500);
    Bank b2(b1);

    int money;

    cout << "deposit :";
    cin >> money;
    b2.deposit(money);
    cout << "balance = " << b2.getBalance() << endl;

    cout << "withdraw :";
    cin >> money;
    b2.withdraw(money);
    cout << "balance = " << b2.getBalance() << endl;

    return 0;
}
