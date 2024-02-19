#include <iostream>

using namespace std;

class Money {
private:
    int money;
public:
    float result;

    void changeUS(int Money){
        money = Money;
        result = money / 36.03;
        cout << "bath = " << money << endl;
        cout << "dollar = " << result << endl;
    }

    void changeYen(int Money){
        money = Money;
        result = money / 4.18;
        cout << "bath = " << money << endl;
        cout << "yen = " << result << endl;
    }

    void changeWon(int Money){
        money = Money;
        result = money / 37.17;
        cout << "bath = " << money << endl;
        cout << "won = " << result << endl;
    }
};

int main(){
    Money m1, m2;

    int thaiBath;
    cout << "Exchange currency object1" << endl;

    cout << "Change bath to dollar:";
    cin >> thaiBath;
    m1.changeUS(thaiBath);

    cout << "Change bath to yen:";
    cin >> thaiBath;
    m1.changeYen(thaiBath);

    cout << "Change bath to won:";
    cin >> thaiBath;
    m1.changeWon(thaiBath);

    cout << "\nExchange currency object2" << endl;

    cout << "Change bath to dollar:";
    cin >> thaiBath;
    m2.changeUS(thaiBath);

    cout << "Change bath to yen:";
    cin >> thaiBath;
    m2.changeYen(thaiBath);

    cout << "Change bath to won:";
    cin >> thaiBath;
    m2.changeWon(thaiBath);

    return 0;
}