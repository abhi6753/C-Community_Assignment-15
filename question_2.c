//2. Write a recursive function to print first N natural numbers in reverse order
#include<conio.h>
#include<stdio.h>
void printNR(int);
int main()
{
    int num;
    printf("Enter num:\n");
    scanf("%d",&num);
    printNR(num); // print Nartural in reverse order
    getch();
    return 0;
}
void printNR(int num)
{
    if(num>0)
    {
        printf("%d ",num);
        printNR(num-1);
    }
}