// Title: Ofstream File
// Purpose: create,open, check if file is open, write to file, and output ofstream file
// Enjoy the process - Practice makes Improvement
// Author : Fransiskus Agapa

#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::ofstream;
using std::string;

int main() {
    ofstream outFile;
    string fileName;

    cout << "\n Input name of file you would like to create (with file type i.e - .txt)" << endl;
    cout << " File name : ";
    cin >> fileName;                                   // everytime the program is running, new file shall be created

    outFile.open(fileName);                         // creates file and try to open
    if(!outFile.is_open())                             // check  if file can be opened
    {
        cout << " File cannot be created " << endl;
        return 1;
    }

    cout << "\n File [ " << fileName << " ] has been created " << endl;

    outFile << " This is my file " << endl;            // write into the file instead of 'cout', we use ofstream object
    outFile << " Horaay, we created and write into a file successfully ! " << endl;
    cout << " File closed " << endl;
    outFile.close();
    return 0;
}