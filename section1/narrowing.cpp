#include "iostream"
#include "cmath"

using namespace std;

int main(){

    int number = 1'000'000;
    short other = number;
    cout<<other;

    /*
    在这个程序中，你将一个int类型的变量number的值设置为1'000'000，然后将其赋值给一个short类型的变量other。
    问题在于，short类型的范围较小，通常为-32,768到32,767（具体取决于编译器和系统）。

    在这种情况下，1'000'000 超出了short类型的表示范围，因此发生了溢出。溢出会导致结果不确定，
    因为它超出了short类型所能表示的最大正数值，导致截断。

    在你的例子中，溢出后的结果是 1'000'000 % 65536，即 1'000'000 对 65536 取余的结果，等于 16960。
    这就是为什么输出结果是16960。*/

    return 0;   
}