/*
1.Accept the number of electricity units consumed and calculate the 
total bill using the following slab-wise rates.Each slab rate applies
only to units within that slab.

Units consumed       Rate

First 100 units      rs.5 per unit

Next 100 units       rs7 per unit

Above 200 units      rs 10 per unit
*/
#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 100)
    {
        fBill = iUnits * 5;
    }

    else if(iUnits <= 200)
    {
        fBill = (100*5) + ((iUnits - 100) * 7);
    }

    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
    }

    printf("Total Electricity Bill = Rs.%2f\n",fBill);

}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}

