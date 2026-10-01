
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main (void) 
{
    char mapa[10][10];
    int x = 0;
    int y = 0;
    char letra = 'A';
    int direccion;
    int intentos[4] = {0};
    int acabar;


    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mapa[i][j] = '.';
        }
    }

    srand ((unsigned) time(NULL));

    mapa[x][y] = letra;
    while(letra < 'Z') {
    
        direccion = rand() % 4;
        switch (direccion) {
            case 0: //arriba
                if ( (x-1) < 0) {
                    intentos[0]=1;
                    break;
                } else if (mapa[x-1][y] != '.'){
                    intentos[0]=1;
                    break;
                }
                else{
                    letra += 1;
                    x -= 1;
                    mapa[x][y] = letra;
                    memset(intentos, 0, sizeof(intentos));
                    break;
                }
            case 1: //abajo
                if ( (x+1) > 9) {
                    intentos[1]=1;
                    break;
                } else if (mapa[x+1][y] != '.'){
                    intentos[1]=1;
                    break;
                }
                else{
                    letra += 1;
                    x += 1;
                    mapa[x][y] = letra;
                    memset(intentos, 0, sizeof(intentos));
                    break;
                }

            case 2: //derecha
                if ( (y+1) > 9) {
                    intentos[2]=1;
                    break;
                } else if (mapa[x][y+1] != '.'){
                    intentos[2]=1;
                    break;
                }
                else{
                    letra += 1;
                    y += 1;
                    mapa[x][y] = letra;
                    memset(intentos, 0, sizeof(intentos));
                    break;
                }

            case 3: //izquierda
                if ( (y-1) < 0) {
                    intentos[3]=1;
                    break;
                } else if (mapa[x][y-1] != '.'){
                    intentos[3]=1;
                    break;
                }
                else{
                    letra += 1;
                    y -= 1;
                    mapa[x][y] = letra;
                    memset(intentos, 0, sizeof(intentos));
                    break;
                }
            default:
                break;
        }
        
        acabar = 0;
        for(int i=0; i<4; i++){
            if(intentos[i] == 1){
                acabar++;
            }
        }

        if(acabar == 4){
            break;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c", mapa[i][j]);
        }
        printf("\n");
    }


    return 0;
}