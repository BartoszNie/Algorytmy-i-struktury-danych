#include <stdio.h>
#include <stdlib.h>

void insertionSort (int tablica[]){ //poczatek algorytmu
    for (int i = 1; i<10 ; i++){
        int tymczasowa = tablica[i]; //biore drugi element z tablicy i zapisuje go do zmiennej tymczasowa
        int j = i - 1; // Pod zmienna j jest liczba, która jest pod i - 1
        while (j>=0&&tablica[j]>tymczasowa){ //Sprawdzam czy element po lewej stronie jest wiekszy od zmiennej tymczasowa
            tablica[j+1] = tablica[j];//jezeli tak to przesuwam go w prawo o 1 miejsce
            j--;// zmienna j zmniejsza sie o 1
        }
        tablica[j+1]=tymczasowa; //liczby sie przestawiaja
    }
}
void binarySearch(int tablica[], int x, int Lewo, int Prawo){
    int pivot; //Zmienna "x"
    int jest=0; //Wartość zmiennej "jest" ustawiona jako 0
    do{
        pivot = (Prawo+Lewo)/2; //Zmienna "pivot" otrzymuje wartość połowy tablicy
        if (tablica[pivot] == x){ //Jeżeli tablica (o indeksie "pivot") jest równa x to...
            printf("Indeks liczby: %d", pivot); //Zostanie wydrukowany indeks szukanej liczby
            jest=1; //Wartość zmiennej "jest" ustawiona jako 1
        }
        else if(tablica[pivot]>x){ //Jeżeli tablica (o indeksie "pivot") jest większa od x to...
            Prawo = pivot-1; //To wartość końca tablicy jest zmieniona o wartość zmiennej "pivot" i odjęciu od niego 1
        }
        else if (tablica[pivot] < x){ //Jeżeli tablica (o indeksie "pivot") jest mniejszy od x to...
            Lewo = pivot+1; //To wartość początku tablicy jest zmieniona o wartość zmiennej "pivot" i dodaniu do niego 1
        }
        if (pivot == (Prawo+Lewo)/2){ //Jeżeli zmienna "pivot" jest równa wartości, która została dodana od zmiennej "Prawo" oraz "Lewo" po czym podzielona przez 2 to...
            break; ////Zatrzymanie kodu
        }
        }
        while(jest==0);//Kod się wykonuje dopóki zmienna "jest" jest równa wartości 0
        if (jest==0){ //Jeżeli zmienna "jest" jest równa wartości 0 to...
            printf("Nie ma"); //Program drukuje brak liczby szukanej
        }
    }
int main(){
    int tablica[] = {6,10,4,8,1,9,0,7,2,5}; //Tablica o 10 różnych elementach w kolejności losowej

    int x; //Zmienna "x"
    int Lewo=0; //Wartość zmiennej "Lewo" ustawiona jako 0
    int Prawo=10; //Wartość zmiennej "Prawo" ustawiona jako 10

    insertionSort(tablica); //Użycie funkcji sortowania

    for(int i=0;i<10;i++){
        printf("%d",tablica[i]); //Sprawdzenie tablicy pod wględem posortowania liczb
    }

    printf("\n");
    printf("Prosze wpisac szukany element \n");
    scanf("%d", &x); //Wpisanie liczby szukanej przez użytkownika

    binarySearch(tablica,x,Lewo,Prawo); //Użycie funkcji wyszukiwania binarnego
}
