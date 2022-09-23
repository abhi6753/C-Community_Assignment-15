//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
void printsquare(int);
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    printsquare(num);
    getch();
    return 0;
}
void printsquare(int num)
{
    if(num>0)
    {
        printsquare(num-1);
        printf("%d ",num*num);
    }
}