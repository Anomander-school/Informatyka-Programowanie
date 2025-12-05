#include <stdio.h>
 
int main() {
    int N;
    printf("Podaj liczbe N: ");
    if (scanf("%d", &N) != 1 || N < 2) {
        printf("Niepoprawna liczba N\n");
        return 1;
    }
 
    printf("Liczby parzyste od 2 do %d:\n", N);
    int i = 2;
    while (i <= N) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
 
    return 0;
}
