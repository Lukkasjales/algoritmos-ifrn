#include <stdio.h>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <thread>
#include <chrono>
using namespace std;

int playerX = rand() % 20, playerY = rand() % 20, fruitX = rand() % 20, fruitY = rand() % 20;

void ImprimeMapa() {
    srand(time(0));
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 20; j++) {
            if (playerX == i && playerY == j) {
                cout << " @ ";
            } else if (fruitX == i && fruitY == j) {
                cout << " # ";
            } else {
                cout << " + ";
            }
        }
        cout << endl;
    }
}

void movimentoAutomatico() {
    if (fruitX < playerX) ++fruitX;
    else if (fruitX > playerX) --fruitX;
    else if (fruitY > playerY) --fruitY;
    else if (fruitY < playerY) ++fruitY;
}

int main() {
    int continua = 1;
    while (continua) {
        ImprimeMapa();
        movimentoAutomatico();
        if (fruitX == playerX && fruitY == playerY) {
            continua = 0;
            ImprimeMapa();
            cout << "Comeu a fruta" << '\n';
        }
        this_thread::sleep_for(chrono::milliseconds(200));
    }

    return 0;
}
