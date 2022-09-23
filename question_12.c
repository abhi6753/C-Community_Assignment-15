//12. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
#include<conio.h>
int SumOfDigits(int);
int sum;
int main()
{
    int num,sum;
    printf("Enter num:\n");
    scanf("%d",&num);
    sum = SumOfDigits(num);
    printf("Sum of digits of %d is %d",num,sum);
    getch();
    return 0;
}
int SumOfDigits(int num)
{
    if(num>0)
    {
        SumOfDigits(num/10);
        sum = sum+num%10;
    }
    return sum;
}