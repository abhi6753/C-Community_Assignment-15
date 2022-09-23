//11. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
#include<conio.h>
int sum_Of_Square(int);
int sum; // Global variable used in  sum_Of_Square()
int main()
{
    int num,sum;
    printf("Enter num:\n");
    scanf("%d",&num);
    sum = sum_Of_Square(num);
    printf("Sum of square of first %d number is %d",num,sum);
    getch();
    return 0;
}
int sum_Of_Square(int num)
{
    if(num>0)
    {
        sum_Of_Square(num-1);
        sum += num*num;
    }
    return sum;
}