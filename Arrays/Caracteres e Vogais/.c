#include <stdio.h>

int main() {
    char nome[] = "Kazys";
    int vogais = 0;
    int consoantes = 0;
    for(int i = 0; i < 5; i++) {
        if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u') {
            vogais++;
        }
        else {
            consoantes++;
        }
    }
    printf("A frase tem %d vogais e %d consoantes", vogais, consoantes);
    return 0;
}