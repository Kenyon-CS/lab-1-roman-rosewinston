#ifndef ROMAN_H
#define ROMAN_H

#include <string>

class Roman {
private:
    std::string romanNumeral;  // Store Roman numeral as a string
    int integerValue;          // Store the corresponding integer value

    /**
    * Utility function converts romanNumeral to int for integerValue
    * Precondition: roman object exists and has a romanNumeral variable which contains a roman numeral
    * Postcondition: Updates the integerValue with the converted numerical value of romanNumeral
    * param numeral: roman numeral variable being converted to int
    * return: Returns integerValue
    */
    int romanToInt(const std::string& numeral);

    /**
    * Utility function converts integerValue to string for romanNumeral
    * Precondition: roman object exists and has a integerValue variable which contains a number between 1 and 3999
    * Postcondition: Updates the romanNumeral variable with the converted integerValue as a roman numeral
    * param value: integer being converted to roman numeral 
    * return: Returns romanNumeral
    */
    std::string intToRoman(int value);

public:
    // Default constructor
    Roman();

    // Constructor to initialize with a Roman numeral string
    Roman(const std::string& numeral);

    // Constructor to initialize with an integer
    Roman(int value);

    /**
    * Function prints integer value of roman object
    * Precondition: roman object exists and has integerValue
    * Postcondition: Prints integerValue of the roman object
    */
    void printDec() const;

    /**
    * Function prints roman numeral of roman object
    * Precondition: roman object exists and has romanNumeral
    * Postcondition: Prints romanNumeral of the roman object
    */
    void printRoman() const;

     /**
    * Function sets integer value of roman object
    * Precondition: roman object exists and has integerValue variable
    * Postcondition: Sets integerValue of the roman object
    * param value: integer value being set for the roman object
    */
    void setInt(int value);

    /**
    * Function sets romanNumeral value of roman object
    * Precondition: roman object exists and has romanNumeral variable
    * Postcondition: Sets romanNumeral of the roman object
    * param numeral: roman numeral string being set for the roman object
    */
    void setRoman(std::string numeral);

    /**
    * Function returns integer value of roman object
    * Precondition: roman object exists and has integerValue variable
    * Postcondition: returns integerValue of the roman object
    */
    int getInt() const;

    /**
    * Function returns romanNumeral value of roman object
    * Precondition: roman object exists and has romanNumeral variable
    * Postcondition: returns romanNumeral of the roman object
    */
    std::string getRoman() const;
};

#endif
