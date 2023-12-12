#include <fstream>
#include <iostream>
using namespace std;

int main(){
    string line;
    ifstream Person("read.txt");

    while (getline(Person, line))
    {
        cout << line << endl; 
    }
    

    Person.close();

}