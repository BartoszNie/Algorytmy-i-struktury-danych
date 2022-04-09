int top = -1; //Zmienna globalna "top" ustawiona na -1
int *queue; //Ustawienie wskaznika globalnego "queue"

void enqueue(int element){ //Funckja umozliwiajaca dodanie elementu do kolejki
    top++; //Postinkrementacja zmiennej "top"
    queue[top] = element; //Dodawanie elementów na koniec kolejki
}
void dequeue(int size){ //Funckja umozliwiajaca usuniecie elementu do kolejki
    for(int i=1; i<size;i++){
        queue[i-1] = queue[i]; //Usuwanie pierwszego elementu z kolejki
    }
    top--;//Postdekrementacja zmiennej "top"
}
int main()
{
    int size = 6;
    queue = (int *) malloc(sizeof(int) * size); //Rezerwowanie pamieci dla kolejki

    for (int i=0;i<size;i++){
        enqueue(i+1); //Dodawanie wartosci do kolejki (i+1)
    }
    printf("Kolejka po dodaniu 6 wartosci typu int: ");
    printf("\n");
    for (int i=0;i<top+1;i++){
        printf("kolejka[%d]: %d \n", i, queue[i]);
    }
    dequeue(size); //Usuniecie wartoœci z kolejki

    printf("Kolejka po usunieciu jednego elementu: ");
    printf("\n");
    for (int i=0;i<top+1;i++){
        printf("kolejka[%d]: %d \n", i, queue[i]);
    }
}
