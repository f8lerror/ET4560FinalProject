/*
 * Joshua Wilson
 * 4 April 2016
 * Project Part 1 & 2 & 3
 */

#include <iostream>
#include <math.h>
#include <iomanip>
#include <unistd.h>
#include <fstream>

using namespace std;

class Circle
{
private:
    double radius;

public:
    void setRadius (double r)
    {
        radius = r;
    }
    double getArea ()
    {
        return 3.14 * pow(radius, 2);
    }
};

class Rectangle
{
private:
    double length;
    double width;
public:
    void setLength(double);
    void setWidth(double);
    double getLength();
    double getWidth();
    double getArea();
};

struct MonthlyBudget
{

    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double misc;
    double total;
};

struct BudgetSpent
{
    double house;
    double utility;
    double expenses;
    double transpo;
    double food;
    double med;
    double ins;
    double ent;
    double cloth;
    double misc;
};

//List of functions being called
void menu();
void welcomeMessage();
void greenEnergyMenu ();
void fiberOpticsMenu();
void cppMenu();
void circleRadius();
void rectangleStuff();
void insertData(MonthlyBudget *object, double housing, double utilities, double householdExpenses, double transportation, double food, double medical, double insurance, double entertainment, double clothing, double misc, double total);
void printData(MonthlyBudget *object);
void spent(BudgetSpent *object);
void calculations(MonthlyBudget *budget, BudgetSpent *mySpent);


int main()
{

    int mainOption;

    cout << fixed << showpoint << setprecision(1);   //Makes sure peasants don't try to use a decimal choice

    welcomeMessage();                               //Display the welcome message
    menu();                                         //show the menu
    cin >> mainOption;                              // Capture menu choice and store it in variable mainOption

    if (mainOption == 1)                            // First option of main menu - Opens Menu for Green Energy
    {
        greenEnergyMenu();                          // Green Energy function call
        cin.get();
    }
    else if (mainOption == 2)                       // Second option of main menu - Opens menu for FiberOptics
    {
        fiberOpticsMenu();                          // FiberOptics function call
        cin.get();
    }
    else if (mainOption == 3)                       // Third option of main menu - Opens menu for CPP
    {
        cppMenu();                                  // CPP function call
        cin.get();
    }
    else if (mainOption == 4)
    {
        circleRadius();
    }
    else if (mainOption == 5)
    {
        rectangleStuff();
        cin.get();
    }
    else if (mainOption == 6)
    {
        MonthlyBudget allowed;
        BudgetSpent charged;

        insertData(&allowed, 500.00, 150.00, 65.00, 50.00, 250.00, 30.00, 100.00, 150.00, 75.00, 50.00, 1420.00);

        cout << "\nThis is your allowed budget: \n";
        printData(&allowed);

        cout << endl << endl;

        spent(&charged);

        calculations(&allowed, &charged);
    }
    else if (mainOption == 7)                       // Terminates Program
    {
        cout << "Terminating Program with extreme prejudice!" << endl;
        return 0;
    }
    else                                            // Did not make a valid choice, let them choose again.
    {
        cout << "You made a wrong choice PEASANT, TRY AGAIN!!" << endl;
        menu();
        cin.get();
    }
    cin.get();
    return 0;

}

void welcomeMessage()                                           //The welcome message function
{
    cout << "Greetings Peasants...I mean Students. Please choose a option from the menu." << endl;
}

void menu()                                                     //The main menu function
{
    cout << " Please select an option : " << endl;
    cout << " 1) Green Energy" << endl;
    cout << " 2) Fiber Optics" << endl;
    cout << " 3) C++" << endl;
    cout << " 4) Radius of Planets" << endl;
    cout << " 5) Pointy Boxy Thing Data" << endl;
    cout << " 6) Budget Stuff" << endl;
    cout << " 7) Quit!" << endl << endl;
}

