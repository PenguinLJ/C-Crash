#include "iostream"
#include "cmath"

using namespace std;

int main(){

    int a = 9;
    long b = 70000L;
    float c = 8.9f;
    double d = 8.99;
    char e = 'A';
    auto isValid = true;

    int f {};   //使用{}的好处：1、变量声明后不赋值默认赋为0   2、避免使用赋错误类型的值
    cout<<f;

    return 0;   
}