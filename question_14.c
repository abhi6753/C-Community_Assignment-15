//14. Write a recursive function to find the nth term of Fibonacci series.
#include<conio.h>
#include<stdio.h>
int t1=-1,t2=1;
int sum = 0;
int fib(int);
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    printf("%d term of Fibonacci series is %d",num,fib(num));
    getch();
    return 0;                                                                                    
}
int fib(int num)
{
   
    if(num==0)
      return 0; 
    if(num==1||num==2)
      return 1; 
    return fib(num-1)+fib(num-2);
}