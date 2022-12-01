#include <stdio.h>
#include "expenseSheet.h"
#include "mealCalc.h"
#include "finalCalc.h"

int main()
{   
    void fillExpenses(Expenses *e);//gets user input for all expenses (except meals)
    void printExpenses(Expenses *e);//print expenses for validation
    void getMeals(Expenses *e); //get user input for meals based on arrival/departure time
                                //also calculates total meal expenses and total allowed based on time
    void printMeals(Expenses *e);//print meals array for testing
    void totalIncurred(Expenses *e);//calc and prints all costs incurred **and all allowables
    void totalAllowable(Expenses *e);//calc and prints all allowables (not used)
    void totalBill(Expenses *e);//prints amount saved or reimbursement required
    
    Expenses trip1; // the struct holding all expenses
    Expenses *tripPtr = &trip1; //a pointer to pass the struct by reference into functions
    

    printf("\n*********************************");
    printf("\n*** Travel Expense Calculator ***");
    printf("\n*********************************\n\n");

    //****** TASK 1 ******
    //implement "expenseSheet"

    //get user input for expenses (does not include meals)
    fillExpenses(tripPtr);
    //print everything filled out so far in the struct (for testing)
    printf("\n\nYou entered the following: \n\n");
    printExpenses(tripPtr);

    //****** TASK 2 ******
    //implement "mealCalc"

    //get user input for each relevant meal
    getMeals(tripPtr);
    printf("\n");
    //print the meals as a grid (for testing)
    //printMeals(tripPtr);

    //****** TASK 3 ******
    //implement "finalCalc"

    //Note: the following functions are just guidelines,
    //display total incurred by line item
    totalIncurred(tripPtr);
    //display total allowed by line item
    //totalAllowable(tripPtr);
    //display amount saved or reimbursed
    totalBill(tripPtr);

    printf("\n\n*** Thanks for using Travel Expense Calculator! ***\n\n");

    //****** TASK 4 ******

    //can be responsible for unit tests and debugging
}

