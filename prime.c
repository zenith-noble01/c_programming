#include <stdio.h>

int main()
{
    int i, Number, count = 0;

    printf("\n Please Enter any number to Check  = ");
    scanf("%d", &Number);

    for (i = 2; i <= Number / 2; i++)
    {
        if (Number % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0 && Number != 1)
    {
        printf("\n %d is a Prime Number", Number);
    }
    else
    {
        printf("\n %d is Not prime", Number);
    }

    primeWhileLoop();
    return 0;
}

int primeWhileLoop()
{
    int i = 2, Num, count = 0;

    printf("\n Please Enter any Value \n");
    scanf("%d", &Num);

    while (i <= Num / 2)
    {
        if (Num % i == 0)
        {
            count++;
            break;
        }
        i++;
    }
    if (count == 0 && Num != 1)
    {
        printf("\n %d is a Prime", Num);
    }
    else
    {
        printf("\n %d is Not Prime", Num);
    }
    return 0;
}