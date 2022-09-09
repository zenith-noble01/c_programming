#include <stdio.h>

// using a function

int Find_Fact(int nm)
{
    int i, Count = 0;

    for (i = 2; i <= nm / 2; i++)
    {
        if (nm % i == 0)
        {
            Count++;
        }
    }
    return Count;
}

int primeFunction()
{
    int nm, count = 0;

    printf("\n Please Enter any to Check  \n");
    scanf("%d", &nm);

    count = Find_Fact(nm);
    if (count == 0 && nm != 1)
    {
        printf("\n %d is a Prime", nm);
    }
    else
    {
        printf("\n %d is Not", nm);
    }
    return 0;
}

// using the while loop

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
    primeFunction();
    return 0;
}
