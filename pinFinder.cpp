//? code by: Tuhin Shubhra Chakraborty
//? start date: 10/02/2023
//? description: This program is to take an address and Identify the part which represents pincode in the address
//? change log: ----

#include <bits/stdc++.h>
#include <string.h>

//! if due to some machine sprecific reasons header file <bits/stdc++.h> does not works then use bellow mention header files
/* //?for c++ 11 and above (any modern compiler)
 * #include <iostream> 
 * #include <string>
*/

/* //?for before c++ 17 (devC++ / turoC++)
 * #include <iostream>
 * #include <string>
 */

using namespace std;

int main(int argc, char const *argv[])
{
    //* The string "address" is the test string
    //* it will be searched for the 6 digit address pin
    //* if all things run correct, the desired output will be 733134
    char address[] = "Tuhin Shubhra Chakraborty, 22/3/b Milanpara, Raiganj, U/D, 733134,jsojaiuoriuoeu";
    
    //* sub String address will divide the string by pelimeter ','
    char *subStringedAddress;

    //?debug line
    cout << address << endl; //! disposable code

    //* takes the first substring
    subStringedAddress = strtok(address, ",");

    //*rest of substring

    while(subStringedAddress != NULL){
        cout << subStringedAddress << endl;//! disposal code
        subStringedAddress = strtok(NULL, " ,");
    }

    return 0;
}
