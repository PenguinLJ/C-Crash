#include "bits/stdc++.h"

using namespace std;

int main(){

    int num{};
    cout<< "Please input a positive number:";
    cin>>num;
    int result{};
    if(num < 0){
        cout<<"The number is less than 0. Try again!"<<endl;
    }else if(num == 0){
        result = 1;
    }else{
        result = 1;
        for (int i = 1; i <=num; i++)
        {
            result *= i;
        }
        
    }
    cout<< "The result is: "<< result<<endl;
    
    getchar();

    return 0;   
}