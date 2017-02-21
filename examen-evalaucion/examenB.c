// Solución del Examen

#include <stdio.h>

// Punto 1 
#define CTE_EXA_B 20

double globalB = 3.14159;

double calcularPuntoUnoExamenB() {
    long localB = 40L;
    return (CTE_EXA_B * globalB * localB);
}

// Punto 2
double llamarPuntoDosExamenB(float f) {
    return f+f; 
}

double calcularPuntoDosExamenB(int numero) {
    return (double) numero + llamarPuntoDosExamenB(19.2f);
}

// Punto 3
int *procesarArregloExamenB(int *arreglo, int lg) {
    int n = 0;
    for (n = 0; n < lg; n++){
        arreglo[n] *= (10 + (10 * (n+1)));
    }
    return arreglo;
}

void procesarPuntoTresExamenB() {
    int n = 0;
    int arreglo[] = {1, 2, 3, 4, 5};

    printf("\nAntes:\n");

    for (n = 0; n < 5; n++) {
        printf("%d ", arreglo[n]);
    }

    int *arreglo1 = procesarArregloExamenB(arreglo, 5);

    printf("\nDespues:\n");

    for (n = 0; n < 5; n++) {
        printf("%d %d", arreglo[n], arreglo1[n]);
        printf("\n");
    }
}

// Punto 4
long calcularFibonacci(long numero) {
    if (numero == 0 || numero == 1) {
        return 1L;
    }
    return calcularFibonacci(numero-1) + calcularFibonacci(numero-2);
}

long calcularFactorial(long numero) {
    if (numero == 1) {
        return 1L;
    }
    return numero * calcularFactorial(numero - 1L);
}

// Punto 5 
double calcularConXExamenB(int x) {
    double PI = 3.14159;
    return (2 * x * PI) / 4.71;
}

void calcularDiagramaExamenB() {
    int x = 0;
    double res = 0;

    do {
        do {
            printf("Dame un entero x:");
            scanf("%d", &x);
        } while (x < 10);
        res = calcularConXExamenB(x);
    } while (res > 100 && res < 500);

    printf("res = %f\n", res);
}


// Punto 6
int main(int argc, char const *argv[]) {
    long num = 10;
    printf("%ld ", calcularPuntoUnoExamenB); // Punto 1
    printf("%ld ", calcularPuntoDosExamenB); // Punto 2

    procesarPuntoTresExamenB();
    printf("Fibonacci(%ld): %ld\n", num, calcularFibonacci(num));
    calcularDiagramaExamenB();

    return 0;
}