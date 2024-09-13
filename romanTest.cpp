//Test file for Roman class
#include <iostream>
#include <map>
#include <string>
#include "Roman.h"

int main() {
    // Creating objects of Roman class
    Roman roman1("XII");
    Roman roman2(1987);
    
    //Tests of getInt and getRoman
    int val1 = roman1.getInt(); 
    std::string num1 = roman1.getRoman();
    int val2 = roman2.getInt();
    std::string num2 = roman2.getRoman();

    // Printing values
    std::cout << "roman 1 numeral: ";
    roman1.printRoman();   // Output: Roman Numeral: XII
    std::cout << std::endl << "roman 1 value: ";
    roman1.printDec(); // Output: Integer Value: 12

    std::cout << std::endl << "roman 2 numeral: ";
    roman2.printRoman();   // Output: Roman Numeral: MCMLXXXVII
    std::cout << std::endl << "roman 2 value: ";
    roman2.printDec(); // Output: Integer Value: 1987
    std::cout << std::endl;
}