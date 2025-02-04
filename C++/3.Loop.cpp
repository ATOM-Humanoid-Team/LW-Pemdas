// Loops in C++

// For Loop

for (initialization; condition; increment/decrement) {
    // block of code to execute
}

// examples

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Iteration: " << i << endl;
    }
    return 0;
}

// While Loop

while (condition) {
    // block of code to execute
}

// examples

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << "Iteration: " << i << endl;
        i++;
    }
    return 0;
}

// Do-While Loop

do {
    // block of code to execute
} while (condition);

// examples

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        cout << "Iteration: " << i << endl;
        i++;
    } while (i < 5);
    return 0;
}

