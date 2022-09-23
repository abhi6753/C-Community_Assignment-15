//13. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
#include<conio.h>
int fact(int );
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    printf("%d! = %d",num,fact(num));
    getch();
    return 0;
}
int fact(int num)
{
    if(num==0)
     return 1;
    return num * fact(num-1);
}