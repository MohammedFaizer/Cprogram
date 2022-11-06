#include<stdio.h>
int hell()
{
    
    return 100;
}

int main()
{
    int a=23;
    printf("%p\n",&a);
    int* ptr=&a;
    printf("%p\n",*ptr);
    int z=hell();
    printf("%d",z);
}







