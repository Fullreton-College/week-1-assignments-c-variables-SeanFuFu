#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //maintaining three digits after the decimal point
    cout << fixed << setprecision(3);

    //inputting the numbers
    double n1;
    double n2;
    double n3;
    double n4;
    cout << "Please type four numbers:" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    //Calculating
    double averagewithdecimals = (n1 + n2 + n3 + n4) / 4;
    double productwithdecimals = n1 * n2 * n3 * n4;

    int average = static_cast<int>(averagewithdecimals);
    int product = static_cast<int>(productwithdecimals);

    //print
    cout << "The product of the four numbers is: " << product << " (" << productwithdecimals << ")." << endl;
    cout << "The average of the four numbers is: " << average << " (" << averagewithdecimals << ")." << endl;


    return 0;
}
