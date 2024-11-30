// Domogma, Peter Bob
#include <iostream>
//using namespace std;


int sum_num(int a, int b);
int subtract_num(int a, int b);
int multiply_num(int a, int b);
int divide_num(int a, int b);

int main(void) {
    int x, y;
    std::cout << "Enter your first number: ";
    std::cin >> x;

    std::cout << "Enter your second number: ";
    std::cin >> y;

    int opt;
    std::cout << "Enter your operator: ";
    std::cin >> opt;
    if (opt == 1) {
        std::cout << "Sum: " << sum_num(x, y) << "\n";
    } else if (opt == 2) {
        std::cout << "Difference: " << subtract_num(x,  y) << "\n";
    } else if (opt == 3) {
        std::cout << "Multiply: " << multiply_num(x,  y) << "\n";  
    } else if (opt == 4) {
        std::cout << "Divide: " << divide_num(x, y) << "\n";
    }
}
int sum_num(int a, int b) {
    return a + b;
}

int subtract_num(int a, int b) {
    return a - b;
}

int multiply_num(int a, int b) {
    return a * b;
}

int divide_num(int a, int b) {
    return a / b;
}
