#include <iostream>
using namespace std;


double findMax(int* arr1, int size1, int* arr2, int size2) {
    int maxVal = arr1[0];
    
    for (int i = 1; i < size1; ++i) {
        if (arr1[i] > maxVal) {
            maxVal = arr1[i];
        }
    }
    
    for (int i = 0; i < size2; ++i) {
        if (arr2[i] > maxVal) {
            maxVal = arr2[i];
        }
    }
    return maxVal;
}


double findMin(int* arr1, int size1, int* arr2, int size2) {
    int minVal = arr1[0];
    
    for (int i = 1; i < size1; ++i) {
        if (arr1[i] < minVal) {
            minVal = arr1[i];
        }
    }
    
    for (int i = 0; i < size2; ++i) {
        if (arr2[i] < minVal) {
            minVal = arr2[i];
        }
    }
    return minVal;
}


double findAvg(int* arr1, int size1, int* arr2, int size2) {
    double sum = 0;
  
    for (int i = 0; i < size1; ++i) {
        sum += arr1[i];
    }

    for (int i = 0; i < size2; ++i) {
        sum += arr2[i];
    }
    return sum / (size1 + size2); 
}


double Action(int* arr1, int size1, int* arr2, int size2, double (*func)(int*, int, int*, int)) {
    return func(arr1, size1, arr2, size2); 
}

int main() {
    const int sizeA = 5;
    int A[sizeA] = { 1, 8, 3, 4, 5 };

    const int sizeB = 5;
    int B[sizeB] = { 5, 4, -3, 2, 1 };

    int choice;
    cout << "1-max, 2 - min, 3 - avg";
    cin >> choice;

    double result = 0.0;

    switch (choice) {
    case 1:
        result = Action(A, sizeA, B, sizeB, findMax);
        cout << "max: " << result << endl;
        break;
    case 2:
        result = Action(A, sizeA, B, sizeB, findMin);
        cout << "min " << result << endl;
        break;
    case 3:
        result = Action(A, sizeA, B, sizeB, findAvg);
        cout << "avg " << result << endl;
        break;
    }
        

    return 0;
}



