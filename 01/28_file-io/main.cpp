/*The goal of this quiz is to practice writing and reading files.
**Read the contents of input.txt and then write to it.
**
**We are using input.txt as our file. This is not an ideal
**situation, because when we write to it, we cannot
**see the changes. We can manually write in input.txt and
**we can also use the program to write to the file.
**Then we can read what we wrote using our program.
**
**Your assignment for this quiz**
**Change the contents of the file called input.txt
**Change the ifstream and ofstream to fstream

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    fstream myfile;
    myfile.open("input.txt");
    if (myfile.is_open())
    {
        myfile.seekp(0, ios_base::end);
        myfile << "\nI am adding a line.\n";
        myfile << "I am adding another line.\n";


        cout << "\nAfter editing:\n";

        myfile.seekp(0);

        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }

        myfile.close();
    }
    else cout << "Unable to open file for writing";

    return 0;
}
