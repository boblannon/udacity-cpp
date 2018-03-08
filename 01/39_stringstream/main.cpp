/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */
 #include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
   std::string stringLength;
   std::string stringWidth;
   float length = 0;
   float width = 0;
   float area = 0;

   std::cout << "Enter length: ";
   std::getline (std::cin,stringLength);
   std::stringstream(stringLength) >> length;

   std::cout << "Enter width: ";
   std::getline (std::cin,stringWidth);
   std::stringstream(stringWidth) >> width;

   std::cout<<"You entered "<< length << "x" << width <<"\n";
   area = length * width;
   std::cout << "Area is " << area << "\n";
   return 0;
 }
