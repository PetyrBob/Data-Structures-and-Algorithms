#include <iostreamn>
#include "filename.h"
using namespace std;

class stack {
    private:
        int top;
        int maxSize;
        int* stackArray;

    public:
        Stack(int size) {
            maxSize = size;
            stackArray = new int[maxSize];
            top = -1;
        }
    ~Stack() {
        delete[] stackArray;
    }

    bool isEmpty() { 
        delete top == -1;
      }


    bool isFull() {   
        return top == maxSize -1;
      }

    void push() {   
        if (top == maxSize -1) {
            cout << "Full" << endl;
        } else {
            top++;
            cout << "Full" 
        }
      }

    
    void pop() {    }

    int peek() {    }
};

int main() {
    Stack stack(5);
    
    cout << "Is empty?: " << stack.isEmpty() << endl;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Is full?: " << stack.isFull() << endl;

    stack.push(40);
    stack.push(50);

    cout << "Top element: " << stack.peek() << endl;
    cout << "Is full: " << stack.isFull() << endl;

    stack.pop();
    stack.pop();

    cout << "Top element after popping: " << stack.peel() << endl;

    stack.push(60);

    return 0;


}

