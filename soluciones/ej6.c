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
