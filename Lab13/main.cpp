#include <iostream>
using namespace std;

class Shape {
private:
    string color;
public:
    double getArea(){
        return 1;
    }
    string toString(){
        return color;
    }
};

class Rectangle: public Shape{
private:
    int length;
    int width;
public:
    double getArea(){
        cout << "Enter length:";
        cin >> length;
        cout << "Enter width:";
        cin >> width;

        double area = length * width;
        return area;
    }
    string toString(){
        string result = "\nRectangle = ";
        result.append(to_string(getArea()));

        return result;
    }
};

class Triangle: public Shape{
private:
    int base;
    int height;
public:
    double getArea(){
        cout << "Enter length:";
        cin >> base;
        cout << "Enter width:";
        cin >> height;

        double area = (1 / 2) * (base * height);
        return area;
    }
    string toString(){
        string result = "\nTriangle = ";
        result.append(to_string(getArea()));

        return result;
    }
};

int main() {
    int select;

    cout << "Select a number" << endl;
    cout << "1. rectangle" << endl;
    cout << "2. triangle" << endl;
    cout << "Enter number:";
    cin >> select;
    cout << endl;

    if(select == 1){
        Rectangle rectangle;
        cout << rectangle.toString() << endl;
    } else if(select == 2){
        Triangle triangle;
        cout << triangle.toString() << endl;
    } else {
        cout << "Error: Please select a number 1 or 2" << endl;
    }

    return 0;
}
