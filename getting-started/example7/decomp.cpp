#include <iostream>
using namespace std;

float GetHoursInput(){
    float hours; 
    cout << "How many hours a week will you work?" << endl; 
    cin >> hours; 
    return hours;
}

float GetSalesInput(){
    float pairs; 
    cout << "How many pairs of shoes will you sell per week" << endl; 
    cin >> pairs; 
    return pairs;
}

int CalcMethod1(){
    return 600; 
}

float CalcMethod2(size_t hours, size_t pairs){
    return (7 * hours) + (0.1 * pairs * 225);
}

float CalcMethod3(size_t pairs){ 
    return (20 * pairs) + (0.20 * pairs *225);
}

int main()
{
    float hours; 
    float pairs; 

    hours = GetHoursInput();
    pairs = GetSalesInput();
    int salary1 = CalcMethod1();
    float salary2 = CalcMethod2(hours, pairs);
    float salary3 = CalcMethod3(pairs);

    cout << "Salary 1: " << salary1 << endl;
    cout << "Salary 2: " << salary2 << endl;
    cout << "Salary 3: " << salary3 << endl;    
}