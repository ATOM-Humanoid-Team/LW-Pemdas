// Functions in C++

// Defining a Function

return_type function_name(parameter list) {
    // function body
}

// Example

#include <iostream>
using namespace std;

// Function to add two numbers
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int num1 = 5, num2 = 10;
    int result = addNumbers(num1, num2); // Calling the function
    cout << "The sum is: " << result << endl;
    return 0;
}

// Function Prototypes

#include <iostream>
using namespace std;

// Function prototype
int multiplyNumbers(int x, int y);

int main() {
    int num1 = 3, num2 = 7;
    int result = multiplyNumbers(num1, num2); // Calling the function
    cout << "The product is: " << result << endl;
    return 0;
}

// Function definition
int multiplyNumbers(int x, int y) {
    int product = x * y;
    return product;
}


// Double function


int multipy(int x , int y){
    return x*y;
}

double multipy(double x , double y){
    return x+y;
}

int x=1,y=1;
double a=1,b=1;

multipy(x,y) //1
multipy(a,b) //2
