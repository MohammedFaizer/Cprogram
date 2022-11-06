#include<stdio.h>
#define max 3
struct student
{
 int roll;
 char name[30];
 int marks[3];
 int avg;
};
int avg(struct student s1[])
{
  int arr[3];
   for (int i = 0; i < 3; i++)
   {
  int result=0;
  for (int k = 0; i < 3; i++)
  {
    result+=s1[i].marks[k];
  }
  result /=3;
  s1[i].avg=result;
   }
    
   
    for (int l = 0; l < 3; l++)
    {
        arr[l]=s1[l].avg;
    }
  return arr;
}


void main()
{
   struct student s1[max];
   int i,j;
   for ( i = 0; i < max; i++)
   {
    printf("Enter the Roll Number:\n");
    scanf("%d",&s1[i].roll);
    printf("Enter student name:\n");
    scanf("%s",&s1[i].name);
    for ( j = 0; j < 3; j++)
    {
    printf("Enter the marks%d:\n",j+1);
    scanf("%d",&s1[i].marks[j]);
    
    }
   }
     
     //getting the average 
   int r[]= avg(s1);



}
