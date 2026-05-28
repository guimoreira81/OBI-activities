#define screenSizeX 20
#define screenSizeY 20
#include <stdio.h>


char screen[screenSizeX*screenSizeY];

void fill(char charactere){
    for (int i = 0; i<screenSizeX*screenSizeY; i++){
        screen[i] = charactere;
    }
}

void drawPixel(char charactere, float positionX, float positionY){
    int x = (int)positionX, y = (int)positionY;
    if (x >= 0 && x < screenSizeX && y >= 0 && y < screenSizeY){
        screen[screenSizeX*y+x] = charactere;
    }
}

void refresh(){
    printf("\033[2J\033[H");
    for (int y = 0; y<screenSizeY; y++){
        for (int x = 0; x<screenSizeX; x++){
            printf("%c", screen[y*screenSizeY+x]);
        }
        printf("\n");
    }
}

void start(){
    while (1){
        fill('_');
        drawPixel('O', 0, 0);
        refresh();
    }
}

int main(){
    start();
    return 0;
}