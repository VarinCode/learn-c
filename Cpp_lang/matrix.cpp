#include <iostream>
#include <string>
using namespace std;

class Matrix {
    public:
        virtual void displayMatrix() = 0;
    protected:
        struct sizeOfMatrix {
            int m;
            int n;
        };
        
        // default size of matrix 3x3
        struct sizeOfMatrix size {3,3};

        string matrixName(string name){
            return "\n\t\t" + name + " " + to_string(size.m) + "x" + to_string(size.n) + "\n\n";
        }

        int getRows() {
            int rows;
            while(true){
                cout << "Enter rows number : ";
                cin >> rows;
                if(rows <= 0){
                    cout << "Invlid rows. Please Enter number new agian" << endl;
                } else if(rows >= 20){
                    cout << "Please Enter a number less than 20" << endl;
                } else {
                    size.m = rows;
                    break;
                }
            }
        }

        int getCols(){
            int columns;
            while(true){
                cout << "Enter columns number : ";
                cin >> columns;
                if(columns <= 0){
                    cout << "Invlid columns. Please Enter number new agian" << endl;
                } else if(columns >= 20){
                    cout << "Please Enter a number less than 20" << endl;
                } else {
                    size.n = columns;
                    break;
                }
            }
        }
};

class ZeroMatrix: public Matrix {
    public:
        ZeroMatrix(){
            getCols();
            getRows();
        }
        
        void displayMatrix(){
            cout << matrixName("Zero Matrix");

            for(int i = 0; i < size.m; i++){
                cout << "|";
                for(int j = 0; j < size.n; j++){
                    cout << "\t" << 0 << "\t";
                }
                cout << "|";
                cout << endl;
            }
            cout << endl;
        }
};

class IdentityMatrix: public Matrix {
    public:
        IdentityMatrix(){
            getCols();
            getRows();
        }

        void displayMatrix(){
            cout << matrixName("Identity Matrix");
            for(int i = 0; i < size.m; i++){
                for(int j = 0; j < size.n; j++){
                    if(i == j){
                        cout << "\t" << 1 << "\t";
                    } else {
                        cout << "\t" << 0 << "\t";
                    }
                }
                cout << endl;
            }
            cout << endl;
        }
};

class ColumnMatrix{

};

int main(){
    // ZeroMatrix z1;
    // z1.displayMatrix();
    IdentityMatrix i1;
    i1.displayMatrix();
}