#include "expenseSheet.h"
#include <stdio.h>

void totalIncurred(Expenses *e){
    //print line-items of each expense occurred
    //note: total incurred for meals can probably just be the sum total of everything in array meals[][]
    //ex:
    //Expenses incurred:
    //Airfare:              $100.95
    //Meals:                $50.24
    printf("Incurred Expenses:\n");
    printf("Airfare: \t %f \n", e->airfare);
    printf("Meals: \t %f \n", e->total_meals); //assuming I can use the meal accumulator from Farid's branch
    printf("Hotel: \t %f \n", e->hotelExpenses);
    printf("Car Rental: \t %f \n", e->carRentals);
    //gas is assumed to be perfectly covered.
    printf("Allowed Gas: \t %f \n", e->milesDriven * 0.27);
    printf("Parking Fees: \t %f", e->parkingFees);
    printf("Taxi Fees: \t %f \n", e->taxiFees);
    printf("Registration Fees: \t %f \n", e->registrationFees);
}
void totalAllowable(Expenses *e){
    //print line-items of each expense allowable
    //note: total allowable for meals will have to account for departure and arrival time
    //note: this can probably be combined with the above in a single function:
    //ex:
    //Expenses incurred:
    //Airfare:              $100.95
    //Meals:                $50.24
    //      Allowable:      ($37.00)
    //Hotels:               $200.10
    //      Allowable;      ($180.00)
    printf("Allowable Expenses:\n");
    //airfare is assumed to be completely covered and allowed by default.
    printf("Airfare: \t (%f) \n", e->airfare);
    printf("Meals: \t (%f) \n", e->total_allowable_meals);
    printf("Hotel Expense: \t (%f)", 90.0 * (e->wholeDays + 1)); //Assuming 
    //Car rental is assumed to be covered.
    printf("Car Rental: \t (%f) \n", e->carRentals);
    //Assume gas was perfectly covered.
    printf("Gas: \t (%f) \n", e->milesDriven * 0.27);
    printf("Parking Fees: \t (%f) \n", e->totalDays * 6.0);
    printf("Taxi Fees: \t (%f) \n", e->totalDays * 10.0);
    //Registation Fees assumed to be covered.
    printf("Registration Fees: \t (%f) \n", e->registrationFees);                
}
void totalBill(Expenses *e){
    //display excess or amount saved
}