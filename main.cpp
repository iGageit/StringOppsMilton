// Learning about strings opperators and the power of the string library. 
// 2019-12-03
// Dr_T
// Richardson Gage Milton

#include <iostream>
#include <string>
using namespace std; 












int main() {

// string is an object
string str1("first string"); // string initalization 
cout << str1 << endl; 
string str2(str1); // initalize a new string based upon another string. 
cout << str2 << endl;
//# chat to screen 5 times
string str3(5, '#'); // initalization by char with number of occurances
// print the # chat to screen 5 times
cout << str3 << endl; 
string str4(str1, 6, 6); // begin at index 6, char 7 element 
// print from element 7 + 6 chars in str1 | (str1, 6, 6) = string 
cout << str4 << endl; 

// string initalization by iterator by part of another string.
string str5(str2.begin(), str2.end() + 5 ); // add 5 blank spaces in str2 and create str5 
cout << str2.length() << endl; // 12 intial chars in str2
cout << str5.length() << endl; // now 17 chars in str5
cout << str5 << endl; 
string str6 = str4; 

cout << str4.length() << endl; 
// deleting every char in a string
str4.clear();
cout << str4.length() << endl; 

char ch = str6.at(2); // ch = str6[2];
cout << ch << endl; // print the third element of the string. 

char chf= str6.front(); //chf = str6[0];
char chb = str6.back(); // chb = str6[str6.length() -1 ]; 
cout << chf << chb << endl; 

// c_str // old school strings
const char* charstr = str6.c_str();
printf("%s\n", charstr); 

// add an argument at the end of the string 
str6.append(" extenstion"); // str6 += " extenstion";
str4.append(str6, 0,6); 
cout << str5 << " " << str6 << endl; // str4 has the first 6 chars of str6.

// future study 
//https://repl.it/@TysonMcMillan/CPPStringOpperationsDrT


  return 0; 
}