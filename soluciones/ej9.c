#include <stdio.h>
#define pf printf

int main(){
    int a[5];

    pf("La direccion de a[-1] es: %p\n", &a[-1]);
    pf("La direccion de a[5] es: %p\n", &a[5]);

    return 0;
}

//Explica:
//por qué compila
//Porque C no verifica los límites del arreglo, por lo que, confía en el programador para no sobrepasarlos

//por qué es peligroso
//Porque está afuera del límite del arreglo y puede ocasionar resultados errróneos corrupción de memoria o fallos en nuestro programa.

//qué revela sobre memoria
//Que es lineal, contigua y confía mucho en el programador.
