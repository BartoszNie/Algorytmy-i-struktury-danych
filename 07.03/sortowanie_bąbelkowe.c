 void bubbleSort (int tablica[]){
         for (int i = 0; i<14 ; i++){
            for (int j = 0; j<14-i ; j++){
                if (tablica[j]>tablica[j+1]){ //bior� mniejszy element tablicy i sprawdzam czy jest wi�kszy od nast�pnego elementu
                    int tymczasowa = tablica[j];
                    tablica[j]=tablica[j+1];   //je�li tak...
                    tablica[j+1]=tymczasowa;   //...to elementy zamieniam miejscami
                }
            }
         }
     }

main()
{

     int tablica[] = {15,10,4,64,14,8,9,3,12,53,72,95,29,33,47}; //tablica 15 element�w
     printf("Tablica przed sortowaniem: ");
     for (int i = 0; i<15;i++){
        printf("%d", tablica[i]); //p�tla, kt�ra pokazuje w programie tablice
        printf(" ");
     }
     bubbleSort(tablica); //Algorytm b�belkowy
     printf("\n"); //nowa linia
     printf("Tablica po sortowaniu: ");
      for (int i = 0; i<15;i++){
        printf("%d", tablica[i]); //p�tla, kt�ra pokazuje w programie tablice po sortowaniu
        printf(" ");
     }
}
