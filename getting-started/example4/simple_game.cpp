#include <iostream>
#include <stdlib.h>
using namespace std;

int find(int arr[], int len, int seek){
  for (int i = 0; i < len; ++i)
  {
    if(arr[i] == seek) return i; 
  }
  return -1;
}

int main() {
  int rand_int = rand() % 100;
  const int length = 100;
  int options[length]; 
  
  int guess; 
  int idx; 

  /* Making the options array which has numbers 1 to 100, 
  every time a guess is made, remove from this array*/
  for (size_t i = 1; i <= length; i++)
  {
    options[i] = i; 
  }
  

  while (guess != rand_int )
  {
    cout << "Guess a number between 0 and 100!" << endl;
    cin >> guess;

    if(guess < 0 || guess > 100 ){
      cout << "That number is not between 0 and 100" << endl;
      continue;
    }

    idx = find(options, 100, guess);
    
    if(idx == -1){
      cout << "You have already guessed this number" << endl;
      continue;
    }

    options[idx] = 0; 

    if(guess > rand_int){
      cout << "Too High" << endl;
    }

    if(guess < rand_int){
      cout << "Too Low" << endl;
    }


    // change the numbers that have been guessed to zero
  }

  cout << "You guessed the number correctly" << endl;
  
  return 0;
} 

