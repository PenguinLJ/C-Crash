#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

int main(){

    srand(time(0));

    int random_numbers[100] ={};
    for (int i = 0; i < size(random_numbers); i++)
    {
        random_numbers[i] = (rand() % 6) + 1;
    }
    
    for (int i = 0; i < size(random_numbers); i++){
        cout<< random_numbers[i] <<' ';
        if( (i+1) % 10 == 0 ){
            cout<<endl;
        }
    }

    getchar();


    return 0;   
}