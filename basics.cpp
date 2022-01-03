#include <iostream>

using namespace std;

int main() {
    // says hello to the ball licker
    cout << "hello ball licker \n";
    // says line2
    cout << "line2 \n";
    // defines a interger and prints it to sdout
    int mynum = 69420;
    mynum = 15;
    cout << mynum;
    cout << "\n";


    int mygun = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals) w3 schools says to use doubles insted of floats for most calcs
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false) 
    cout << "i am " << mygun << " years old. \n";

    // operations in vars
    int m = 5;
    int v = 6;
    int sum= v+m;
    cout << sum;

    // vars can also be listed in one line
    int x = 5, y = 6, z = 50;
    cout << x + y + z;
    // append "const" to the start on a variable to make it Read-Only
    const int number = 25; // now unwriteable
    // number = 10; will cause a compile error

    // accept user input with "cin" 
    // cin "see in" cout "see out"
    int numberInput;
    cout << "Type a number: "; // prints "see out"
    cin >> numberInput; // waits for input
    cout << "your number is " << numberInput << "\n";

    //use "e" in a double or float to indicate a power of
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1;
    cout << d1; 
    cout << "\n";
    // use char to define a single character. acsii can also be used
    char myGrade = 'B';
    cout << myGrade;
    char ascii = 65;
    cout << ascii;
    
    return 0;
}
