#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
char x,QE,R1,R2;
printf("Enter the values of a,b,c");
scanf("%d %d %d",&a,&b,&c);

QE=a*(pow(x,2)) + b*x + c ;

d=b*b-4*a*c ;

if (d>0)
{
printf("Roots are real and distinct");
}
else if(d=0)
{
printf("Roots are real and equal");
}
else
{
printf("Roots are imaginary");
}

R1=(-b+sqrt(d))/2*a ;
R2=(-b-sqrt(d))/2*a ;


printf("\nRoots are %d,%d",R1,R2);
}
