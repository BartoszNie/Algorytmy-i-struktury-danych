#include <stdio.h>
#include <stdlib.h>
int top = -1; //Zmienna globalna "top" ustawiona na -1
int *stack; //Ustawienie wskażnika globalnego "queue"

void stack_empty(int top){ //Funkcja umożliwiająca sprawdzić czy stos jest pusy, czy nie jest pusty
    if (top == -1){ //Sprawdzenie czy zmienna "top" ma wartość -1
            printf("\nStos jest pusty :( ");
    }
    else{
            printf("\nStos nie jest pusty :) ");
    }
}

void push(int element){ //Funkcja umozliwiajaca dodanie elementu na gore stosu
    top++; //Postinkrementacja zmiennej "top"
    stack[top] = element; //Przypisanie do stosu (o indeksie top), wartosci z elementu

}

void pop(){ //Funkcja umozliwiajaca usuniecie elementu ze stosu
    stack_empty(top); //Sprawdzenie zawartosci stosu
    return stack[top--]; //Zwrocenie mniejszego stosu
}

int Top(){ //Funkcja umożliwiająca sprawdzić najwyższy element w stosie
    return stack[top]; //Zwrocenie najwyzszej liczby w stosie
}


int main()
{
    stack = (int *) malloc(sizeof(int) * 6); //Rezerwowanie pamięci dla kolejki

    printf("Sprawdzenie zawartosci stosu: ");
    stack_empty(top); //Uzycie funkcji stack_empty do sprawdzenia zawartosci stosu
    printf("\n");

    for (int i = 0; i < 6; i++){
        push(i+1); //Dodawanie wartości do stosu (i+1)
    }

    printf("6 roznych wartosci typu int po dodaniu ostatnej liczby: \n");
    for (int i = 0; i < top+1; i++){
        printf("stos[%d]: %d \n", i, stack[i]); //Wypisanie stosu
    }

    printf("Stos po usunieciu 2 wartosci ze stosu: ");

    pop(); //Uzycie funkcji do usuniecia elementu ze stosu
    pop(); //Uzycie funkcji do usuniecia elementu ze stosu
    printf("\n");
    for (int i = 0 ; i < top+1 ;i++){
        printf("stos[%d]: %d \n", i, stack[i]); //Wypisanie stosu po usunieciu dwoch liczb
    }

    printf("\nNajwyzsza liczba w stosie: %d", Top()); //Uzycie funkcji Top by uzyskać liczbe na gorze stosu
}
