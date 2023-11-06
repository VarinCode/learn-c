#include <stdio.h>
#include <conio.h>
main()
{
      float score;

      printf("Enter your score: ");

      scanf("%f", &score);
      if (score < 0 || score > 100)
      {
            printf("Enter score 0 - 100 \n");
      }
      else if (score >= 80)
      {
            printf("Score = %.2f , grade: 4 \n", score);
      }

      else if (score >= 60)
      {
            printf("Score = %.2f , grade: 3 \n", score);
      }

      else if (score >= 50)
      {
            printf("Score = %.2f ,grade: 2 \n", score);
      }
      else if (score >= 40)
      {
            printf("Score = %.2f ,grade: 1 \n", score);
      }
      else
      {
            printf("Score = %.2f ,grade: 0 \n", score);
      }
      getch();
}
