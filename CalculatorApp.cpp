#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int decimalInput;
    cout << "Input decimal number: ";
    cin >> decimalInput;

    //cout << pow(2, 5) << endl;

    float temp = decimalInput;
    string binaryResult = "";
    //special cases 1 & 0
    if (temp == 1) {
            binaryResult += "1";
    }
    if (temp == 0) {
        binaryResult += "0";
    }
    for (int i = 1; temp > 1; i++) {
        temp = temp / 2;
        if (temp > floor(temp)) { //case r1
            temp = floor(temp);
            binaryResult += "1";
        } else if (temp == floor(temp)) { //case r0
            binaryResult += "0"; 
        }
        if (temp == 1) {
            binaryResult += "1";
            exit;
        }
    }
    reverse(binaryResult.begin(), binaryResult.end());
    cout << "Binary result: " << binaryResult << endl;
    

    string binaryNumber; 
    cout << "Binary number input: ";
    cin >> binaryNumber;

    int power = 0;
    int decimalResult = 0;

    for (char c : binaryNumber) { //for each
        power++;
    }
    power--;

    char binaryArray[power];

    for (char c : binaryNumber) {
        if (c == '1') {
            decimalResult += pow(2, power);
            power--;
        } else if (c == '0') {
            power--;
        }
    }
    cout << "Decimal result: " << decimalResult << endl;
}