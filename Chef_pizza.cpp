//chef pizza question, codeforce contest 142

#include <iostream>


int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int X;
        std::cin >> X;
        int a = 0;
        for (int i = 1; i <= X;) {
            int a = i;
            i *= 2;
        }
        int smallerPieces = 2 * (X - a);
        std::cout << smallerPieces << std::endl;
    }
    return 0;
}
