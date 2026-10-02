
#include <stdio.h>
#include <string.h>

int main (void){

    int magicSquareSize;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &magicSquareSize);

    int magicSquare[magicSquareSize][magicSquareSize];
    memset(magicSquare, 0, sizeof(magicSquare));

    int posY = magicSquareSize / 2;
    int posX = 0;
    magicSquare[posX][posY] = 1;
    
    int prevX = posX, prevY = posY;
    for(int i = 2; i <= magicSquareSize * magicSquareSize; i++){
        posX -= 1;
        posY += 1;
        if (posX < 0){
            posX = magicSquareSize -1;
        }
        if (posY > magicSquareSize - 1){
            posY = 0;
        }
        if (magicSquare[posX][posY] != 0){
            posX = prevX +1;
            posY = prevY;
            if (posX > magicSquareSize - 1){
                posX = 0;
            }
           
        }
        magicSquare[posX][posY] = i;
        prevX = posX;
        prevY = posY;
    }

    for(int i = 0; i < magicSquareSize; i++){
        for(int j = 0; j < magicSquareSize; j++){
            printf("%5d ", magicSquare[i][j]);
        }
        printf("\n");
    }

    return 0;
}