#include<stdio.h>
int main()
{
  int s1,s2,s3 ;
  float avg;
  printf("Enter the values of s1,s2,s3");
  scanf("%d %d %d",&s1,&s2,&s3);

  avg=(s1+s2+s3)/3 ;
  printf("\navg percentage is %.2f",avg);

  if(avg>=70)
  {
  printf("\nDistinction");
  }
  else if(avg>=60 && avg<=69)
  {
  printf("\nGrade A");
  }
  else if(avg>=50 && avg<=59)
  {
  printf("\nGrade B");
  }
  else if(avg>=40 && avg<=49)
  {
  printf("\nGrade C");
  }
  else
  {
  printf("Fail");
  }
  }
