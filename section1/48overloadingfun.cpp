#include "bits/stdc++.h"

using namespace std;

void greet(string firstname){
    cout<<"Hello, " << firstname <<endl;
}

void greet(string firstname, string lastname){
    cout<<"Hello, " << firstname <<" "<<lastname<<endl;
}

int main(){
    
    greet("Penguin");
    greet("Penguin","Lv");

    getchar();
    getchar();

    return 0;   
}

//函数重载要遵守函数签名的规则 ：函数名+（参数数量和类型） 满足参数数量和类型不同即可实现函数重载。