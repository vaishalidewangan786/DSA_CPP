#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
using namespace std;
class values
{
private:
public:
    string name;
    double figure;
    char sign;

    int reservedHour;
    int reservedMin;
    int reservedSec;
};

class countries
{
private:
    int meraCount = 0;
    values country[100];

public:
    int count = 0;

    countries() {}
    countries(string str, double d, char c)
    {
        country[count].name = str;
        country[count].figure = d;
        country[count].sign = c;
        count++;
    }

    void addCountry(string str, double d, char c)
    {
        country[count].name = str;
        country[count].figure = d;
        country[count].sign = c;
        count++;
    }

    void setReservedTime(int hr, int mn, int sc)
    {
        country[99].reservedHour = hr;
        country[99].reservedMin = mn;
        country[99].reservedSec = sc;
    }

    void printName()
    {
        int i = 0;
        //while(country[i].name!="")
        for (i = 0; i < count; i++)
        {
            cout << "#" << i + 1 << ". " << country[i].name << endl;
            //i++;
        }
    }

    values getCountry(int input)
    { //here input is the index and not the position of the element
        return country[input];
    }
    void deleteCountry(countries *ptrcntri)
    {
        cout << "To delete any country form the list enter the possition of the country  " << endl;
        int a;
        cin >> a;
        for (int i = (a - 1); i < 20; i++)
        {
            country[i] = country[i + 1];
        }
        count--;
        ptrcntri->printName();
    }
    void addantherCountry(countries *ptrcntri)
    {
        cout << "To add another country in the list Enter contry name , its GMT, and sign of GMT " << endl;
        cout << "Example: "
             << "India  5.30  +  " << endl;
        string str;
        double fg;
        char s;
        cin >> str >> fg >> s;
        ptrcntri->addCountry(str, fg, s);
        ptrcntri->printName();
    }

};

void printList(countries *cntry);
void input(countries *cntry);
void showTime(int input, countries *cntry);

void displayScreen(countries *cntry)
{
    int seconds, minutes, hours;

    //storing total seconds
    time_t total_seconds = time(0);

    //getting values of seconds, minutes and hours
    struct tm *ct = localtime(&total_seconds);

    seconds = ct->tm_sec;
    minutes = ct->tm_min;
    hours = ct->tm_hour;

    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    cout << " \t\t\t Well YOur Current Local Time is:: " << hours << " HH " << minutes << " MM " << seconds << " SS." << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    cout << "Now Instruction To Be Noted:::" << endl;
    cout << "Press 0 To Update Local Current Time To Get The More Exact Time" << endl;
    cout << "Press 1 To See The List Of the countries" << endl;
    cout << "Press the country number to get its current time" << endl;
    cout << "Press -1 to come to the main menu" << endl;

    cntry->setReservedTime(hours, minutes, seconds);

    input(cntry);
}

void input(countries *cntry)
{
    cout << "Enter your choice of command [0, 1, -1]: " << endl;
    int inp;
    cin >> inp;
    switch (inp)
    {
    case 0:
        system("CLS");
        displayScreen(cntry);
        break;
    case 1:
        printList(cntry);
        break;
    case -1:
        displayScreen(cntry);
        break;

    default:
        cout << "Invalid Key, try again later" << endl;
        input(cntry);
        break;
    }
}

void printList(countries *cntry)
{
    cntry->printName();
    int input;
    cout << "Enter the country number to get its current time: " << endl;

    cin >> input;
    if (input >= 0)
    {
        showTime(input, cntry);
    }
}

void showTime(int input, countries *cntry)
{

    values obj = cntry->getCountry(input - 1); // here input is the position of the element//wish
    values resObj = cntry->getCountry(99);     //india

    int gmtHr = obj.figure;
    int gmtMn = (obj.figure - gmtHr) * 100;
    int final_hour = resObj.reservedHour - 5 + gmtHr;
    int final_min = resObj.reservedMin - 30 + gmtMn;
    if (final_min < 0)
    {
        final_hour = final_hour - 1;
        final_min = final_min + 60;
    }
    if (final_min > 60)
    {
        final_min = final_min - 60;
        final_hour = final_hour + 1;
    }

    cout << "Here is the time of " << obj.name << " :"
         << " \n"
         << "\t " << final_hour << " HH " << final_min << " MM " << resObj.reservedSec << " SS." << endl;
    cout << "And some other info is that, this country has a GMT of : " << obj.sign << " " << obj.figure << endl;
}

void show_once(countries *country)
{
    cout << endl
         << endl;
    cout << "Press 0 To See the list and to know the time of any country from the list " << endl;
    cout << "Press 1 To Delete any country from the list and see the updated list " << endl;
    cout << "Press -1 To Add another contry to the list and see the updated list " << endl;
    cout << "Enter your choice of command [0, 1, -1]: " << endl;
    int command;
    cin >> command;
    switch (command)
    {
    case 0:
        system("CLS");
        displayScreen(country);
        break;
    case 1:
        country->deleteCountry(country);
        displayScreen(country);
        break;
    case -1:
        country->addantherCountry(country);
        displayScreen(country);
        break;
    default:
        cout << "Invalid Key, try again later" << endl;
        show_once(country);
        break;
    }
}

int main()
{
    cout << "-----------------------Hello There, And Welcome To My Computer Programming Project----------------------" << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    cout << "---------------------------To display to the current time of different countries-------------------------" << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;

    countries Country_details("India", 5.30, '+');
    Country_details.addCountry("Afghanistan", 4.30, '+');
    Country_details.addCountry("Bangladesh", 6.00, '+');
    Country_details.addCountry("China", 8.00, '+');
    Country_details.addCountry("Israel", 2.00, '+');
    Country_details.addCountry("Japan", 9.00, '+');
    Country_details.addCountry("Pakistan", 5.00, '+');
    Country_details.addCountry("America", 11.30, '-');
    Country_details.addCountry("South Africa", 2.00, '+');
    displayScreen(&Country_details);
    show_once(&Country_details);
    return 0;
}