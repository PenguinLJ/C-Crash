#include "bits/stdc++.h"

using namespace std;

void increase_salary(double& origin){
    origin *= 1.5;
}



int main(){

    double salary = 5733.33;
    increase_salary(salary);
    cout<< left << setprecision(15)<< salary <<endl;

    getchar();
    getchar();

    return 0;   
}