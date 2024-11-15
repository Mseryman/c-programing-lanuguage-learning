// To find the are of a rectangle while the length and the breadth should be taken as inputs from the user.

#include <stdio.h>

int main(){
    int length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("The area of the rectangle is %d", area);
    return 0;
}