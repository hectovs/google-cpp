// hello.cpp: Maggie Johnson
// Description: a program that prints the immortal saying "hello world"
// print hello world 4 times on 6 lines where each statement is printed in a field of 17 spaces 


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  for(int n=1; n<7 ; n++){
    for(int i=1; i<5; i++){
      std::cout << std::left << "Hello World!" <<  setw(17);
    }
    std::endl (std::cout);  
  }

  return 0;
}