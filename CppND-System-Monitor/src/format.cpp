#include <string>
#include "format.h"
using namespace std;
using std::string;


// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {

   string str ;
    
    int no_of_Hours = seconds / 3600;
    int remaining = seconds % 3600;
    int no_of_Mins = remaining / 60;
    int remaining_Sec = remaining % 60;
    string str1="";
  if (no_of_Hours < 10)
   str1 = "0" + std::to_string(no_of_Hours);
  else
    str1 = std::to_string(no_of_Hours);
  
  string str2 = "";
  if (no_of_Mins < 10)
   str2 = "0" + std::to_string(no_of_Mins);
  else
    str2 = std::to_string(no_of_Mins);
   
  string str3="";  
  if (remaining_Sec<10)
   str3 = "0" + std::to_string(remaining_Sec);
  else
    str3 = std::to_string(remaining_Sec);
    
  str = str1+":"+str2+":"+str3;
return str; 

}