#include <stdio.h>
#include <stdlib.h>

void liniowy(int tablica[], int x, int jest){
    for (int i = 0 ;i<10;i++){
        if (x==tablica[i]){ //Je�eli liczba szukana "x" jest taka sama jak liczba z tablicy (o indeksie "i") to...
            printf("Wartosc znajduje sie pod indeksem: %d", i); //Wypisuje indeks danej wartosci
            printf("\nWartosc znajduje sie pod adresem pamieci: %d", &i); //Wypisuje adres pamieci danej wartosci
            jest=1; //Wartp�� zmiennej "jest" zmieniona na 1
            break; //Zatrzymanie kodu
    }
    }

        if(jest==0){ //Je�eli zmienna "jest" ma warto�� 0 to...
            printf("Nie ma takiego elementu"); //Wypisanie o braku takiego elementu
        }
    }
int main(){
    int tablica[10]; //Definiuj� rozmiar tablicy
    int x; //Zmienna "x"
    int jest=0; //Warto�� zmiennej "jest" ustawiona jako 0
    printf("Prosze wpisac 10 wartosci calkowitoliczbowych \n");
    for (int i = 0;i<10;i++){
    scanf("%d", &tablica[i]); //P�tla umo�liwi�j�ca wpisanie 10 r�nych liczb ca�kowitych przez u�ytkownika
    }
    printf("Prosze wpisac szukany element \n");
    scanf("%d", &x); //Wpisanie liczby szukanej przez u�ytkownika
    liniowy(tablica,x,jest); //U�ycie funkcji wyszukiwania liniowego
}
