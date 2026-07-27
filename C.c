// #include <stdio.h>
// #include <stdbool.h>

// #define N 5
// #define MAGIC_SUM 65

// // Function to check if all numbers 1 to N*N are present exactly once
// bool checkUniqueNumbers(int grid[N][N]) {
//     bool seen[N * N + 1] = {false};
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             int val = grid[i][j];
//             if (val < 1 || val > N * N || seen[val]) {
//                 return false;
//             }
//             seen[val] = true;
//         }
//     }
//     return true;
// }

// // Function to check if both diagonals sum to MAGIC_SUM
// bool checkDiagonals(int grid[N][N]) {
//     int sumDiag1 = 0;
//     int sumDiag2 = 0;
//     for (int i = 0; i < N; i++) {
//         sumDiag1 += grid[i][i];
//         sumDiag2 += grid[i][N - 1 - i];
//     }
//     return (sumDiag1 == MAGIC_SUM && sumDiag2 == MAGIC_SUM);
// }

// // Function to check if all rows and columns sum to MAGIC_SUM
// bool checkRowsAndCols(int grid[N][N]) {
//     for (int i = 0; i < N; i++) {
//         int rowSum = 0;
//         int colSum = 0;
//         for (int j = 0; j < N; j++) {
//             rowSum += grid[i][j];
//             colSum += grid[j][i];
//         }
//         if (rowSum != MAGIC_SUM || colSum != MAGIC_SUM) {
//             return false;
//         }
//     }
//     return true;
// }

// bool isMagicSquare(int grid[N][N]) {
//     if (!checkUniqueNumbers(grid)) return false;
//     if (!checkDiagonals(grid)) return false;
//     if (!checkRowsAndCols(grid)) return false;
    
//     return true;
// }

// int main() {
//     int square[N][N] = {
//         {17, 24, 1, 8, 15},
//         {23, 5, 7, 14, 16},
//         {4, 6, 13, 20, 22},
//         {10, 12, 19, 21, 3},
//         {11, 18, 25, 2, 9}
//     };

//     if (isMagicSquare(square)) {
//         printf("Valid magic square!\n");
//     } else {
//         printf("Not a valid magic square.\n");
//     }

//     return 0;
// }



#include <stdio.h>
#include <stdbool.h>

#define N 5
#define MAGIC_SUM 65

bool isMagicSquare(int grid[N][N]) {
    int diag1 = 0, diag2 = 0;
    bool seen[26] = {false}; // To check numbers 1-25

    for (int i = 0; i < N; i++) {
        int rowSum = 0;
        int colSum = 0;

        for (int j = 0; j < N; j++) {
            // 1. Check uniqueness and range
            int val = grid[i][j];
            if (val < 1 || val > 25 || seen[val]) return false;
            seen[val] = true;

            // 2. Add to Row and Column sums
            rowSum += grid[i][j];
            colSum += grid[j][i];
        }

        // 3. After each row/col loop, check the total
        if (rowSum != MAGIC_SUM || colSum != MAGIC_SUM) return false;

        // 4. Add to Diagonal sums
        diag1 += grid[i][i];
        diag2 += grid[i][N - 1 - i];
    }

    // 5. Final check for diagonals
    return (diag1 == MAGIC_SUM && diag2 == MAGIC_SUM);
}

int main() {
    int square[N][N] = {
        {17, 24, 1, 8, 15},
        {23, 5, 7, 14, 16},
        {4, 6, 13, 20, 22},
        {10, 12, 19, 21, 3},
        {11, 18, 25, 2, 9}
    };

    if (isMagicSquare(square)) {
        printf("Valid magic square!\n");
    } else {
        printf("Not a valid magic square.\n");
    }

    return 0;
}