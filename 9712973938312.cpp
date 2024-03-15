#include <iostream>

int main() {
    const int SIZE = 5; 
    int arr[SIZE] = { 5, 2, 8, 1, 9 };

    int sum = 0;

    
    for (int i = 0; i < SIZE; ++i) {
        sum += arr[i];
    }

   
    double average = static_cast<double>(sum) / SIZE;

   
    std::cout << "Average value of array elements:: " << average << std::endl;

    return 0;
}
