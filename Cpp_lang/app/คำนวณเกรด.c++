#include <stdio.h>
#include <conio.h>

int main()

{
    int score;
    printf("Input score = ");
    scanf("%d", &score);
    if (score >= 0 && score <= 100)
    {
        if (score >= 80)
            printf("score grade 4", score);

        else if (score >= 75)
            printf("score grade 3.5", score);

        else if (score >= 70)
            printf("score grade 3", score);

        else if (score >= 65)
            printf("score grade 2.5", score);

        else if (score >= 60)
            printf("score grade 2", score);

        else if (score >= 55)
            printf("score grade 1.5", score);

        else if (score >= 50)
            printf("score grade 1", score);

        else
            printf("score grade 0", score);
    }
    else
        printf("&d error!!!", score);
    getch();
}