void greenEnergyMenu ()                                         //The Green Energy Menu Function
{
    //Option 1 variables
    int option;
    double gevariable1;
    float gevariable2;
    int gevariable3;
    double getotal;

    //Option 2 variables
    int guess;
    int guess2;

    cout << "Please choose a calculation from the menu : " << endl;
    cout << " 1) Add two numbers, the second to a power :" << endl;
    cout << " 2) Guessing Game" << endl;
    cout << " 3) Left blank intentionally" << endl;
    cin >> option;

    if (option == 1)                                                    //sub-sub-menu for GE question 1
    {
        cout << "What is the first number : " << endl;
        cin >> gevariable1;
        cout << "What is the second number : " << endl;
        cin >> gevariable2;
        cout << "What power is it raised to : " << endl;
        cin >> gevariable3;

        getotal = gevariable1 + pow(1 + gevariable2, gevariable3);      //Fun math stuffs

        cout << "The Total of that calculation is : " << getotal << endl;
        cin.get();
    }
    else if (option == 2)                                              // Option 2 for Green Energy Menu
    {
        cout << "Pick a number between 1 and 3:" << endl;
        cin >> guess;
        cout << "Now choose a number between 2 and 4:" << endl;
        cin >> guess2;
        cin.get();

        if ( guess == 2 && guess2 == 3)                                 // Check if they guessed the correct number
        {
            cout << "Good Job! You can read." << endl;
        }
        else if ( guess != 2 || guess2 != 3)                            // If not correct they are doofey
        {
            cout << "Try again doofey!" << endl;
        }

    }
    else if (option == 3)                                               // Option 3 for Green Energy Menu
    {
        cout << "This is option 3" << endl;
    }
    else                                                                // If they did not choose a valid choice then Snargldebarf
    {
        cout << "Snargldebarf" << endl;
    }
}

void fiberOpticsMenu ()                                                     //The Fiber Optics Menu Function
{
    //Variables for Option 1
    int foOption;
    double foVariable1;
    double foVariable2;
    double foVariable3;
    double foVariable4;
    double foTotal;


    cout << "Please choose a calculation from the menu : " << endl;
    cout << " 1) Multiply 2 numbers by a third number and square root the answer." << endl;
    cout << " 2) Pull some information from the secret hidden file." << endl;
    cout << " 3) Let blank intentionally" << endl;
    cin >> foOption;                                                    // Store FiberOptics menu choice here
    cin.get();

    if (foOption == 1)
    {
        cout << "What is the first number :" << endl;
        cin >> foVariable1;
        cout << "What is the second number :" << endl;
        cin >> foVariable2;
        cout << "What is the third number :" << endl;
        cin >> foVariable3;

        foVariable4 = (foVariable1 * foVariable2) * foVariable3;
        foTotal = sqrt (foVariable4);

        cout << "The calculation of this problem is : " << foTotal << endl;
        cin.get();

    }
    else if (foOption == 2)
    {
        ofstream outputfile;                                                            // variable for output file being created and saved
        ifstream inputfile;                                                             // variable for reading the information from the output file

        string textToSave;
        string totalOutput;
        string readText;

        textToSave = "Your information has been recorded during the encryption breaking process.\nLocation: remote terminal #3 - floor 1 - server room 2\nYou cannot hide from us, you should have taken the other pill.\n\n";

        cout << "Breaking encryption on secret hidden file \n\n" << endl;
        sleep(1);                                                                       //Sleep function, tells the program to wait for X seconds then continue.
        cout << "**** (25%)" << endl;
        sleep(2);
        cout << "******** (50%)" << endl;
        sleep(2);
        cout << "************ (75%)" << endl;
        sleep(2);
        cout << "**************** (100%)" << endl;
        sleep(5);
        cout << "Recovering contents of file please wait.\n\n" << endl;
        sleep(3);

        outputfile.open ("C:\\Users\\Owner\\ClionProjects\\JW Project P1\\outputfile.txt");             // Open the output file

        if (outputfile.is_open())                                                                       // Check if the output file is open
        {
            outputfile << textToSave;                                                                   // If the output file has been opened then write the variable information to the file
        }
        outputfile.close();                                                                             // Close the output file

        sleep(3);

        inputfile.open( "C:\\Users\\Owner\\ClionProjects\\JW Project P1\\outputfile.txt");              // Open the outputfile
        if (inputfile.is_open())
        {
            while (getline(inputfile, totalOutput))                                                     // Do stuff while the output file is open
            {

                readText += totalOutput + "\n";                                                         // Read the contents of the output file and verify it is there
            }
            inputfile.close();                                                                          // Close the file
            cout << readText << endl;                                                                   // Print the contents of the file to the screen

        }
    }
    else if (foOption == 3)
    {
        cout << "This is option 3" << endl;
    }
    else
    {
        cout << "Snargldebarf" << endl;
    }
}

