main()
{
     void selectionSort (int tablica[]){         //w tej linii znajduj� si� pocz�tek funkcji
         for (int i = 0; i<10 ; i++){            //Zaczynam od 0 indeksu
                int min = i;                     //Pod zmienn� 'min' daj� pierwszy element
            for (int j = i+1; j<11 ; j++){       //Tutaj zaczynam od 1 indeksu
                if (tablica[min]>tablica[j]){    //Sprawdzam, kt�ry indeks jest wi�kszy
                    min = j;                     //Je�eli tablica[min] jest wieksza to 'j' staje sie nowa min
                }                                //W tej linii ko�czy si� instrukcja if
            }                                    //W tej linii ko�czy si� p�tla j
            int tymczasowa = tablica[i];         //Zmienna tymczasowa przyjmuje wartosc z tablicy[i]
            tablica[i]=tablica[min];             //tablica[i] przyjmuje wartosc tablicy[min]
            tablica[min]=tymczasowa;             //tablica[min] przyjmuje wartosc tymczasowa
         }                                       //W tej linii ko�czy si� p�tla i
     }                                           //W tej linii znajduj� si� zako�czenie funckji
     int tablica[] = {2,1,2,0,2,8,6,9,1,5,3};    //W tej linii jest utworzona tablica z 11 element�w (PESEL)
     selectionSort(tablica);                     //W tej linii wykorzystuj� funckj� selectionSort
      for (int i = 0; i<11;i++){                 //W tej linii zaczynam p�tle by wypisa� elementy od najmniejszego do najwi�kszego
        printf("%d", tablica[i]);
     }                                           //Zako�czenie p�tli
}                                                //Zako�czenie programu
