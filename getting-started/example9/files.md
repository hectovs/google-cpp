Example 9: Processing Files
File processing in C++ is performed using fstream. To save to a file, we declare an ofstream, and open it using the "out" mode. Check this out in the following example.

```cpp
// file.cpp, Maggie Johnson
// Description: An illustration of file processing
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char first_name[30], last_name[30]; int age;
  char file_name[20];
  // Collect the data.
  cout << "Enter First Name: "; cin >> first_name;
  cout << "Enter Last Name: "; cin >> last_name;
  cout << "Enter Age: "; cin >> age;
  cout << endl << "Enter the name of the file: "; cin >> file_name;

  // Create an ofstream called People, open the stream for output.
  ofstream People(file_name, ios::out);
  // Write the output to the stream.
  People << first_name << endl << last_name << endl << age << endl; return 0;
} 

```
See if you can figure out how to open the file just created, and display the data. Here is our solution.
Now see if you can modify this program to allow the user to enter many records of data using a loop. We also want to read back all the data, one record at a time. Here is our solution.