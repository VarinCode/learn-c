#include <iostream>

using namespace std;

class Dorm{
private:
    int totalCost;
    int watherCost;
    int electricCost;
    int roomCharge;
public:
    Dorm(int wather, int electric, int room){
        watherCost = wather;
        electricCost = electric;
        roomCharge = room;
        totalCost = watherCost + electricCost + roomCharge;
    }
    Dorm(){
        watherCost = 0;
        electricCost = 0;
        roomCharge = 0;
        totalCost = 0;
    }

    int getCost(){
        return totalCost;
    }

    ~Dorm(){
        cout << "End" << endl;
    }
};

typedef struct {
    int wather, electric, room;
} allCost;

int main(){
    allCost cost;

    cout << "Enter wather cost:";
    cin >> cost.wather;

    cout << "Enter electric cost:";
    cin >> cost.electric;

    cout << "Enter room charge:";
    cin >> cost.room;

    Dorm dorm1(cost.wather, cost.electric, cost.room);
    Dorm dorm2(dorm1);

    cout << "Student dormitory fees = " << dorm2.getCost() << endl;

    return 0;
}
