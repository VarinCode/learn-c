//absolute and inverse of integer
#include <stdio.h>

int main (){
    int n, abs_n; float inv_n;
    printf("Enter an integer : ");
    scanf("%d",&n);
    // abs_n = n<0 ? -n: n; //conditional operator
    if(n < 0) {
        abs_n = -n; // หรือ n * -1
    }
    else {
        abs_n = n;
    }
    if(n!=0) {
        inv_n = 1.0 / n;
    }
    else {
        inv_n = 0;
    }
    // inv_n = n!=0 ? 1/n : 0; //conditional operator
    printf("|n| = %d\n", abs_n);
    printf("inverse n = %f\n", inv_n);
    return 0;
}