#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    while (true) {
        cout << "Enter operator (+, -, *, /) or 'q' to quit: ";
        cin >> op;

        if (op == 'q' || op == 'Q') {
            cout << "Exiting calculator. Goodbye!";
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch(op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if(num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero!" << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }
    }

    return 0;
}
