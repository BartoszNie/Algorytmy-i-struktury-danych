#include <stdio.h>
#define INFINITY 9999
#define MAX 10

void Dijkstra(int Graph[MAX][MAX], int n, int start);

void Dijkstra(int Graph[MAX][MAX], int n, int start) {
  int cost[MAX][MAX], distance[MAX], pred[MAX];
  int visited[MAX], count, mindistance, nextnode, i, j;
  // cost[MAX][MAX] - Macierz kosztów
  // distance[MAX] - Dystans jaki jest pomiedzy sasiednimi wierzcholkami
  // pred[MAX] - Poprzedni wierzcholek
  // visited[MAX] - odwiedzony wierzcholek

  // Utworzenie macierzy kosztów
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (Graph[i][j] == 0)
        cost[i][j] = INFINITY; // Wierzcholki, ktore nie sa startowym maja przypisana wartosc nieskonczonosc
      else
        cost[i][j] = Graph[i][j]; // Wierzcholek startowy

  // Rozpoczecie programu od wierzcholka startowego
  for (i = 0; i < n; i++) {
    distance[i] = cost[start][i];
    pred[i] = start;
    visited[i] = 0;
  }

  distance[start] = 0;
  visited[start] = 1;
  count = 1;

  while (count < n - 1) { // Dopoki count jest wieksze od n-1 to...
    mindistance = INFINITY;

    for (i = 0; i < n; i++) // Sprawdza czy nastepny wierzcholek nie byl odwiedzony i czy jest najblizej
      if (distance[i] < mindistance && !visited[i]) {
        mindistance = distance[i];
        nextnode = i;
      }

    visited[nextnode] = 1;
    for (i = 0; i < n; i++)
      if (!visited[i]) // Sprawdza inne mozliwosci z nieodwiedzonymi wierzcholkami
        if (mindistance + cost[nextnode][i] < distance[i]) {
          distance[i] = mindistance + cost[nextnode][i];
          pred[i] = nextnode; // Gdyby sie okazala lepsza droga to zostaje wybrana wlasnie ona
        }
    count++;
  }

  // Drukowanie dystansu
  for (i = 0; i < n; i++)
    if (i != start) {
      printf("\nDistance from source to %d: %d", i, distance[i]);
    }
}
int main() {
  int Graph[MAX][MAX], i, j, n, u;
  n = 5;
  // Utworzenie grafow
  Graph[0][0] = 0;
  Graph[0][1] = 6;
  Graph[0][2] = 0;
  Graph[0][3] = 1;
  Graph[0][4] = 0;

  Graph[1][0] = 6;
  Graph[1][1] = 0;
  Graph[1][2] = 5;
  Graph[1][3] = 2;
  Graph[1][4] = 2;

  Graph[2][0] = 0;
  Graph[2][1] = 5;
  Graph[2][2] = 0;
  Graph[2][3] = 0;
  Graph[2][4] = 5;

  Graph[3][0] = 1;
  Graph[3][1] = 2;
  Graph[3][2] = 0;
  Graph[3][3] = 0;
  Graph[3][4] = 1;

  Graph[4][0] = 0;
  Graph[4][1] = 2;
  Graph[4][2] = 5;
  Graph[4][3] = 1;
  Graph[4][4] = 0;


  u = 0; // start
  Dijkstra(Graph, n, u);

  return 0;
}
