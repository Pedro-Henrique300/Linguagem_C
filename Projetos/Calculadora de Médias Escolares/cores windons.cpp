#include <stdio.h>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Definindo a cor do texto para vermelho
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

    printf("Este texto est� em vermelho!\n");

    // Definindo a cor do texto para branco
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("Este texto est� na cor padr�o.\n");

    return 0;
}

