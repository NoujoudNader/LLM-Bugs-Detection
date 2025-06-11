#include <iostream>
#include <vector>

std::vector<std::vector<char>> generateSpiral(int n) {
    std::vector<std::vector<char>> spiral(n, std::vector<char>(n, '.'));

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    bool drawZero = true; // Start with '0's for the outer border

    while (top <= bottom && left <= right) {
        char currentChar = drawZero ? '0' : '.';

        // Top border (left to right)
        for (int col = left; col <= right; ++col)
            spiral[top][col] = currentChar;

        // Right border (top+1 to bottom)
        for (int row = top + 1; row <= bottom; ++row)
            spiral[row][right] = currentChar;

        // Bottom border (right-1 to left) if needed
        if (top < bottom) {
            for (int col = right - 1; col >= left; --col)
                spiral[bottom][col] = currentChar;
        }

        // Left border (bottom-1 to top+1) if needed
        if (left < right) {
            for (int row = bottom - 1; row > top; --row)
                spiral[row][left] = currentChar;
        }

        // Move inward
        top++;
        bottom--;
        left++;
        right--;

        // Alternate between '0' and '.' for the next layer
        drawZero = !drawZero;
    }

    return spiral;
}

void printSpiral(const std::vector<std::vector<char>>& spiral) {
    for (const auto& row : spiral) {
        for (char c : row) {
            std::cout << c;
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the size of the spiral: ";
    std::cin >> n;

    auto spiral = generateSpiral(n);
    printSpiral(spiral);
    return 0;
}