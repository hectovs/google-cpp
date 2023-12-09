#include <iostream>
using namespace std;

// how many ways can you arrange 6 different books on a shelf
//1
//2
//3
//4
//5
//6
// if you have book 1 in 0 
// book 2 can be in 1,2,3,4,5



int main()
{

    int count = 0; 
    for(int pos_book1=0; pos_book1<6; ++pos_book1)
        for(int pos_book2=0; pos_book2<6; ++pos_book2)
            if(pos_book1 != pos_book2) //checks books aren't in same position
            for(int pos_book3=0; pos_book3<6; ++pos_book3)
                if(pos_book1 != pos_book3 && pos_book2 != pos_book3)  //checks books aren't in same position
                for(int pos_book4=0; pos_book4<6; ++pos_book4)
                    if(pos_book1 != pos_book4 && pos_book2 != pos_book4 && pos_book3 != pos_book4) //checks books aren't in same position
                    for(int pos_book5=0; pos_book5<6; ++pos_book5)
                        if(pos_book1 != pos_book5 && pos_book2 != pos_book5 && pos_book3 != pos_book5 && pos_book4 != pos_book5) //checks books aren't in same position
                        for(int pos_book6=0; pos_book6<6; ++pos_book6){
                            if(pos_book1 != pos_book6 && pos_book2 != pos_book6 && pos_book3 != pos_book6 && pos_book4 != pos_book6 && pos_book5 != pos_book6){
                                count++;//finally if none of the books are in the same position check this
                            }
                        }

    cout << count << endl; 
    
}