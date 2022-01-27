#include<stdio.h>
int main()
{
int a,b,c,d,max;
printf("Enter the values of a,b,c");
scanf("%d %d %d",&a,&b,&c);
d= a>b ? a:b ;
max= d>c ? d:c ;
printf("the max value is %d",max);

}
