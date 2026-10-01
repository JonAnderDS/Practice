#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void)
{
    char mapa[N][N];
    int x = 0, y = 0;
    char letra = 'A';

    // 0=arriba, 1=abajo, 2=izquierda, 3=derecha
    const int dx[] = {-1,  1,  0, 0};
    const int dy[] = { 0,  0, -1, 1};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mapa[i][j] = '.';
        }
    }

    srand((unsigned) time(NULL));
    mapa[x][y] = letra;

    while (letra < 'Z') {
        int posibles_movimientos = 0;
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N && mapa[nx][ny] == '.') {
                posibles_movimientos++;
            }
        }

        if (posibles_movimientos == 0) {
            break;
        }

        while (1) {
            int dir = rand() % 4;
            int nuevo_x = x + dx[dir];
            int nuevo_y = y + dy[dir];

            if (nuevo_x >= 0 && nuevo_x < N && nuevo_y >= 0 && nuevo_y < N && mapa[nuevo_x][nuevo_y] == '.') {
                x = nuevo_x;
                y = nuevo_y;
                letra++;
                mapa[x][y] = letra;
                break; 
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }

    return 0;
}