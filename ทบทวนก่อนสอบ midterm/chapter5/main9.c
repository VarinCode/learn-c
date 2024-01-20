#include <stdio.h>
#include <string.h>

char *isPrtime(int x){    
    if(x <= 1){
        return "is not Prime Number";
    } else {
        for(int i = 2; i < x; i++){
            if(x % i == 0) return "is not Prime Number";
        }
        return "is Prime Number";
    }
}

int main(){
    int n;

    printf("Enter a prime number : ");
    scanf("%d", &n);
    printf("%d %s", n, isPrtime(n));

    return 0;
}