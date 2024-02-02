#include "iostream"
#include "cstdlib"
#include "ctime"
#include <limits>

using namespace std;

int main(){

    int a = numeric_limits<int>::max();
    a++;
    cout << a <<endl;
    short b = numeric_limits<short>::max();
    b++;
    cout<< b <<endl;
    long c = numeric_limits<long>::max();
    c++;
    cout<< c <<endl;
    float d = numeric_limits<float>::max();
    cout<< d <<endl;
    double e = numeric_limits<double>::max();
    cout<< e <<endl;
    

    getchar();


    return 0;   
}