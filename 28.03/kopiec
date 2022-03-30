#include <stdio.h>
#include <stdlib.h>
int size = 0;  //Definiuję zmienną globalną widoczną z każdego miejsca w programie i przypisuję jej wartość 0

void change(int *x , int *y){
int temp = *y; //Przypisuję do zmiennej temp, wartości ze zmiennej "*y"
*y = *x; //Przypisuję do zmiennej *y, wartości ze zmiennej "*x"
*x = temp; //Przypisuję do zmiennej *x, wartości ze zmiennej "temp"
}

void heapify(int tab[], int size,int i){ //"Size" to wielkość kopca, "i" to indeks w tablicy
    if (size == 1){ //Wielkość tablicy nie równa się 1
        printf(tab[size]); // Jeżeli tak to wypisuję to w konsoli
    }
    else {
    int max = i; //Przypisuję do zmiennej max, wartości ze zmiennej "i" (Zakładam, że obecny element jest największy)
    int lD = 2 * i + 1; //Przypisuję do zmiennej lD, wartości ze zmiennej "i", które sś pomnożone przez 2, a następnie dodana jest 1 (Wyliczam indeks lewego dziecka)
    int pD = 2 * i + 2; //Przypisuję do zmiennej pD, wartości ze zmiennej "i", które są pomnożone przez 2, a następnie dodana jest 2 (Wyliczam indeks prawego dziecka)
if (lD < size && tab[lD] > tab[max]) //Jeżeli indeks lewego dziecka jest mniejszy od wielkoœci kopca (sprawdzam czy nie wychodzi poza tablicę)
                                     //oraz wartości lewego dziecka jest większa od wartoœci obecnie (max) największego dziecka
      max = lD; //Przypisuję do zmiennej max, wartości ze zmiennej "lD" (Zmieniam "max" na wartość lewego dziecka)
    if (pD < size && tab[pD] > tab[max]) //Jeżeli indeks prawego dziecka jest mniejszy od wielkości kopca (Sprawdzam czy nie wychodzi poza tablice)
                                         //oraz wartość prawego dziecka jest większa od wartoœci obecnie (max) największego dziecka
      max = pD; //Przypisuję do zmiennej max, wartości ze zmiennej "pD" (Zmieniam "max" na wartość prawego dziecka)

      if (max != i) //Jeżli "max" jest różny niż "i" (Zostało znalezione większe dziecko)
    {
      change(&tab[i], &tab[max]); //Zmieniam miejscami wartości z indeksem "i" oraz wartości z indeksem "max*"
    heapify(tab, size, max); //Wywołuję rekurencyjnie funkcję heapify(tab, size, max)
    }
}
    }

    void insert(int tab[], int newValue){ //To nowa wartość dodawana do kopca
 if (size == 0){ //Jeżli tablica jest pusta
    tab[0] = newValue; //Przypisuję do tablicy o indeksie 0, wartoœci ze zmiennej "newValue"
    size += 1; //Powiększam rozmiar (size) o 1
  }
  else
  {
    tab[size] = newValue; //Przypisuję do tablicy o indeksie size, wartości ze zmiennej "newValue"
    size += 1; //Powiększam rozmiar (size) o 1
    for (int i = size / 2 - 1; i >= 0; i--) //Gdzie "i" to indeks rodzica
    {
     heapify(tab, size, i); //Wykonuję rekurencyjnie heapify(tab, size, i)
    }
  }

}

void deleteRoot(int tab[], int deleteNum)
{
  int i;
  change(&tab[i], &tab[size - 1]); //Wstawiam ostatni elementu w miejsce korzenia korzystając change()
  size -= 1; //Zmniejszam rozmiar (size) o 1
    heapify(tab, size, i); //Wywołuję heapify(tab, size, i)

}

int main()
{
   int tab[10]; //Definiuję rozmiar tablicy

  insert(tab, 49); //W kolejnych 10 przypadkach dodaję liczby do tablicy
  insert(tab, 1);
  insert(tab, 3);
  insert(tab, 99);
  insert(tab, 5);
  insert(tab, 6);
  insert(tab, 66);
  insert(tab, 9);
  insert(tab, 91);
  insert(tab, 19);
  insert(tab, 5555);

  printf("Pierwszy kopiec: ");
  for (int i = 0; i < size; i++){
    printf("%d ", tab[i]); //Wypisuję liczby
  }
  printf("\n");
  printf("Drugi kopiec: ");
  deleteRoot(tab,5555); //Usuwam liczbę 5555
  for (int i = 0; i < size; i++){
    printf("%d ", tab[i]); //Wypisuję liczby
  }
}
