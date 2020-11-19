/*
NOTAS: 
    - Si T es impar, la unica forma de llegar es por T+1 con el ultimo paso siendo obviamente -1.
Entonces si T es impar, la menor cantidad de pasos para llegar a T a partir de N es un paso mas que
la menor cantidad de pasos para llegar a T+1.
Por lo tanto podemos considerar solo los casos donde T es par.

    - Si estas encima del Target (T), la opcion que conviene es -1. 
Entonces todo nodo N por encima de T tiene efectivamente el costo N-T.

ASUMIENDO T PAR:    
    - Si (N<T) pero (2N>T), entonces conviene hacer N-T/2 pasos hacia abajo ANTES
    de hacer un salto x2, ya que hacer (-1)-->(x2) es identico a hacer (x2)-->(-1)-->(-1)
    solo que cuesta un paso menos.

    - Esto se generaliza con la cantidad de productos x2 que hagan falta


CODIGO:
    n<<1 es equivalente a n*2
    1<<n es equivalente a 2^n
*/

#include <iostream>
using namespace std;

void salto(int& n,const int& m, int& steps) {
    int aux;
    int count = 1;
    int power = n<<1;
    while(power<m) {
        count++;
        power = power<<1;
    }
    if(power-m<(1<<count)) {
        steps++;
        n = n<<1;
        //std::cout << "1 up: n="<< n << std::endl;  //Descomentar para que explique los pasos
    } else {
        aux = (power-m)/(1<<count);
        steps += aux + 1;
        n = (n-aux)<<1;
        //std::cout << "> Down " << aux << " and 1 up: n=" << n << std::endl; //Descomentar para que explique los pasos
    }
}

int main(){
    int n,m, steps, aux, count;
    std::cin >> n >> m;
    steps = 0;
    if(n>m){
        std::cout << n-m << "\n";
    } else {
        if(m%2!=0){ 
            steps++;
            m++; 
        }
        while(n!=m)salto(n,m,steps);
        std::cout << steps << "\n";
}

/*
Vasya has found a strange device. On the front panel there's screen a red button a blue button
and a display showing some positive integer. After clicking the red button, 
device multiplies the displayed number by two. After clicking the blue button, 
device subtracts one from the number on the display. 
If at some point the number stops being positive, the device breaks down. 
The display can show arbitrarily large numbers. 
Initially, the display shows number n.

Bob wants to get number m on the display. 
What minimum number of clicks he has to make in order to achieve this result?

    Input:
The first and the only line of the input contains two distinct integers 
    n and m (1 <= n, m <= 104), separated by a space.

    Output:
Print the minimum number of times one needs to push the button required to get 
the number m out of number n.
*/