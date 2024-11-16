#include <stdio.h>
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

#define ALTURA 20
#define LARGURA 20

void MoveEsquerda(int *x);
void MoveDireita(int *x);
void MoveCima(int *y);
void MoveBaixo(int *y);
void ImprimeMapa(int *px, int *py);

int main() {
    int px, py;
    char ordem;
    int continua = 1;

    srand(time(0));
    px = 10;
    py = 10;

    ImprimeMapa(&px, &py);
    while (continua) {
        ordem = getchar();
       
        switch (ordem) {
            case 'a': case 'A':
                system("clear");
                MoveEsquerda(&px);
                ImprimeMapa(&px, &py);
                break;
            case 'd': case 'D':
                system("clear");
                MoveDireita(&px);
                ImprimeMapa(&px, &py);
                break;
            case 'w': case 'W':
                system("clear");
                MoveCima(&py);
                ImprimeMapa(&px, &py);
                break;
            case 's': case 'S':
                system("clear");
                MoveBaixo(&py);
                ImprimeMapa(&px, &py);
                break;
            case 'q': case 'Q':
                continua = 0;
                break;
        }

        cout << ordem << " " << px << " " << py << "\n";
    }

    return 0;
}

void CriaMapa(int *px, int *py) {
    int x, y;
    for (y = 0; y < ALTURA; y++) {
        for (x = 0; x < LARGURA; x++) {
            if ((*px == x) && (*py == y)) {
                cout << " @ ";
            } else {
                cout << " + ";
            }
        }
        printf("\n");
    }
}

void ImprimeMapa(int *px, int *py) {
    if (*px > 19) {
        *px = 19;
        CriaMapa(px, py);
        cout << "Não pode ultrapassar o tabuleiro!";
    } else if (*py > 19) {
        *py = 19;
        CriaMapa(px, py);
        cout << "Não pode ultrapassar o tabuleiro!";
    } else {
        CriaMapa(px, py);
    }
}

void MoveEsquerda(int *x) {
    (*x)--;
}

void MoveDireita(int *x) {
    (*x)++;
}

void MoveCima(int *y) {
    (*y)--;
}

void MoveBaixo(int *y) {
    (*y)++;
}