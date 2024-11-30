#include <iostream>

using namespace std;



int main() {

    float x, y, a;

    float my_ave;

    cout << "Enter the score for Exam 1: ";

    cin >> x;



    cout << "Enter the score for Exam 2 : ";

    cin >> y;



    cout << "Enter the score for Exam 3: ";

    cin >> a;



    my_ave = (x + y + a) / 3;

    cout << "Average Score: " << my_ave << endl;



    if (my_ave >= 70) {

        cout << "Result: Passed" << endl;

    } else if (my_ave <= 69) {

        cout << "Result: Failed" << endl;

    }



    return 0;

}

