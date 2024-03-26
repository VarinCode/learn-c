// แบบ Multilevel Inheritance
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

    Dorm(int room, int water, int electric){
        setRoomCharge(room);
        setWaterCost(water);
        setElectricCost(electric);
    }

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
    FanRoom(int room, int water, int electric): Dorm(room, water, electric){}
};

class AirRoom : public FanRoom{
public:
    AirRoom(int room, int water, int electric): FanRoom(room, water, electric){}
};

class VIPRoom : public AirRoom{
public:
    VIPRoom(int room, int water, int electric): AirRoom(room, water, electric){}
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

    FanRoom fanRoom(2500, c.water, c.electric);

    cout << "Fan room rental cost = " << fanRoom.getCost() << endl;
    cout << "-------------------------------" << endl << endl;

    cout << "Water cost:";
    cin >> c.water;
    cout << "Electric cost:";
    cin >> c.electric;

    AirRoom airRoom(3500, c.water, c.electric);

    cout << "Air conditioned room rental cost = " << airRoom.getCost() << endl;
    cout << "-------------------------------" << endl << endl;

    cout << "Water cost:";
    cin >> c.water;
    cout << "Electric cost:";
    cin >> c.electric;

    VIPRoom vipRoom(10000, c.water, c.electric);

    cout << "VIP room rental cost = " << vipRoom.getCost() << endl;
    cout << "-------------------------------" << endl << endl;

    return 0;
}
