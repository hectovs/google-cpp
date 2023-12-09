#include <iostream>

using namespace std;

int gcd(int arg1, int arg2)
{
    int a; 
    int b; 
    int r=1; 

    if(arg1 > arg2){
        a = arg1;
        b = arg2; 
    } else if(arg2 > arg1 ) { 
        a = arg2; 
        b = arg1; 
    } else if(arg1 == arg2) {
        return arg1;
    }

    while( r!= 0 ){
        r = a % b; 
        a = b;
        b = r;

    }

    return a;

}

int main()
{
    int arg1, arg2;
    cout << "enter two integers ";
    if(!(cin >> arg1 >> arg2 )){
        cout << "Integers only please: " << endl; 
    } else { 
        cout << "gcd("<< arg1 << "," << arg2 <<") "<< gcd(arg1,arg2) <<endl; 
    }
}

