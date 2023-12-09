Example 6: Strings for your consideration
What does the following program output?

```cpp
#include <iostream>
using namespace std;

int main() {
  string str1 = "To be or not to be, that is the question";
  string str2 = "only ";
  string str3 = str1.substr(6, 12);
  str1.insert(32, str2);
  str1.replace(str1.find("to be", 0), 5, "to jump");
  str1.erase(9, 4);
  cout << str1 << endl;
  for (int i = 0; i < str3.length(); i++)
    cout << str3[i]; cout << endl;
}
```

## substr method 
string 3 is "or not to be" 6 characters in 12 long

## insert method 
str1 becomes 
"To be or not to be, that is the only question"

## replace method 
str1 becomes 
"To be or not to jump, that is the only question" 

## erase method 
str1 becomes 
"To be or to jump, that is the only question"

##output quess 
To be or to jump, that is the only question
or not to be 
