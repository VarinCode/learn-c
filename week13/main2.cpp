#include <iostream>
using namespace std;

class Monster{
private:
    string name;
public:
    string attack(){
        cout << "Monster name:";
        cin >> name;
        cout << endl;

        string result = "The monster ";
        result.append(name);
        result.append(" are attacking!");

        return result;
    }
};

class FireMonster : public Monster{
public:
    string attack(){
        return "The firemonster are attacking!";
    }
};

class WaterMonster : public Monster {
public:
    string attack(){
        return "The watermonster are attacking!";
    }
};

class StoneMonster : public Monster {
public:
    string attack(){
        return "The stonemonster are attacking!";
    }
};

int main(){
    Monster m;
    FireMonster fm;
    WaterMonster wm;
    StoneMonster sm;

    cout << m.attack() << endl;
    cout << fm.attack() << endl;
    cout << wm.attack() << endl;
    cout << sm.attack() << endl;

    return 0;
}