//9. Write a recursive function to calculate sum of first N odd natural numbers.
#include<stdio.h>
#include<conio.h>
int sum = 0; // Global variable
int Sum_Of_Odd_Natural(int);
int main()
{
    int num,sum;
    printf("Enter number:\n");
    scanf("%d",&num);
    sum = Sum_Of_Odd_Natural(num*2);
    printf("sum of first %d natural number is %d",num,sum);
    getch();
    return 0;
}
int Sum_Of_Odd_Natural(int num)
{
   if(num>0)
   {
       Sum_Of_Odd_Natural(num-1);
       if(num%2!=0)
         sum = sum+num;
   }
   return sum;
  
}