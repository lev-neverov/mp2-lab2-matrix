// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "tmatrix.h"
#include <ctime>
//---------------------------------------------------------------------------

void matrix_generation(TDynamicMatrix<int>& m) {
    srand(time(0) + clock());
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m.size(); ++j) {
            m[i][j] = rand() % 10;
        }
    }
}

void matrix_calculation(TDynamicMatrix<int> a, TDynamicMatrix<int> b, TDynamicMatrix<int> c) {
    int choice;
    cout << "Choose an operation :" << endl << "\t1) addition" << endl << "\t2) subtraction" << endl << "\t3) multiplication" << endl << "\t4) multiplication by a scalar" << endl;
    cout << "Press any other key to finish" << endl;
    cout << "Ur choise: ";
    cin >> choice;
    cout  << endl;
    switch (choice) {
    case 1:
        cout << "c = a + b" << endl ;
        c = a + b;
        cout << "c = " << c << endl;
        break;
    case 2:
        cout << "c = a - b" << endl ;
        c = a - b;
        cout << "c = " << c << endl;
        break;
    case 3:
        cout << "c = a * b" << endl ;
        c = a * b;
        cout << "c = " << c << endl;
        break;
    case 4:
        int scal;
        cout << "Enter scalar: ";
        cin >> scal;
        cout << scal;
        cout << "a = a * scalar" << endl;
        a = a * scal;
        cout << "a = " << a << endl;
        cout << "b = b * scalar" << endl;
        b = b * scal;
        cout << "b = " << b << endl;
        break;
    default:
        break;
    }
}


void main() {
    cout << "TESTING WORK WITH MATRIXES" << endl;
    int size, choice;
    cout << "Enter size of matrices: ";
    cin >> size;
    cout << endl;
        TDynamicMatrix<int> a(size), b(size), c(size);
        cout << "Select the test method:" << endl << "\t1. Generated matrices" << endl << "\t2. Manual input of matrix values" << endl ;
        cout << "Press any other key to finish" << endl ;
        cout << "Ur choise: ";
        cin >> choice;
        cout << endl ;

    switch (choice) {
    case 1:
        matrix_generation(a);
        cout << "Matrix a = " << endl << a << endl;
        matrix_generation(b);
        cout << "Matrix b = " << endl << b << endl;
        matrix_calculation(a, b, c);
        break;
    case 2:
        cout << "Enter matrix a" << endl;
        cin >> a;
        cout << "Matrix a = " << endl << a << endl;
        cout << "Enter matrix a" << endl;
        cin >> b;
        cout << "Matrix b = " << endl << b << endl;
        matrix_calculation(a, b, c);
        break;
    default:
        break;
    }
}

//---------------------------------------------------------------------------
