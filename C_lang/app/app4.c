#include <stdio.h>

void main()
{
    int b1000, b500, b100, b50, b20, b10;
    int money , remaining;
    
    printf("amount >>> ");
    scanf("%d", &money);

    b1000 = money / 1000;
    remaining = money % 1000;

    b500 = remaining / 500;
    remaining %= 500;

    b100 = remaining / 100;
    remaining %= 100;

    b50 = remaining / 50;
    remaining %= 50;

    b20 = remaining / 20;
    remaining %= 20;

    b10 = remaining / 10;
    remaining %= 10;

    printf("b1000 = %d\nb500 = %d\nb100 = %d\nb50 = %d\nb20 = %d\nb10 = %d", b1000, b500, b100, b50, b20, b10);
}