void cppMenu ()                                                                     // CPP Menu function
{

    int input;

    cout << "Please answer the question with 1 (yes) or 0 (no) : " << endl;
    cout << "Do you want to break science?" <<endl;
    cin >> input;
    cin.get();

    if (input == 1)                                                                 // If they want to break science ie true
    {
        cout << "Good going Peasant, now you broke science!" << endl;
        cout << "Try again" << endl;
    }
    else if ( input == 0)                                                           // If they do not want to break science ie false
    {
        cout << "Good job at not breaking science. Now go do something productive." << endl;
    }
}

void circleRadius ()
{
    Circle circle1, circle2;

    circle1.setRadius(1);
    circle2.setRadius(2.5);

    cout << "The area of Planet Sora is " << circle1.getArea() << endl;
    cout << "The area of Planet Doofy is " << circle2.getArea() << endl;
}

void Rectangle::setLength(double len)
{
    if (len >= 0.0)
        length = len;
    else
    {
        length = 1.0;
        cout << "Invalid length. Using default value of 1.0\n" << endl;
    }
}

void Rectangle::setWidth(double w)
{
    if (w >= 0.0)
        width = w;
    else
    {
        width = 1.0;
        cout << "Invalid width. Using default value of 1.0\n" << endl;
    }
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getArea()
{
    return length * width;
}

void rectangleStuff ()
{
    Rectangle box;
    double boxLength;
    double boxWidth;

    cout << "Use this program to calculate the area of The Pointy Boxy Thingy.\n" << endl;
    cout << "What is the length? " << endl;
    cin >> boxLength;
    cout << "What is the width? " << endl;
    cin >> boxWidth;

    box.setLength(boxLength);
    box.setWidth(boxWidth);

    cout << "\nHere is the Pointy Boxy Thingy's calculated data: \n" << endl;
    cout << "*********************" << endl;
    cout << "* Length : " << box.getLength() << "     *" << endl;
    cout << "* Width  : " << box.getWidth() << "     *" << endl;
    cout << "* Area   : " << box.getArea() << "   *" << endl;
    cout << "*********************" << endl;
}

void insertData(MonthlyBudget *object, double house, double utility, double expense, double transpo, double food, double med, double ins, double ent, double cloth, double misc, double total)
{
    object->housing=house;
    object->utilities=utility;
    object->householdExpenses=expense;
    object->transportation=transpo;
    object->food=food;
    object->medical=med;
    object->insurance=ins;
    object->entertainment=ent;
    object->clothing=cloth;
    object->misc=misc;
    ((*object).total)=total;

}

void printData(MonthlyBudget *object)
{
    cout << "\n" << endl;
    cout << "Housing:                        " << object->housing << endl;
    cout << "Utilities:                      " << object->utilities << endl;
    cout << "Household Expenses              " << object->householdExpenses <<endl;
    cout << "Transportation:                 " << object->transportation << endl;
    cout << "Food:                           " << object->food << endl;
    cout << "Medical:                        " << object->medical << endl;
    cout << "Insurance:                      " << object->insurance << endl;
    cout << "Entertainment:                  " << object->entertainment << endl;
    cout << "Clothing:                       " << object->clothing << endl;
    cout << "Miscellaneous:                  " << object->misc << endl;
    cout << "Total Monthly Budget Allowed:   " << object->total << endl;

}

void spent(BudgetSpent *object)
{
    cout << "How much did you spend on housing: " << endl;
    cin >> object->house;
    cout << "How much did you spend on Utilities: " << endl;
    cin >> object->utility;
    cout << "How much did you spend on Household Expenses: " << endl;
    cin >> object->expenses;
    cout << "How much did you spend on Transportation: " << endl;
    cin >> object->transpo;
    cout << "How much did you spend on Food: " << endl;
    cin >> object->food;
    cout << "How much did you spend on Medical: " << endl;
    cin >> object->med;
    cout << "How much did you spend on Insurance: " << endl;
    cin >> object->ins;
    cout << "How much did you spend on Entertainment: " << endl;
    cin >> object->ent;
    cout << "How much did you spend on Clothing: " << endl;
    cin >> object->cloth;
    cout << "How much did you spend on MISC expenses: " << endl;
    cin >> object->misc;
    cin.get();
}

void calculations(MonthlyBudget *budget, BudgetSpent *mySpent)
{
    double hdiff;
    double hdiff2;
    double udiff;
    double udiff2;
    double ediff;
    double ediff2;
    double tdiff;
    double tdiff2;
    double fdiff;
    double fdiff2;
    double mdiff;
    double mdiff2;
    double idiff;
    double idiff2;
    double endiff;
    double endiff2;
    double cdiff;
    double cdiff2;
    double midiff;
    double midiff2;

    if ( mySpent->house <= budget->housing)
    {
        hdiff = budget->housing - mySpent->house;
        cout << "You have: $" << hdiff << " left of your allowed housing budget." << endl;
    }
    else if (mySpent->house > budget->housing)
    {
        hdiff2 = mySpent->house - budget->housing;
        cout << "You spent: $" << hdiff2 << " more than your allowed budget for housing" << endl;
    }
    if (mySpent->utility <= budget->utilities)
    {
        udiff = budget->utilities - mySpent->utility;
        cout << "You have: $" << udiff << " left of your allowed utility budget." << endl;
    }
    else if (mySpent->utility > budget->utilities)
    {
        udiff2 = mySpent->utility - budget->utilities;
        cout << "You spent: $" << udiff2 << " more than your allowed budget for housing" << endl;
    }
    if (mySpent->expenses <= budget->householdExpenses)
    {
        ediff = budget->householdExpenses - mySpent->expenses;
        cout << "You have: $" << ediff << " left of your allowed Household Expenses budget." << endl;
    }
    else if (mySpent->expenses > budget->householdExpenses)
    {
        ediff2 = mySpent->expenses - budget->householdExpenses;
        cout << "You spent: $" << ediff2 << " more than your allowed budget for Household Expenses." << endl;
    }
    if (mySpent->transpo <= budget->transportation)
    {
        tdiff = budget->transportation - mySpent->transpo;
        cout << "You have: $" << tdiff << " left of your allowed Transportation budget." << endl;
    }
    else if (mySpent->transpo > budget->transportation)
    {
        tdiff2 = mySpent->transpo - budget->transportation;
        cout << "You spent: $" << tdiff2 << " more than your allowed budget for Transportation Budget." << endl;
    }
    if (mySpent->food <= budget->food)
    {
        fdiff = budget->food - mySpent->food;
        cout << "You have: $" << fdiff << " left of your allowed Food budget." << endl;
    }
    else if (mySpent->food > budget->food)
    {
        fdiff2 = mySpent->food - budget->food;
        cout << "You spent: $" << fdiff2 << " more than your allowed budget for Food Budget." << endl;
    }
    if (mySpent->med <= budget->medical)
    {
        mdiff = budget->medical - mySpent->med;
        cout << "You have: $" << mdiff << " left of your allowed Medical budget." << endl;
    }
    else if (mySpent->med > budget->medical)
    {
        mdiff2 = mySpent->med - budget->medical;
        cout << "You spent: $" << mdiff2 << " more than your allowed budget for Medical Budget." << endl;
    }
    if (mySpent->ins <= budget->insurance)
    {
        idiff = budget->insurance - mySpent->ins;
        cout << "You have: $" << idiff << " left of your allowed Insurance budget." << endl;
    }
    else if (mySpent->ins > budget->insurance)
    {
        idiff2 = mySpent->ins - budget->insurance;
        cout << "You spent: $" << idiff2 << " more than your allowed budget for Insurance Budget." << endl;
    }
    if (mySpent->ent <= budget->entertainment)
    {
        endiff = budget->entertainment - mySpent->ent;
        cout << "You have: $" << endiff << " left of your allowed Entertainment budget." << endl;
    }
    else if (mySpent->ent > budget->entertainment)
    {
        endiff2 = mySpent->ent - budget->entertainment;
        cout << "You spent: $" << endiff2 << " more than your allowed budget for Entertainment Budget." << endl;
    }
    if (mySpent->cloth <= budget->clothing)
    {
        cdiff = budget->clothing - mySpent->cloth;
        cout << "You have: $" << cdiff << " left of your allowed Clothing budget." << endl;
    }
    else if (mySpent->cloth > budget->clothing)
    {
        cdiff2 = mySpent->cloth - budget->clothing;
        cout << "You spent: $" << cdiff2 << " more than your allowed budget for Clothing Budget." << endl;
    }
    if (mySpent->misc <= budget->misc)
    {
        midiff = budget->misc - mySpent->misc;
        cout << "You have: $" << midiff << " left of your allowed Misc. budget." << endl;
    }
    else if (mySpent->misc > budget->misc)
    {
        midiff2 = mySpent->misc - budget->misc;
        cout << "You spent: $" << midiff2 << " more than your allowed budget for Misc. Budget." << endl;
    }


}