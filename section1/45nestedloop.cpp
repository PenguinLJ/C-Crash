#include "bits/stdc++.h"

using namespace std;

int main(){

    int row {};
    cout<<"Please input the row of triangle.";
    cin>>row;
    for (int  i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    
    getchar();
    getchar();

    return 0;   
}