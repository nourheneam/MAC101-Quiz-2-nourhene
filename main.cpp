#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Enter a number to loop through: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FrizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
    
    return 0;
}    
