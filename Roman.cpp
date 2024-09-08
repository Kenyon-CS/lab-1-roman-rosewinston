// Roman.cpp
#include "Roman.h"
#include <string>
#include <iostream>

// Default Constructor
Roman::Roman(){
    std::string numeral="";
    int value = 0;
}

//Numeral Constructor
Roman::Roman(const std::string& numeral){
    std::string romanNumeral = numeral;
    int integerValue = romanToInt(romanNumeral);
}

//Integer Constructor
Roman::Roman(int value){
    int integerValue = value;
    std::string romanNumeral = intToRoman(integerValue);
}

//Print Decimal
void Roman::printDec() const{
    std::cout << integerValue;
}

//Print Roman
void Roman::printRoman() const{
    std::cout << romanNumeral;
}

//Set Integer Value
void Roman::setInt(int value){
    integerValue = value;
}

//Set Roman Numeral
void Roman::setRoman(std::string numeral){
    romanNumeral = numeral;
}

//Return Decimal
int Roman::getInt() const{
    return integerValue;
}

//Return Roman
std::string Roman::getRoman() const{
    return romanNumeral;
}