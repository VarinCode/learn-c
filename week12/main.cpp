#include <iostream>
using namespace std;

class Dorm {
protected:
    int roomCharge;
    int electricCost;
    int waterCost;
public:
    int electricalUnit = 15;
    int waterUnit = 30;

    void setRoomCharge(int room){
        roomCharge = room;
    }

    void setElectricCost(int electric){
        electricCost = electric;
    }

    void setWaterCost(int water){
        waterCost = water;
    }

    int getCost(){
        int totalCost = roomCharge + (electricCost * electricalUnit) + (waterCost * waterUnit);
        return totalCost;
    }
};

class FanRoom : public Dorm{
public:
    FanRoom(int water, int electric){
        setRoomCharge(2500);
        setWaterCost(water);
        setElectricCost(electric);
    }
};

class AirRoom : public Dorm{
public:
    AirRoom(int water, int electric){
        setRoomCharge(3500);
        setWaterCost(water);
        setElectricCost(electric);
    }
};

class VIPRoom : public Dorm{
public:
    VIPRoom(int water, int electric){
        setRoomCharge(10000);
        setWaterCost(water);
        setElectricCost(electric);
    }
};

typedef struct {
    int electric, water;
} cost;

int main() {
    cost c = { 0, 0 };

    cout << "Water cost:";
    cin >> c.water;
    cout << "Electric cost:";
    cin >> c.electric;

    FanRoom fanRoom(c.water, c.electric);

    cout << "Fan room rental cost = " << fanRoom.getCost() << endl;
    cout << "-------------------------------" << endl << endl;

    cout << "Water cost:";
    cin >> c.water;
    cout << "Electric cost:";
    cin >> c.electric;

    AirRoom airRoom(c.water, c.electric);

    cout << "Air conditioned room rental cost = " << airRoom.getCost() << endl;
    cout << "-------------------------------" << endl << endl;

    cout << "Water cost:";
    cin >> c.water;
    cout << "Electric cost:";
    cin >> c.electric;

    VIPRoom vipRoom(c.water, c.electric);

    cout << "VIP room rental cost = " << vipRoom.getCost() << endl;
    cout << "-------------------------------" << endl << endl;

    return 0;
}
