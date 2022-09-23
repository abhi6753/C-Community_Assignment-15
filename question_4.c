//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void printONR(int );
int main()
{
    int num;
    printf("Enter num:\n");
    scanf("%d",&num);
    printONR(num*2);//print odd natural numbers in reverse order
    getch();
    return 0;
}
void printONR(int num)
{
    if(num>0)
    { 
       if(num%2!=0)
       printf("%d ",num);
       printONR(num-1);
    }
}