#include <iostream>

using namespace std;

int main() {

    for (int i = 1; i <= 100; i++) {
        if (!(i % 3) && !(i % 5)) {
            cout << "FizzBuzz" << endl;
        } else if (!(i % 3)) {
            cout << "Fizz" << endl;
        } else if (!(i % 5)) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;

}