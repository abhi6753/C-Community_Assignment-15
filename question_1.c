//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
#include<conio.h>
void printN(int);
int main()
{
    int num;
    printf("Enter num:\n");
    scanf("%d",&num);
    printN(num);
    getch();
    return 0;
}
void printN(int num)
{
    if(num>0)
    {
        printN(num-1);
        printf("%d ",num);
    }
   
} 