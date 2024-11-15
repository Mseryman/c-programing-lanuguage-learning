#include <stdio.h>

int main(){
    float radius,area,height;
    float pi = 3.14;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    area = pi * radius*radius*height;
    printf("The volume of the cylindder is %f", area);
    return 0;
}