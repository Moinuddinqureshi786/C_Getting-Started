#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    print("You have entered %d as your age",age);
    if (age>18)
    {
        printf("You can vote!");
    }
    else
    {
        printf("you cannot vote!");
    }
    
    return 0;
} 
