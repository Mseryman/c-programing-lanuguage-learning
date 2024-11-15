// to find the simple interest yearly. And to get the principal amount, rate of interest and time period by user.

#include <stdio.h>

int main(){
    float principal_amount, rate_of_interest, time;
    printf("Enter the principal amount:");
    scanf("%f",&principal_amount);
    printf("Enter the rate of interest:");
    scanf("%f",&rate_of_interest);
    printf("Enter the time period:");
    scanf("%f",&time);
    float simple_interest = (principal_amount * rate_of_interest * time)/100;
    printf("The simple interest is %f", simple_interest);

    return 0;
}