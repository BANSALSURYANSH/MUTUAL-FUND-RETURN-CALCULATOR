#include <stdio.h>
#include <math.h>

void SIP(float monthlyInvestment, float annualRate, int years)
{
    float monthlyRate = (annualRate / 12) / 100;
    float Finalamount;
    Finalamount = (monthlyInvestment) * ((pow(1 + monthlyRate, 12 * years) - 1) / monthlyRate) * (1 + monthlyRate);
    printf("Final amount after %d years with SIP: %.0f", years, Finalamount);
}

void LUMP_SUM(float Investment, float annualRate, int years)
{
    float monthlyRate = (annualRate) / 100;
    float Finalamount;
    Finalamount = (Investment)*pow(1 + monthlyRate, years);
    printf("Final amount after %d years with SIP: %.0f", years, Finalamount);
}

int main()
{
    int choice, years;
    float amount, rate;

    printf("Mutual Fund Return Calculator\n");
    printf("Choose investment type:\n");
    printf("1. SIP (Systematic Investment Plan)\n");
    printf("2. Lump Sum\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter monthly investment amount:");
        scanf("%f", &amount);
        printf("Enter expected annual return rate (in percentage):");
        scanf("%f", &rate);
        printf("Enter time period (in years):");
        scanf("%d", &years);
        SIP(amount, rate, years);
    }
    else if (choice == 2)
    {
        printf("Enter lump sum investment amount:");
        scanf("%f", &amount);
        printf("Enter expected annual return rate (in %):");
        scanf("%f", &rate);
        printf("Enter time period (in years):");
        scanf("%d", &years);
        LUMP_SUM(amount, rate, years);
    }
    else
    {
        printf("ERROR:Invalid choice!");
    }

    return 0;
}