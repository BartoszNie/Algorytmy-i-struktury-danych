 void bubbleSort (int tablica[]){
         for (int i = 0; i<14 ; i++){
            for (int j = 0; j<14-i ; j++){
                if (tablica[j]>tablica[j+1]){ //biorê mniejszy element tablicy i sprawdzam czy jest wiêkszy od nastêpnego elementu
                    int tymczasowa = tablica[j];
                    tablica[j]=tablica[j+1];   //jeœli tak...
                    tablica[j+1]=tymczasowa;   //...to elementy zamieniam miejscami
                }
            }
         }
     }

main()
{

     int tablica[] = {15,10,4,64,14,8,9,3,12,53,72,95,29,33,47}; //tablica 15 elementów
     printf("Tablica przed sortowaniem: ");
     for (int i = 0; i<15;i++){
        printf("%d", tablica[i]); //pêtla, która pokazuje w programie tablice
        printf(" ");
     }
     bubbleSort(tablica); //Algorytm b¹belkowy
     printf("\n"); //nowa linia
     printf("Tablica po sortowaniu: ");
      for (int i = 0; i<15;i++){
        printf("%d", tablica[i]); //pêtla, która pokazuje w programie tablice po sortowaniu
        printf(" ");
     }
}
