#include <iostream>
#include <string>

using namespace std;

//This function is using for check if number is between 100 to 200
bool checknumber(int number){
    if (100 < number && number < 200)
    {
        return true;
    }
    return false;
}

int main(){
    //inputting the information
    string username;
    cout << "What is your name :" << endl;
    cin >> username;

    string instructorname;
    cout << "What is your instructor's name :" << endl;
    cin >> instructorname;

    string food;
    cout << "Type a food :" << endl;
    cin >> food;

    int temprature;
    cout << "Choose a number between 100 to 200 :" << endl;
    cin >> temprature;
    // checking if the number is between 100 to 200
    bool result = checknumber(temprature);
    while (result == false)
    {
    cout << "Please make suer the number is between 100 to 200." << endl;
    cout << "Choose another number between 100 to 200 :" << endl;
    cin >> temprature;
    result = checknumber(temprature);
    }

    string adjective;
    cout << "Type an adjective :" << endl;
    cin >> adjective;

    string color;
    cout << "Type a color :" << endl;
    cin >> color;

    string animal;
    cout << "Type an animal :" << endl;
    cin >> animal;

    //print
    cout << "Dear Instructor " << instructorname << "," << endl;
    cout << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill. I came down with a fever of " << temprature << ". Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late" << endl;
    cout << endl;
    cout << "Sincerely," << endl;
    cout << username << endl;

    return 0;
}


