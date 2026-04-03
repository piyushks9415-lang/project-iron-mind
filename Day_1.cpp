// Programming Thinking ---> Programming is a problem solving not just syntax.

// Algorithm ---> step by step process to solve a problem via programming
        //    ex --> Add two numbers -> Input a and b > Process -- Add them > Output -- Sum

/*
#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<< "Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<< "The sum is: "<<a+b;

    return 0;
}
*/

// Challenge...

#include <iostream>
using namespace std;
int main(){
    int shopStatus;
    cout<<"Enter the shop status(0/1): "<<endl;
    cin >> shopStatus;

    if (shopStatus==1)
    {
        cout<<"The Shop is Open.";
    }else if(shopStatus==0)
    {
        cout<< "The shop is Closed.";
    }else{
        cout<<"Invalid Choice! Please try again.";
    }

    return 0;
}

// Challenge Completed!...
