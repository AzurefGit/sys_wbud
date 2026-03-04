#include <stdio.h>
#include <stdlib.h>

float sum(float a, float b){
    return a + b;
}

int mnozenie(int a, int b, int c){
    return a*b*c;
}

void czy_dodatnia(int a){
    if(a > 0){
        printf("\nliczba dodatnia");
    }
    else{
        printf("\nliczba nie jest dodatnia");}
}

int wyswietl_tab(int tab[], int size){
    printf("\n Tablica: \n");
    for(int i = 0; i < size; i++){
        printf("%d", tab[i]);
    }
    return 0;
}

void czytaj_liczby(){
    int liczba, suma = 0;
    do{
        printf("Podaj liczbe (0 = koniec): ");
        scanf("%d", &liczba);
        suma+=liczba;
    }while(liczba != 0);
    printf("%d", suma);
}

void kalkulator(int a, int b, char znak){
    switch(znak){
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        if(b != 0){
            printf("%d", a/b);
            break;
        }else{
            printf("Pamietaj chemiku mlody, nie dziel przez 0 ty ***** ******.");
            break;
        }
    default:
        printf("sprobuj ponownie...");
        break;
    }

}

int main()
{
    int a = 10;
    float b = 3.14;
    char c = 'A';

    float suma = a + b;

    printf("%d, %.2f, %c", a, b, c);
    printf("\n Suma wartosci bez uzycia funkcji: %.2f", suma);
    printf("\n Suma wartosci z uzyciem funkcji: %.2f", sum(a, b));
    int wynik_mnoz = mnozenie(10, 10, 10);
    printf("\n Wynik mnozenia z uzyciem funkcji: %d \n", wynik_mnoz);
    //czy_dodatnia(-1);
    //int tab[5] = {1,2,3,4,5};
    //wyswietl_tab(tab, 5);
    //czytaj_liczby();
    kalkulator(5,0,'/');
    return 0;
}
