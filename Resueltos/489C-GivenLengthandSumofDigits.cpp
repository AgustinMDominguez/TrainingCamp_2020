
/* You have a positive integer m and a non-negative integer s. 
Your task is to find the smallest and the largest of the numbers that have 
length m and sum of digits s. 

The required numbers should be non-negative integers written 
in the decimal base without leading zeroes.

    Input:
The single line of the input contains a pair of integers:
    m, s (1 <= m <= 100, 0 <= s <= 900) The length and the sum of the digits of the required numbers.

    Output:
In the output print the pair of the required non-negative integer numbers — 
first the minimum possible number, then the maximum possible number. 
If no numbers satisfying conditions required exist, 
print the pair of numbers "-1 -1" (without the quotes).

Examples:   Input:2 15 Output:69 96
            Input:3 0  Output:-1 -1
*/


#include <iostream>
using namespace std;

int main() {
    int s;
    int m;
    cin >> m >> s;
    // Casos particulares:
    if (s==0) {
        if (m==1) { cout << "0 " << 0 << "\n"; }
        else { cout << "-1 " <<-1 << "\n"; }
    } else if (m*9 < s) { cout << "-1 " << -1 << "\n"; }
    else {
        // Caso General:
        /* Calculo del minimo:: */
        int ind;
        int digits[m];
        int auxs = s-1;
        digits[0] = 1;
        for(ind=1; ind<m; ind++)digits[ind]=0; 
        
        while(auxs>0) {
            ind--;
            digits[ind] = 9;
            auxs -= 9;
        }

        if (auxs < 0) {
            /* Si ind==0, significa que se modificó el 1 inicial del arreglo, por tanto, 
            hay que sumarle 10 a auxs (pues inicialmente se le restó 1 por el 1 inicial)
            Si ind != 0, se suma unicamente 9 para obtener el último valor de auxs 
            antes de que se vuelva negativo */
            digits[ind] = ind==0 ? auxs+10 : auxs+9; 
        }
        for(int i=0; i<m; i++)cout << digits[i];
        cout << " ";

        /* Calculo del maximo:: */
        for(ind=1; ind<m; ind++)digits[ind]=0;
        auxs = s;
        ind = 0;
        while(auxs>0){
            digits[ind] = 9;
            ind++;
            auxs -= 9;
        }
        if (auxs<0)digits[ind-1]=auxs+9;
        for(ind=0; ind<m; ind++)cout << digits[ind];
        cout << "\n";
    }
}