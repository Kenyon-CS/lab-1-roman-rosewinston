//Created by Rose Winston and Andrew Pilat
//Test file and user interface for Roman numeral class lab. 
//This class converts numerals to integers and integers to numerals, storing them as objects that have both values
//We both contributed equally to the development of this program and followed the guidelines for Pair Programming accurately and carefully.
#include <iostream>
#include <map>
#include <string>
#include "Roman.h"

int main() {
    // Creating objects of Roman class
    Roman roman1("XII");
    Roman roman2(1987);

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

    int input=0;
    std::string numeralInput;
    std::string loop = "y";
    while(loop != "n"){ //Initializes loop for user interface
        std::cout << "Type a number between 1 and 3999 and we'll convert it to a roman numeral! ";
        std::cin >> input;
        if (input != 0 && input <3999){ //Makes sure user is not inputting something that will not convert
            roman1.setInt(input);
            std::cout << "The numeral is: " << roman1.getRoman() << std::endl; //Tests the getRoman method
        }
        else{
            std::cout << std::endl << "That was not a valid number" << std::endl;
        }
        std::cout << "Now try it the other way around! (Enter a roman numeral) ";
        std::cin >> numeralInput;
        if (numeralInput.length()<=20){
            roman1.setRoman(numeralInput);
            std::cout << "The integer is: " << roman1.getInt() << std::endl; //Tests the getInt method
        }
        else{
            std::cout << std::endl << "Error, numeral too large" << std::endl;
        }
        std::cout << "Would you like to continue? (Enter 'n' to end program.)" << std::endl;
        std::cin >> loop;
    }
    return 0;
}
