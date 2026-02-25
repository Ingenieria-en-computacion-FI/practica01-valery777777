#include <stdio.h>
#define pf printf

int main(){
    int m[2][4];
    
    for (int i = 0; i < 2; i++){
        for (int j=0; j <4; j++){
            pf("La dirección de m[%i][%i] es: %p\n", i,j, &m[i][j]);
        }
    }
    
}
//1. Imprime direcciones de todos los elementos.
//2. Determina si almacenamiento es por filas o columnas.
//Es por filas, primero se lamacena m[0][0], luego m[0][1], m[0][2], m[0][3], m[1][0], m[1][2] y finalmente
//3. Deduce fórmula de dirección de m[i][j].
