main()
{
     void selectionSort (int tablica[]){         //w tej linii znajdujê siê pocz¹tek funkcji
         for (int i = 0; i<10 ; i++){            //Zaczynam od 0 indeksu
                int min = i;                     //Pod zmienn¹ 'min' dajê pierwszy element
            for (int j = i+1; j<11 ; j++){       //Tutaj zaczynam od 1 indeksu
                if (tablica[min]>tablica[j]){    //Sprawdzam, który indeks jest wiêkszy
                    min = j;                     //Je¿eli tablica[min] jest wieksza to 'j' staje sie nowa min
                }                                //W tej linii koñczy siê instrukcja if
            }                                    //W tej linii koñczy siê pêtla j
            int tymczasowa = tablica[i];         //Zmienna tymczasowa przyjmuje wartosc z tablicy[i]
            tablica[i]=tablica[min];             //tablica[i] przyjmuje wartosc tablicy[min]
            tablica[min]=tymczasowa;             //tablica[min] przyjmuje wartosc tymczasowa
         }                                       //W tej linii koñczy siê pêtla i
     }                                           //W tej linii znajdujê siê zakoñczenie funckji
     int tablica[] = {2,1,2,0,2,8,6,9,1,5,3};    //W tej linii jest utworzona tablica z 11 elementów (PESEL)
     selectionSort(tablica);                     //W tej linii wykorzystujê funckjê selectionSort
      for (int i = 0; i<11;i++){                 //W tej linii zaczynam pêtle by wypisaæ elementy od najmniejszego do najwiêkszego
        printf("%d", tablica[i]);
     }                                           //Zakoñczenie pêtli
}                                                //Zakoñczenie programu
