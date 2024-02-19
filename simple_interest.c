#include <stdio.h>

int main() {
    int principle, number_of_years;
    float rate_of_interest, simple_interest;

    printf("Enter the principle amount: ");
    scanf("%d", &principle);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate_of_interest);

    printf("Enter the number of years: ");
    scanf("%d", &number_of_years);

    simple_interest = (principle * rate_of_interest * number_of_years) / 100;

    printf("The simple interest is: %f", simple_interest);

    return 0;
}