#include <stdio.h>

void main() {
    int ndays, week, day;
    int month;
    printf("Input number of days : ");
    scanf("%d", &ndays);
    month = ndays / 30;
    ndays %= 30;
    week= ndays / 7 ;
    day= ndays % 7 ;
    printf("It is equivalent to %d months %d weeks and ", month , week );
    printf(" %d days.\n", day );
}