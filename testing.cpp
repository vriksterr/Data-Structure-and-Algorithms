/*
    we are seeing that how the a value changes based on where it has been initialized and what stays the final value of the a at the time of execution
*/

#include<iostream>
using namespace std;

class Hello{
    public:

        int a = 5;

        Hello(int x) : a(10) {a=20;};
};

int main(){
    Hello S1(15);
    cout<<S1.a;

}