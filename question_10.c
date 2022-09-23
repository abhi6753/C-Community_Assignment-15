//10. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
#include<conio.h>
int Sum_Of_Odd_Natural(int);
int sum =0; // global variable used in Sum_Of_Odd_Natural()
int main()
{
    int num,sum=0;
    printf("Enter number:\n");
    scanf("%d",&num);
    sum = Sum_Of_Odd_Natural(num*2);
    printf("sum of first %d even natural number is %d",num,sum);
    getch();
    return 0;
}
int Sum_Of_Odd_Natural(int num)
{
    if(num>0)
    {
        Sum_Of_Odd_Natural(num-1);
        if(num%2==0)
        {
            sum +=num;
        }
    }
    return sum;
}