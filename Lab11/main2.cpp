#include <iostream>

using namespace std;

class Dorm{
private:
    int totalCost;
    int waterCost;
    int electricCost;
    int roomCharge;
public:
    Dorm(int water, int electric, int room){
        waterCost = water;
        electricCost = electric;
        roomCharge = room;
        totalCost = watherCost + electricCost + roomCharge;
    }
    Dorm(){
        waterCost = 0;
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
    int water, electric, room;
} allCost;

int main(){
    allCost cost;

    cout << "Enter water cost:";
    cin >> cost.water;

    cout << "Enter electric cost:";
    cin >> cost.electric;

    cout << "Enter room charge:";
    cin >> cost.room;

    Dorm dorm1(cost.water, cost.electric, cost.room);
    Dorm dorm2(dorm1);

    cout << "Student dormitory fees = " << dorm2.getCost() << endl;

    return 0;
}
