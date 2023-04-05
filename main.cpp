// Интересное решение: printf(" %02d ", value)
#include <iostream>

int main() {
    const int SIZE = 5;
    int snake[SIZE][SIZE] = {0};

    for (int line = 0; line < SIZE; ++line) {
        for (int cell = 0; cell < SIZE; ++cell) {
            // i * N - j + N - 1;
            int oddLine = ((line * SIZE - cell + SIZE - 1) * (line % 2));
            // i * N + j;
            int evenLine = ((line * SIZE + cell) * ((line + 1) % 2));
            snake[line][cell] = oddLine + evenLine;
        }
    }

    // Печатаем результат ---------------------------------
    for (const auto &line : snake) {
        for (int cell : line) printf(" %02d ", cell);
        std::cout << std::endl;
    }
}
