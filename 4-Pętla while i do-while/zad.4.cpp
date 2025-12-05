#include <stdio.h>
 
int main() {
    int N;
    printf("Podaj liczbe calkowita dodatnia N: ");
    if (scanf("%d", &N) != 1 || N < 1) {
        printf("Niepoprawna liczba N\n");
        return 1;
    }
 
    int count = 0;
    int i = 1;
    do {
        if (i % 2 == 0) {
            count++;
        }
        i++;
    } while (i <= N);
 
    printf("Liczba liczb parzystych od 1 do %d wynosi: %d\n", N, count);
    return 0;
}