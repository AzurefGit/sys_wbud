#include <stdio.h>
#include <stdlib.h>

int main()
{
    int silnia (int n){

        int wynik = 1;
        for(int i=1;i<=n;i++){
            wynik = i*wynik;
        }
        return wynik;
    }

    printf("%d",silnia(5));
    return 0;
}
