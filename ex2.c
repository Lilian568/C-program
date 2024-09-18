#include <stdio.h>

int main() {
    float salaries[12], taxes[12];
    float tax_rate, tax_rate_over_limit, income_limit;

    // Get input from the user
    printf("Enter tax rate: ");
    scanf("%f", &tax_rate);
    printf("Enter income limit: ");
    scanf("%f", &income_limit);
    printf("Enter tax rate for income over the limit: ");
    scanf("%f", &tax_rate_over_limit);

    // Get monthly salaries
    printf("Enter income for month 1: ");
    scanf("%f", &salaries[0]);

    for (int i = 1; i < 12; i++) {
        printf("Enter income for month %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    // Calculate taxes
    float total_income = 0;
    for (int i = 0; i < 12; i++) {
        total_income += salaries[i];

        if (total_income <= income_limit) {
            taxes[i] = salaries[i] * tax_rate / 100;
        } else {
            float taxable_amount = total_income - income_limit;
            taxes[i] = (income_limit * tax_rate / 100) + (taxable_amount * tax_rate_over_limit / 100);
        }
    }

    // Print results
    printf("\nMonth\tIncome\tTax\n");
    for (int i = 0; i < 12; i++) {
        printf("%-6d\t%.2f\t%.2f\n", i + 1, salaries[i], taxes[i]);
    }

    return 0;
}