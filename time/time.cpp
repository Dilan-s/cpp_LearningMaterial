#include <iostream>
#include <ctime>

using namespace std;

/*
time_t time(time_t *time) - returns time in seconds since 00:00 Jan 1 1970 UTC (*time = NULL for current time)

char *ctime (const time_t *time) - returns *time in format "day month year hours:minutes:seconds year\n\0".

struct tm *localtime(const time_t *time) - returns pointer to tm struct representing local time

clock_t clock() - time program has run for in number of clock ticks (system clock ticks per second can be found)

char *asctime(const struct tm *time) - returns *time in format "day month date hours:minutes:seconds year\n\0"

struct tm *gmtime(const time_t *time) - returns *tm struct in UTC/GMT time

time_t mktime(struct tm *time) - returns calendar-time equivalent of *time

double difftime(time_t time2, time_t time1) - returns difference in seconds between times

size_t strftime() - format date and time in a specific format
 */

int main() {
   // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC/GMT date and time is: "<< dt << endl;

   tm *lcltm = localtime(&now);
   dt = asctime(lcltm);
   cout << "The local date and time is: "<< dt << endl;


   now = time(0);

   cout << "Number of sec since January 1,1970:" << now << endl;

   tm *ltm = localtime(&now);
   
   // print various components of tm structure.
   cout << "Year:" << 1900 + ltm->tm_year << endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;












   cout << "Time program runs for is: " << clock() << endl;
}
