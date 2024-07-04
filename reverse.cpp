#include <iostream>
using namespace std;

int reverse(int num){
    while (num > 0){

    int reminder = num % 10;
    int quotient = num / 10;
    num = quotient;
    cout<<reminder;
    

    }
    return 0;
}

int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>> num;
    reverse(num);
    return 0;
}
