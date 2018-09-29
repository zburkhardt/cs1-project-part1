#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int HELICOPTER = 130,
          TURBO_PROP = 250,
          MIDSIZE_JET = 400,
          HEAVY_JET = 550;

const float CLE_ORD = 273.00f,
            ORD_JFK = 641.00f,
            DEN_JFK = 1409.00f,
            JFK_SFO = 2242.00f,
            JFK_MIA = 949.00f,
            DFW_CYYZ = 1041.00f;

int main()
{
    cout << "Welcome to Zach Burkhardt Airlines" << endl;


    int transSel = 0;
    bool invalidInput = true;
    do
    {

        cout << "Please enter the number of your transportation method and press Enter: "
        cin >> transSel;

        if((cin.fail()) || (transSel < 1) || (transSel > 5))
        {
            cout << "*** SELECTION IS INVALID ***";
            cin.clear();
            cin.ignore(#######################);
            invalidInput = true;
        }
        else
        {
            invalidInput = false;
        }

    } while(invalidInput);


    if(transSel == 1)
    {
        cout << "*** HELICOPTER SELECTED ***" << endl;
    }
    else if(transSel == 2)
    {
        cout << "*** TURBO PROP SELECTED ***" << endl;
    }
    else if(transSel == 3)
    {
        cout << "*** MIDSIZE JET SELECTED ***" << endl;
    }
    else if(transSel == 4)
    {
        cout << "*** HEAVY JET SELECTED ***" << endl;
    }


    int routeSel = 0;
    do
    {

        cout << "Please enter the number of your route and press Enter: "
        cin >> routeSel;

        if((cin.fail()) || (routeSel < 1) || (routeSel > 5))
        {
            cout << "*** SELECTION IS INVALID ***" << endl;
            cin.clear();
            cin.ignore(#######################);
            invalidInput = true;
        }
        else
        {
            invalidInput = false;
        }

    } while(invalidInput);


    if(routeSel == 1)
    {
        cout << "*** CLE-ORD ROUTE SELECTED ***" << endl;
        cout << endl;
    }
    else if(routeSel == 2)
    {
        cout << "*** ORD-JFK ROUTE SELECTED ***" << endl;
        cout << endl;
    }
    else if(routeSel == 3)
    {
        cout << "*** DEN-JFK ROUTE SELECTED ***" << endl;
        cout << endl;
    }
    else if(routeSel == 4)
    {
        cout << "*** JFK-SFO ROUTE SELECTED ***" << endl;
        cout << endl;
    }
    else if(routeSel == 5)
    {
        cout << "*** JFK-MIA ROUTE SELECTED ***" << endl;
        cout << endl;
    }
    else if(routeSel == 6)
    {
        cout << "*** DFW-CYYZ ROUTE SELECTED ***" << endl;
        cout << endl;
    }


    signed short int wind = 0;
    do
    {

        cout << "Please enter the wind speed and press Enter: "
        cin >> wind;

        if((cin.fail()) || (wind < 1) || (wind > 5))
        {
            cout << "*** SELECTION IS INVALID ***" << endl;
            cin.clear();
            cin.ignore(#######################);
            invalidInput = true;
        }
        else
        {
            invalidInput = false;
        }

    } while(invalidInput);


    if(routeSel == 1)
    {
        cout << "*** CLE-ORD ROUTE SELECTED ***" << endl;
        cout << endl;
    }
    else if(routeSel == 2)
    {
        cout << "*** ORD-JFK ROUTE SELECTED ***" << endl;
        cout << endl;
    }
    else if(routeSel == 3)
    {
        cout << "*** DEN-JFK ROUTE SELECTED ***" << endl;
        cout << endl;
    }
    else if(routeSel == 4)
    {
        cout << "*** JFK-SFO ROUTE SELECTED ***" << endl;
        cout << endl;
    }
    else if(routeSel == 5)
    {
        cout << "*** JFK-MIA ROUTE SELECTED ***" << endl;
        cout << endl;
    }
    else if(routeSel == 6)
    {
        cout << "*** DFW-CYYZ ROUTE SELECTED ***" << endl;
        cout << endl;
    }

    return 0;
}
