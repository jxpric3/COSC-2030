#include <iostream> 
#include <map>
#include <set>
#include <string> 

using namespace std;

int main()
{
   string courseNumber;
   
    map<string, string> roomNumbers = {
      {"CS101", "3004"},
      {"CS102", "4501"},
      {"CS103", "6755"},
      {"NT110", "1244"},
      {"CM241", "1411"} 
   };  

   map<string, string> instructors = {
      {"CS101", "Haynes"},
      {"CS102", "Alvarado"},
      {"CS103", "Rich"},
      {"NT110", "Burke"},
      {"CM241", "Lee"} 
   };

   map<string, string> meetingTimes = {
      {"CS101", "8:00 a.m."},
      {"CS102", "9:00 a.m."},
      {"CS103", "10:00 a.m."},
      {"NT110", "11:00 a.m."},
      {"CM241", "1:00 p.m."} 
   };

   cout << "Please enter a course number: ";
   cin >> courseNumber;

   if(roomNumbers.find(courseNumber) != roomNumbers.end())
   {
      cout << "Course Number: " << courseNumber << endl;
      cout << "Room Number: " << roomNumbers[courseNumber] << endl;
      cout << "Instructor: " << instructors[courseNumber] << endl;
      cout << "Meeting Time: " << meetingTimes[courseNumber] << endl;
   }
   else
   {
      cout << "Course number not found." << endl;
   }

   return 0;
}