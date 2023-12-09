Example 8: What is available where?
What is the output of the following program?


```cpp
// scope.cpp, Maggie Johnson
// Description: A program to illustrate different scopes

#include <iostream>
using namespace std;

int a = 18;
int b = 6;

int function1(int a, int b) {
  return a - b;
}

int function2() {
  int c;
  c = a + b;
  return c;
}

int main() {
  int b = 12;
  int c = 0;
  a = function1(b, a);
  c = function2();
  cout << "a: " << a << " b: " << b << " c: " << c << endl;
}
```

Once you have figured out your answer, check our commented version of the code [here](https://developers.google.com/edu/c++/solutions/1-10).

## My answer

main() funtion runs
b is hidden by declaration in block


a = function1(12,18)
a = -6 alters global a (no redeclaration of a in any of the blocks) 

c = function2()
a,b from global scope accessed 
c = 0

a: -6 b: 12 c: 0


