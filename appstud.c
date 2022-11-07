#include<stdio.h>
struct student
{
 int roll;
 char name[30];
 int marks[3];
 int avg;
}temp;
int calc(struct student a1[],int num)
{
    for (int i = 0; i < num; i++)
  {
    a1[i].avg=0;
    for (int j = 0; j <3; j++)
    {
        a1[i].avg+=a1[i].marks[j];
    }
    a1[i].avg/=3;

  }
  
  //swapping 
  for(int k=0;k<num;k++){
  for (int i = 0; i < num-1; i++)
  {
   
    
    if(a1[i].avg<a1[i+1].avg)
    {
       
       temp=a1[i];
       a1[i]=a1[i+1];
       a1[i+1]=temp;
    }
  }
  }
  printf("********THE FINAL RESULT *******\n");
  for (int k = 0; k <num ; k++)
  {
    printf("*****%d*****\n",k);
    printf("Rank:%d\n",k+1);
    printf("Roll:%d\n",a1[k].roll);
    printf("name:%s\n",a1[k].name);
    printf("avg:%d\n",a1[k].avg);

  }
  

}

//main method
void main()
{
   struct student s1[3];
   int i,j,n;
   printf("Enter the number of students:\n");
   scanf("%d",&n);
   for ( i = 0; i < n; i++)
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
   calc(s1,n);
     
     //getting the average 
  



}
