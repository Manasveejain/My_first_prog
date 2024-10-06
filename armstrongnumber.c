#include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{
clock_t begin = clock(); // clock start
int num,c=0,n;
int sum=0;
printf("enter the number you want to check is armstrong  no or not:");
scanf("%d",&num);
n=num;
while(n!=0)
{
n=n/10;
c++;
} 
n=num;
while(n!=0)
{
int a;
a=n%10;
sum+=pow(a,c);
n=n/10;
}
(sum==num)?printf("number is armstrong"):printf("number is not armstrong");

clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf(" \n Time take by your program =  %.5lf",time_spent );
return 0;
}