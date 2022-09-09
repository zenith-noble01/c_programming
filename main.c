#include <stdio.h>

// int main()
// {
//   char ch = 'A';
//   char str[25] = "Welcome to c world!";
//   float flt = 10.3;
//   int num = 150;

//   puts("Enter a Number: ");
//   scanf("%d", &num);
//   printf("\n\n");
//   printf("Value of ch: %c \n", ch);
//   printf("Value of str: %s \n", str);
//   printf("Value of flt: %f \n", flt);
//   printf("Value of num: %d \n", num);

//   return 0;
// }

// veryifying which number is the biggest

// int max(int num1, int num2)
// {
//   int result;
//   if (num1 >= num2)
//   {
//     result = num1;
//   }
//   else
//   {
//     result = num2;
//   }
//   return result;
// }

// struct Zenith
// {
//   char name[50];
//   int age;
// };

// int main()
// {
//   int num1;
//   int num2;

//   struct Zenith student;

//   printf("your age is %d \n", student.age = 69);

//   printf("Enter first value: ");
//   scanf("%d", &num1);
//   printf("Enter second value: ");
//   scanf("%d", &num2);

//   max(num1, num2);

//   // return 0;
// }

float add(float num1, float num2)
{
  float result;
  result = num1 + num2;
  return result;
}

float subtract(float num1, float num2)
{
  float result;
  result = num1 - num2;
  return result;
}

float divide(float num1, float num2)
{
  float result;
  result = num1 / num2;
  return result;
}

float multiply(float num1, float num2)
{
  float result;
  result = num1 - num2;
  return result;
}

int getUserInput()
{
  int selection = 0;

  do
  {
    printf("\n");
    printf("\n1 - Addition");
    printf("\n2 - Subtraction");
    printf("\n3 - Multiplication");
    printf("\n4 - Division");
    printf("\n5 - Quit");
    printf("\nSelect Operation: ");
    scanf("%d", &selection);
  } while (selection < 1 || selection > 5);

  return selection;
}

int main()
{
  float num1, num2, result;
  int choice;

  puts("Enter the first number: ");
  scanf("%f", &num1);

  puts("Enter the second number: ");
  scanf("%f", &num2);

  do
  {
    choice = getUserInput();

    switch (choice)
    {
    case 1:
      result = add(num1, num2);
      printf("\n%.2f + %.2f = %.2f", num1, num2, result);
      break;
    case 2:
      result = subtract(num1, num2);
      printf("\n%.2f - %.2f = %.2f", num1, num2, result);
      break;
    case 3:
      result = subtract(num1, num2);
      printf("\n%.2f * %.2f = %.2f", num1, num2, result);
      break;
    case 4:
      if (num2 != 0)
      {
        result = divide(num1, num2);
        printf("\n%.2f / %.2f = %.2f", num1, num2, result);
      }
      else
      {
        printf("\n Invalid operation! Division by zero");
      }
      break;
    case 5:
      printf("\nYou chose to quit");
      break;
    default:
      break;
    }
  } while (choice != 5);
}
