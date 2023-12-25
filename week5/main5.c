#include <stdio.h>
#include <stdbool.h>

bool isPrimeNumber(int n){
    short count = 0;

    for(int i = 2; i <= n / 2; ++i) {
      if(n % i == 0) {
        return false;
      }
    }

    return true;
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
   
    isPrimeNumber(n) ? 
    printf("%d is Prime Number" , n) :
    printf("%d is not Prime Number" , n);
}