#include <iostream>

using namespace std;

// horses cost $10
// pigs cost $3 
// rabbits cost $0.50
// how to buy 100 animals for $100
// brute force 

int main()
{
    float cost; 
    float rabbit = 0.50;
    
    int horse = 10; 
    int pig = 3;
    int n_animals; 

    for (int n_horses=0; n_horses < 100; n_horses++){
        for(int n_pigs=0; n_pigs < 100; n_pigs++){
            for(int n_rabbits=0; n_rabbits < 100; n_rabbits++){
                n_animals = n_horses + n_pigs + n_rabbits;
                cost = (n_horses * horse) + (n_pigs * pig) + (n_rabbits * rabbit);
                if(n_animals == 100 && cost == 100.0){
                    cout << "Solution" << endl;
                    cout << "horses: " << n_horses << endl;
                    cout << "pigs: " << n_pigs << endl;
                    cout << "rabbits: " << n_rabbits << endl;
                }
            }
        }
    }
}