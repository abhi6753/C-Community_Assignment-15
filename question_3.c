//3. Write a recursive function to print first N odd natural numbers
#include<conio.h>
#include<stdio.h>
void printNO(int);
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    printNO(num*2); // print N odd 
    getch();
    return 0;
}
void printNO(int num)
{
    if(num>0)
    {
       printNO(num-1);
       if(num%2 != 0 )
       printf("%d ",num);
    }
}