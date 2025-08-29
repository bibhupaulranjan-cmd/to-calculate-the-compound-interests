#include <stdio.h>
#include <math.h>   

int main() {
    float principal, rate, time, compound_interest, amount;

    
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    
    amount = principal * pow((1 + rate / 100), time);

    
    compound_interest = amount - principal;

    
    printf("Compound Interest = %.2f\n", compound_interest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}

