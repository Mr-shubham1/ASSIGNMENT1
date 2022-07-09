#include<stdio.h>
int main()
{
    float A,R;
    printf("enter the value of radius");
    scanf("%f",&R);
    A=(22*R*R)/7;
    printf("area of the circle is %f having radius %f",A,R);
    return(0);
}