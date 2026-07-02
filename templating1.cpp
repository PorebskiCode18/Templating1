#include <iostream>

using namespace std;

template <typename T,typename U>

T max_two(T x, U y){
    if (x >= y){
        return x;
    }else{
        return y;
    }
}

template <typename T, typename U, typename S>
T max_three(T x, U y , S z){
    if (x >= y && x >= z){
        return x;
    }else{
        if (y>=z){
            return y;
        }else{
            return z;
        }
    }
}
template <typename T>
void MYswap(T& x, T& y){ //name swap is ambiguous
    T Temp = x;
    x = y;
    y = Temp;
}

int main(){
    cout << max_two(5,4.5) << endl;
    cout << max_three(5.5,6.5,6) << endl;
    int x = 6;
    int y = 8;
    cout << x << " " << y << endl;
    MYswap(x,y);
    cout << x << " " << y << endl;

    return 0;
}
