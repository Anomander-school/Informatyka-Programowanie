#include <stdio.h>
 
int main() {
    int N;
    printf("Podaj liczbe N: ");
    if (scanf("%d", &N) != 1 || N < 1) {
        printf("Niepoprawna liczba N\n");
        return 1;
    }
 
    long long suma = 0;
    int i = 1;
    while (i <= N) {
        suma += i;
        i++;
    }
 
    printf("Suma liczb naturalnych od 1 do %d wynosi: %lld\n", N, suma);
    return 0;
}
