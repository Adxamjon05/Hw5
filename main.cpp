#include <iostream>
#include <math.h>
using namespace std;


//Question 1
template <typename T>
bool isTriangle(T side1, T side2, T side3){
    if (side1>abs(side2-side3) and side1<side2+side3){
        return true;
    }
    return false;
}



int main() {


    //Question 1
    double side1, side2, side3;
    cin>>side1>>side2>>side3;
    if (isTriangle(side1, side2, side3)){
        cout<<"Triangle can be formed with these sides"<<endl;
    } else{
        cout<<"Triangle can NOT be formed with these sides"<<endl;
    }










    return 0;
}
