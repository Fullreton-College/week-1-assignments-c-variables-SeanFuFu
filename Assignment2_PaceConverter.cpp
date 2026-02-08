#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mph;
    cout << "type the mph that you want to transfer: " << endl;
    cin >> mph;
    // PACE calculation
    /* write your code */
    // the mintues
    int minutes = 60 / mph;
    // the seconds
    double seconds = ( 3600 / mph ) - ( 60 * minutes );

    //maintaining one digits after the decimal point
    cout << fixed << setprecision(1);
    /* write your code here */
    //express pace in minutes and seconds

    cout << mph <<"mph --> "<< minutes <<"minutes and "<< seconds <<"seconds." << endl;
    return 0;
}
