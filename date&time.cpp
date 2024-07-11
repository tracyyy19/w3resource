#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;
string getStringDay(int wday, int mday);

//convert int week day and month to string 
string getStringDay(int wday, int mday) {
    string days[] = {"Sun", "Mon", "Tue", "Wed", "Thurs", "Fri", "Sat"};
    string months [] = {"Jan","Feb" , "Mar", "Apr", "May", "June", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
    string today = days[wday] + " " + months[mday];
    
    return today;
}

int main ()
{
    //problem 34 : program to display the current date and time
    time_t t = time(0);
    tm *ltm = localtime(&t);
 
    // display current date and time 
    cout << asctime (ltm);

    // display current date without week day 
    cout << "Current Date: " << (ltm->tm_mday) << "/"
    << (ltm->tm_mon) + 1 << "/" << (ltm->tm_year) + 1900 << endl;

    // display current data with week day 
    string today_string = getStringDay(ltm->tm_wday, ltm->tm_mon);
    cout << "Current Date: " << today_string << " "
         << (ltm->tm_mday) << ", "
         << (ltm->tm_year) + 1900 << endl;
 
    cout << "Current Time: " << (ltm->tm_hour) << ":"
        << (ltm->tm_min) << ":"
        << (ltm->tm_sec);
  return 0;
}
