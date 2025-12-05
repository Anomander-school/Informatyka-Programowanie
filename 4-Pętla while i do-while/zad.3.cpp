#include <stdio.h>
 
int main() {
    int number;
    char ch;
    do {
        printf("Podaj liczbe: ");
        if (scanf("%d", &number) != 1) {
            printf("Niepoprawna liczba\n");
            // ewentualnie wyczyść bufor
            return 1;
        }
        printf("Wprowadziles liczbe: %d\n", number);
 
        printf("Czy chcesz wprowadzic kolejna liczbe? (t/n): ");
        // czyścimy bufor przed czytaniem znaku
        getchar(); // usuwa końcówkę po scanf
        ch = getchar();
    } while (ch == 't' || ch == 'T');
 
    printf("Dziekuje za wprowadzenie liczb!\n");
    return 0;
}