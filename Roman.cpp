// Roman.cpp
#include "Roman.h"
#include <cstring>
#include <iostream>

// Default Constructor
Roman::Roman(){
    romanNumeral="";
    integerValue = 0;
}

//Numeral Constructor
Roman::Roman(const std::string& numeral){
    romanNumeral = numeral;
    integerValue = romanToInt(romanNumeral);
}

//Integer Constructor
Roman::Roman(int value){
    integerValue = value;
    romanNumeral = intToRoman(integerValue);
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
    romanNumeral = intToRoman(integerValue);
}

//Set Roman Numeral
void Roman::setRoman(std::string numeral){
    romanNumeral = numeral;
    integerValue = romanToInt(romanNumeral);
}

//Return Decimal
int Roman::getInt() const{
    return integerValue;
}

//Return Roman
std::string Roman::getRoman() const{
    return romanNumeral;
}

//Helper conversion function
int convertNumeral(char c){
    if (c == 'I')
        return 1;
    if (c == 'V')
        return 5;
    if (c == 'X')
        return 10;
    if (c == 'L')
        return 50;
    if (c == 'C')
        return 100;
    if (c == 'D')
        return 500;
    if (c == 'M')
        return 1000;
    return -1;
}

// Convert Roman numeral to Integer
int Roman::romanToInt(const std::string& numeral){
    int result = 0;

    for (int i=0; i < numeral.size(); i++) {
        // Get value of current numeral
        int numeral1 = convertNumeral(numeral[i]);

        //Check if next symbol exists and compare
        if (i+1 < numeral.size()){
            int numeral2 = convertNumeral(numeral[i+1]);

            //Determine if current value is greater or equal, then add it to the result
            if (numeral1 >= numeral2){
                result += numeral1;
            }
            //Otherwise add the difference and skip the next symbol
            else{
                result += (numeral2-numeral1);
                i++;
            }
        }
        else{
            result +=numeral1;
        }
    }
    return result;
}

// Convert integer to Roman numeral - algorith from iq.opengenus.org
std::string Roman::intToRoman(int value){
    int input1, input2=value;
    char roman[20];
    roman[0]=0;
    char *thousands[]={ "M", "MM", "MMM"};
    char *hundreds[]= { "C", "CC", "CCC", "CD", "D" ,"DC", "DCC", "DCCC", "CM"};
    char *tens[]={ "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *units[]={"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int count;
    if  ( value < 0 || value >=4000)// check if the number is equal to or less than 4000 and less than zero
    {
        std::cout << "Cannot convert integers larger than 4000 or less than 0";
    }
    else{
        for(count=0; count<4; count++){
            if(input2 >= 1000 && input2 <4000){
                input1 = value/1000;
                input2 = value%1000;
                strcat (roman, thousands[input1-1]);
            }
            if (input2 < 1000 && input2 >= 100){
                input1 = (value%1000)/100;
                input2 = value%100;
                strcat ( roman, hundreds[input1-1]);
            }
             if (input2 < 100 && input2>= 10){
            input1 = ((value%1000)%100)/10;
            input2 = value%10;
            strcat ( roman, tens[input1-1] );
            }
            if (input2 <10 && input2 >= 1){  
            input1 = (((value%1000)%100)%10);
            input2=0;
            strcat ( roman, units[input1-1] );
            }
        }
        romanNumeral = roman;
    }
    return romanNumeral;
}