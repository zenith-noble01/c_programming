// #include <stdio.h>

// int SIZE = 6;
// int i, min, max;
// float Score[6], Avergae, sum__of__scores;

// int main()
// {
//     char Tab[] = {' ', ' ', ' ', ' ', ' ', ' '}; // 6 spaces
//     char Line[] = {'-', '-', '-', '-', '-', '/'};

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("\n Enter the score #%d: ", i + 1);
//         scanf("%f", &Score[i]);
//     }

//     sum__of__scores = 0;
//     for (i = 0; i < SIZE; i++)
//     {
//         sum__of__scores = sum__of__scores + Score[i];
//     }

//     Avergae = sum__of__scores / SIZE;

//     min = 0;

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("value of i: %d\n", i + 1);
//         if (Score[i] < Score[min])
//         {
//             min = i;
//         }
//     }

//     max = 0;

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("value of i: %d\n", i + 1);
//         if (Score[i] > Score[max])
//         {
//             max = i;
//         }
//     }

//     printf("\n %s Student # %s Score # \n %s%s%s%s", Tab, Tab, Tab, Line, Line, Line);

//     for (i = 0; i < SIZE; i++)
//     {
//         printf("\n %s %d %s%s %0.2f", Tab, i + 1, Tab, Tab, Score[i]);
//     }

//     printf("\n %s%s%s%s\n", Tab, Line, Line, Line);
//     printf("\n%s Sum of scores = %0.2f", Tab, sum__of__scores);
//     printf("\n%s Average of Scores = %0.2f", Tab, Avergae);
//     printf("\n%s Best Scores = %0.2f", Tab, Score[max]);
//     printf("\n%s Least Scores = %0.2f", Tab, Score[min]);
//     printf("\n%s The best of the class is Student # %d", Tab, max);
//     printf("\n%s The weakest of the class is Student # %d\n\n\n\n", Tab, min);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 20;
//     int b = 10;
//     int c = 15;
//     int d = 5;
//     int e;
//     e = (a + b) * c / d;
//     // ( 30 * 15 ) / 5

//     printf("Value of (a + b) * c / d is : %d\n", e);
//     e = ((a + b) * c) / d;
//     // (30 * 15 ) / 5
//     printf("Value of ((a + b) * c) / d is : %d\n", e);
//     e = (a + b) * (c / d);
//     // (30) * (15/5)
//     printf("Value of (a + b) * (c / d) is : %d\n", e);
//     e = a + (b * c) / d;
//     // 20 + (150/5)
//     printf("Value of a + (b * c) / d is : %d\n", e);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     /* local variable definition */
//     int SIZE = 6;
//     int i;

//     /* while loop execution */
//     for (i = 0; i < SIZE; i++)
//     {
//         printf("value of a: %d\n", i);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    /* local variable definition */
    /*    int i, j;
       for (i = 2; i < 100; i++)
       {
           for (j = 2; j <= (i / j); j++)
               if (!(i % j))
                   break; // if factor found, not prime
           if (j > (i / j))
               printf("%d is prime\n", i);
       } */

    int i, j, number, result, prime;

    /*    for (i = 2; i < 100; i++)
       {
           printf("Get an Interger value %d: \n", number);
           scanf("%d", &number);
           for (j = 2; j <= (i / j); j++)
           {
               if (!(i % j))
                   break; // if factor found, not prime
               if (j > (i / j))
               {
                   printf("%d is prime\n", i);
               }
           }
       } */

    printf("get an interger value\n");
    scanf("%d", number);
    for (i = 2; i < number / 2; i++)
    {
        if (i % number == 0)
        {
            return prime = i;
        }
    }

    if (prime)
    {
        printf("%d is prime\n", prime);
    }
    else
    {
        printf("%d is prime\n", prime);
    }

    return 0;
}