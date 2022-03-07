void insertionSort (int tablica[]){ //poczatek algorytmu
    for (int i = 1; i<15 ; i++){
        int tymczasowa = tablica[i]; //biore drugi element z tablicy i zapisuje go do zmiennej tymczasowa
        int j = i - 1; // Pod zmienna j jest liczba, która jest pod i - 1
        while (j>=0&&tablica[j]>tymczasowa){ //Sprawdzam czy element po lewej stronie jest wiekszy od zmiennej tymczasowa
            tablica[j+1] = tablica[j];//jezeli tak to przesuwam go w prawo o 1 miejsce
            j--;// zmienna j zmniejsza się od 1
        }
        tablica[j+1]=tymczasowa; //liczby sie przestawiaja
    }
}
main()
{

     int tablica[] = {15,10,4,64,14,8,9,3,12,53,72,95,29,33,47}; //tablica 15 elementów
     printf("Tablica przed sortowaniem: ");
     for (int i = 0; i<15;i++){
        printf("%d", tablica[i]); //pętla, która pokazuje w programie tablice
        printf(" ");
     }
     insertionSort(tablica); //Algorytm bšbelkowy
     printf("\n"); //nowa linia
     printf("Tablica po sortowaniu: ");
      for (int i = 0; i<15;i++){
        printf("%d", tablica[i]); //pętla, która pokazuje w programie tablice po sortowaniu
        printf(" ");
     }
}
