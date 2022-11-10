#include <iostream>
using namespace std;
class Event // Declaration of Class //
{
    char event[25], name[25];
    int no_guest, minute, No_Server;
    float cost1, cost2, TotalcostServer1, TotalFoodCost, Average, TotalCost, deposit;

public:
    void input() // Enter Input From Cilent side //
    {
        cout << "********** Event Management System **********";
        cout << "\n\nEnter the name of the event : ";
        cin >> event;
        cout << "Enter the Customer's first and last name : ";
        cin >> name;
        cout << "Enter the Number of guests : ";
        cin >> no_guest;
        cout << "Enter the number of minutes in the event : ";
        cin >> minute;
    }

    void Estimate() // Calculation From Owner Side //
    {
        const float CostPerHour = 18.50;
        const float CostPerMinute = 0.40;
        const float CostOfDinner = 20.70;

        cout << "\n\n********** Event Estimate For : " << name << " **********";

        No_Server = no_guest / 20; // Calculation of Number of server //
        cout << "\n\nNumber Of Server : " << No_Server;

        cost1 = float(minute / 60) * CostPerHour;
        cost2 = float(minute % 60) * CostPerMinute;
        TotalcostServer1 = cost1 + cost2; // Cost of 1 Sever //
        cout << "\nThe Cost For One Servers : " << TotalcostServer1;

        TotalFoodCost = no_guest * CostOfDinner; // Total Food Cost //
        cout << "\nThe Cost for Food is : " << TotalFoodCost;

        Average = TotalFoodCost / no_guest; // Average of Cost For One Person //
        cout << "\nAverage Cost Per Person :  " << Average;

        TotalCost = TotalFoodCost + (TotalcostServer1 * No_Server); // Total Cost = Food Cost + Sever Cost //
        cout << "\n\nTotal Cost is : " << TotalCost;

        deposit = TotalCost / 4; // Calculation of Deposite //
        cout << "\n\nAs Per Our Restaurant Rules, Please Deposite a(25%) Deposite to Reserve the Event.";
        cout << "\nThe Deposit Needed is : " << deposit;
    }
};
main()
{
    Event obj; // Declaration of Object //

    obj.input();
    obj.Estimate();
};