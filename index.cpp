
#include <iostream>

using namespace std;

int main () {

        cout << "1) Kg Into lb Converter " <<endl;
        cout << "2) lb into Kg Converter " <<endl;



int userinput;
double x;

    while (true)
    {
        cout << "Choose Your Option : " ;
        cin >> userinput;
        cout << endl <<endl;

        if (userinput > 0 && userinput < 3)
        {
            break;
        }
        else {
            cout << "Invalid Input , Try Again .. " <<endl;
        }

    }

            cout << endl <<endl;


    if (userinput == 1)
    {
        cout << "Kg Into lb Converter .. " <<endl <<endl;
        cout << "Type The Amout You Want To Convert :  ";
        cin >>x;
                cout << endl;
                        cout << endl;
        x = x * 2.2;
            cout << "The Amount Is " << x << " lb";
            cout << endl <<endl;

    }
    else if (userinput == 2)
    {
                cout << "lb Into Kg Converter .. " <<endl <<endl;
                        cout << "Type The Amout You Want To Convert :  ";

             cin >>x;
                cout << endl;
                        cout << endl;
        x = x / 2.2;
            cout << "The Amount Is " << x << " Kg";
            cout << endl <<endl;
    }


                cout << endl <<endl;

}
