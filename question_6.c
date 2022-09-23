//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void printENR(int );
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    printENR(num*2);//print even natural number in reverse order
    getch();
    return 0;
}
void printENR(int num)
{
    if(num>0)
    {
       if(num%2==0)
        printf("%d ",num);
        printENR(num-1);
    }
}