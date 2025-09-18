#include <iostream>

int perimetro(int a, int b){
    int r = a *2+ b*2;
    return r;
}

int main(){
    int a,b;
    std::cin >> a >> b;
    int p = perimetro(a,b);
    std::cout << p << std::endl;
    return 0;
}