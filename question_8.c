//8. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
#include<conio.h>
int sumN(int);
int main()
{
    int num;
    printf("Enter num:\n");
    scanf("%d",&num);
    printf("Sum of first %d natural number is %d",num,sumN(num));
    getch();
    return 0;
}
int sumN(int num)
{
    if(num==1)
       return 1;
    return (num+sumN(num-1));    
}