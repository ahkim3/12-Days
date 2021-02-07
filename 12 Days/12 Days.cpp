/*
Name: Andrew Kim
Date: January 19, 2021
Program: 12 days

I hereby certify that this program represents my
work and that the design and logic was completed
without outside assistance.

Signature: Andrew Kim
*/

#include <iostream>

using namespace std;

int main()
{
    // Greets user
    cout << "Get ready to sing The Twelve Days of Christmas!\n\n";
    
    // Loops through all days
    for (int day = 1; day <= 12; day++)
    {
        // Prints part of verse that states the day
        cout << "On the ";
        // Converts day to an ordinal adverb
        switch (day)
        {
        case 12:
            cout << "twelfth";
            break;
        case 11:
            cout << "eleventh";
            break;
        case 10:
            cout << "tenth";
            break;
        case 9:
            cout << "ninth";
            break;
        case 8:
            cout << "eighth";
            break;
        case 7:
            cout << "seventh";
            break;
        case 6:
            cout << "sixth";
            break;
        case 5:
            cout << "fifth";
            break;
        case 4:
            cout << "fourth";
            break;
        case 3:
            cout << "third";
            break;
        case 2:
            cout << "second";
            break;
        case 1:
            cout << "first";
            break;
        default:
            cout << "Something went wrong.";
            return 1;
        }
        cout << " day of Christmas\nMy true love sent to me\n";

        // Prints rest of verse depending on the day
        switch (day)
        {
        case 12:
            cout << "Twelve drummers drumming,\n";
        case 11:
            cout << "Eleven pipers piping,\n";
        case 10:
            cout << "Ten lords a-leaping,\n";
        case 9:
            cout << "Nine ladies dancing,\n";
        case 8:
            cout << "Eight maids a-milking,\n";
        case 7:
            cout << "Seven swans a-swimming,\n";
        case 6:
            cout << "Six geese a-laying,\n";
        case 5:
            cout << "Five golden rings,\n";
        case 4:
            cout << "Four calling birds,\n";
        case 3:
            cout << "Three french hens,\n";
        case 2:
            cout << "Two turtle doves, and\n";
        case 1:
            cout << "A partridge in a pear tree\n";
            break;
        default:
            cout << "Something went wrong.";
            return 1;
        }

        // Prints newline
        cout << "\n";
    }
}
