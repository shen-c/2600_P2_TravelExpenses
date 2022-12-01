#include <stdio.h>
#include "expenseSheet.h"

//fill out the struct for everything that does not need calculation
//note: meals will be filled out by another group member
void fillExpenses(Expenses *e){
    //get departure time
    printf("Please enter the departure time (0-23): ");
    scanf("%d", &e->departTime);
    //get arrival time
    printf("Please enter the arrival time (0-23): ");
    scanf("%d", &e->arriveTime);
    //get whole days
    printf("Please enter the number of whole days(not including departure and arrival days): ");
    scanf("%d", &e->wholeDays);
    //set total days
    e->totalDays = e->wholeDays + 2;//whole days + departure and arrival day
    //get airfare 
    printf("Please enter the total amount paid for airline travel to your destination: ");
    scanf("%lf", &e->airfare); 
    //get carRentals
    printf("Please enter the amount spent in total for car rentals: ");
    scanf("%lf", &e->carRentals);
    //get milesDriven
    printf("Please enter all miles driven with the use of a private vehicle: ");
    scanf("%d", &e->milesDriven);
    //get parkingFees
    printf("Please add up and include any and all applicable parking fees incurred while traveling to and from the destination: ");
    scanf("%lf",&e->parkingFees);
    //get taxiFees
    printf("Please calculate the total amount spent on taxi fare while traveling on this business related excursion: ");
    scanf("%lf",&e->taxiFees); 
    //get registration fees 
    printf("Please include any incurred registration fees on this line: ");
    scanf("%lf", &e->registrationFees); 
    //get hotel expenses
    printf("On a separate sheet, please calculate out all hotel related expenses (including room, board, and other necessities) and enter the total here: ");
    scanf("%lf", &e->hotelExpenses); 


}

//print everything in the struct filled out so far (for testing)
void printExpenses(Expenses *e){
    printf("Departure time: %d\n", e->departTime);
    printf("Arrival time (home): %d\n", e->arriveTime);
    printf("Whole days(not including departure and arrival days): %d\n", e->wholeDays); 
    printf("Total days: %d\n", e->totalDays); 
    printf("Total Airfare incurred: %lf\n", e->airfare); 
    printf("Total expended through use of car rentals: %lf\n", e->carRentals); 
    printf("Total mileage accrued during travel: %d\n", e->milesDriven); 
    printf("Total of all applicable parking fees: %lf\n", e->parkingFees); 
    printf("Total debt accumulated through taxi services rendered: %lf\n", e->taxiFees);
    printf("Total fees amassed for hotel related expenses: %lf\n", e->hotelExpenses); 


    
}