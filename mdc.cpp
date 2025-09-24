#include <iostream>

/*int mdc(int a, int b){

    int maior_divisor;
    int menor;
    if (a < b){
        menor = a;
    }
    else{
        menor = b;
    }
    int i = menor;
    while (i > 1 ){
        if (a % i == 0 and b % i ==0){
            maior_divisor = i;
            break;
        }
        i-=1;
    }
    return maior_divisor;

}*/

int mdc(int a, int b){
    int menor, maior;

    if (a > b){
        menor = b;
        maior = a;
    }
    else{
        maior =b;
        menor = a;
    }
    int resto = maior % menor; 

    while (resto > 0)  {
        maior = menor;
        menor = resto;
        resto = maior % menor;
    }
    return menor;

    }
 


int main()
{
    int a, b;
    std::cout << "Digite 2 numeros: ";
    std::cin >> a >> b;
    int maior_divisor = mdc(a, b);
    std::cout << "O maior divisor entre " << a << " e " << b << " é: " << maior_divisor << std::endl;
    return 0;
}
