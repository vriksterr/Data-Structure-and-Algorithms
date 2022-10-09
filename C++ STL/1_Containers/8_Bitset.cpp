/*  
    **********
    * Bitset *
    **********
    -Stores either 0 or 1 only.

    int -> 16 bit
    char -> 8 bit
    bit -> 1 to max anything you want to set
*/

#include<bitset>
#include<iostream>
using namespace std;


int main(){

bitset<5> bt;

//all
cout<<bt.all();     //returns a true or a false if all the bits are not same for eg if all are 0000 or 11111 then true and if it is 101111 or 000001 then it is false

//any
cout<<bt.any();     //if any bit is 1 it will print a true if all are 0 and there is no one then it is going to be false

//none
cout<<bt.none();    //there is even a single 1 it will output false all need to be 0

//count
cout<<bt.count();   //prints the number of 1 in the bit for eg 1001 will output 2 as there are 2 1

//flip
cout<<bt.flip(2);   //it flips the bit at that position for eg 10100 will become 10000

//set
bt.set();           //the entire bt will fill up with 11111111 no matter what was stored here 
bt.set(2);          //will set the second positon at 1
bt.set(2,0);        //will set the second position as 0

//reset
bt.reset();         //turn all indexes to 0
bt.reset(2);        //turn the 2nd index to 0

//size
bt.size();

//test
bt.test(1);         //checks if the bet at position 1 is set to 1 or not
                    //returns a bool value
}