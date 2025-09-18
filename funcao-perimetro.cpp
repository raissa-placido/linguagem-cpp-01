#include <iostream>

long long perimetro(int a, int b){
    long long r = a * 2LL + b* 2LL;
    return r;
}

int main(){
    int a,b;
    std::cin >> a >> b;
    long long p = perimetro(a,b);
    std::cout << p << std::endl;
    return 0;
}