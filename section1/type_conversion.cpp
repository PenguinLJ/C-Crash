#include "bits/stdc++.h"

using namespace std;

int main(){

    int a = 10;
    int b = 3;
    double result  = static_cast<double>(a) / b; //使用该方法比 (double)更安全
    
    cout<< fixed<< setprecision(10)<< result <<endl;

    getchar();


    return 0;   
}