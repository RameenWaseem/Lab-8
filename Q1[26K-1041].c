#include <stdio.h>

float calculateBill(int units) 
{
    float bill = 0.0;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    bill += 150;

    return bill;
}

void printBill(int units, float bill) 
{
    printf("Units Consumed: %d\n", units);
    printf("Total Bill: Rs. %.2f\n", bill);
}


int main() 
{
    int units, i;
    float totalBill;

    for (i = 1; i <= 3; i++) 
	{
        printf("Enter units: ");
        scanf("%d", &units);

        totalBill = calculateBill(units);
        printBill(units, totalBill);
        
        printf("\n"); 
    }

    return 0;
}


