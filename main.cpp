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
void encrypt(T& text, int key){
    int lens=text.length();
    key=key%26;
    int position=0;
    for (int i=0; i<lens;  i++){
        if (text[i]!=' '){
            position=int(text[i])+key;
            if (position>122){
                text[i]=position-122+96;
            } else if (position>'Z' and position-key<'Z'){
                text[i]=position-90+64;
            } else{
                text[i]=position;
            }

        }
    }
}



//Question 3
template <typename T>
double sum3(T arr3){
    double sum=0;
    for (int i=0; i<7; i++){
        sum+=arr3[i];
    }
    return sum;
}




//Question 4
template <typename T>
double check4(T arr4, double num4){
    for (int i=0; i<10; i++){
        if (arr4[i]==num4){
            return true;
        }
    }
    return false;
}





//Question 5
template <typename T>
void pow2(T& arr5){
    for (int i=0; i<5; i++){
        arr5[i]=pow(arr5[i], 2);
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
    string text;
    int key;
    getline(cin, text);
    cin>>key;
    encrypt(text, key);
    cout<<text;




    //Question 3
    double arr3[7];
    for (int i=0; i<7; i++){
        cin>>arr3[i];
    }
    cout<<sum3(arr3);



    

    //Question 4
    double Arr4[10];
    for (int i=0; i<10; i++){
        cin>>Arr4[i];
    }
    double num4;
    cin>>num4;
    if(check4(Arr4, num4)){
        cout<<"The number "<<num4<<" is in an array"<<endl;
    } else{
        cout<<"The number "<<num4<<" is not in an array"<<endl;
    }




    //Question 5
    double arr5[5];
    for (int i=0; i<5; i++){
        cin>>arr5[i];
    }
    pow2(arr5);
    for (int i=0; i<4; i++){
        cout<<arr5[i]<<" ";
    }
    cout<<arr5[4]<<endl;










    return 0;
}
