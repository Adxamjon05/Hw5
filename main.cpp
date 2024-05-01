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


//Question 2
template <typename T>
void encrypt(T& msg, int key){
    int lens=msg.length();
    for(int i =0; i<lens; i++){
        if (int(msg[i])!=32){
            if(int(msg[i])<122 and int(msg[i])+key>122){
                msg[i]=char((int(msg[i])+key)%122+97-1);
            }
            else if (int(msg[i])<90 and int(msg[i])+key>90){
                msg[i]=char((int(msg[i])+key)%90+65-1);
            } else{
                msg[i]=char(int(msg[i])+key);
            }
        }
    }
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



    //Question 2
    string msg;
    int key;
    getline(cin, msg);
    cin>>key;
    encrypt(msg, key);
    cout<<msg<<endl;










    return 0;
}
