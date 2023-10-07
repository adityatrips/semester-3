#include <stdlib.h>

#include <iostream>

using namespace std;

class Matrix {
   public:
    int rows, cols;
    int** matrix;
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        matrix = new int*[rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
        }
    }

    void setMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    void displayMatrix() {
        cout << "[ ";
        for (int i = 0; i < rows; i++) {
            cout << "[ ";
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            if (i == rows - 1) {
                cout << "] ]" << endl;
            } else {
                cout << "]" << endl;
            }
        }
    }

    Matrix addMatrix(Matrix mat2) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[i][j] = matrix[i][j] + mat2.matrix[i][j];
            }
        }
        return result;
    }

    Matrix subMatrix(Matrix mat2) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[i][j] = matrix[i][j] - mat2.matrix[i][j];
            }
        }
        return result;
    }

    Matrix multiplyMatrix(Matrix mat2) {
        Matrix result(rows, mat2.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < mat2.cols; j++) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.matrix[i][j] += matrix[i][k] * mat2.matrix[k][j];
                }
            }
        }
        return result;
    }

    Matrix transpose() {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};

int main() {
    int r1, c1, r2, c2, ch;

    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> r1 >> c1;
    Matrix mat1(r1, c1);
    cout << "Enter the elements of first matrix: ";
    mat1.setMatrix();

    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> r2 >> c2;
    Matrix mat2(r2, c2);
    cout << "Enter the elements of second matrix: ";
    mat2.setMatrix();

    Matrix addMat(r1, c1), subMat(r1, c1), mulMat(r1, c2), transposedMat(c1, r1);

    while (true) {
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Transpose" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your choice" << endl
             << ": ";
        cin >> ch;

        switch (ch) {
            case 1:
                if (!(mat1.cols == mat2.cols && mat1.rows == mat2.rows)) {
                    cout << "Matrices cannot be added!";
                    return 0;
                }
                addMat = mat1.addMatrix(mat2);
                cout << "Resultant matrix: " << endl;
                addMat.displayMatrix();
                break;
            case 2:
                if (!(mat1.cols == mat2.cols && mat1.rows == mat2.rows)) {
                    cout << "Matrices cannot be subtracted!";
                    return 0;
                }
                subMat = mat1.subMatrix(mat2);
                cout << "Resultant matrix: " << endl;
                subMat.displayMatrix();
                break;
            case 3:
                if (c1 != r2) {
                    cout << "Matrices cannot be multiplied!";
                    return 0;
                }

                mulMat = mat1.multiplyMatrix(mat2);
                cout << "Resultant matrix: " << endl;
                mulMat.displayMatrix();
                break;
            case 4:
                transposedMat = mat1.transpose();
                cout << "Resultant matrix 1: " << endl;
                transposedMat.displayMatrix();

                transposedMat = mat2.transpose();
                cout << "Resultant matrix 2: " << endl;
                transposedMat.displayMatrix();
                break;
            case 0:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
}