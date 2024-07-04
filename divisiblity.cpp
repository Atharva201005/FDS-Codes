#include <iostream>
using namespace std;

void divisible(int num){
    if ((num%3==0)&&(num%5==0)){
        cout<<"The number"<<num<<"is divisible"<<endl;
    }
    else{
        cout<<"the number is not divisible";
    }
}


int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    divisible(num);
    
    return 0;
    }

