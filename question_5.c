//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
#include<conio.h>
void printNEN(int );
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    printNEN(num*2); // print Natural even number
    getch();
    return 0;
}
void printNEN(int num)
{
    if(num>0)
    {
        printNEN(num-1);
        if(num%2==0)
        printf("%d ",num);
    }
}