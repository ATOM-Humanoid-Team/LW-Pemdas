// Fundamental Data Types

// Integer (int)
// Integers are whole numbers that can store both positive and negative values. 
// The size of int depends on the system architecture (usually 4 bytes).

// -10^6 until 10^6
int num = 42; 
long num2 = 100;

// -10^11 until 10^11
long long num3 = 1233;

// Floating-Point (float, double)
// Floating-point types represent real numbers, i.e., numbers with a decimal point. 
// There are two main floating-point types:

float pi = 3.14f;
double pi_high_precision = 3.1415926535;

// Character (char)
// Characters represent a single character, such as a letter, digit, or symbol. 
// They are stored using the ASCII value of the symbol and typically occupy 1 byte of memory.

char letter = 'A';
char number = 9 ;

// Boolean (bool)
// Booleans represent logical values: true or false. They usually occupy 1 byte of memory.

bool is_cpp_great = true;

// Arrays
// Arrays are used to store multiple values of the same data type in consecutive memory locations.

int numbers[5] = {1, 2, 3, 4, 5};

// Pointers
// Pointers are used to store the memory address of a variable.

int num = 42;
// this pointer 
int* pNum = &num;

// References
// References are an alternative way to share memory locations between variables, 
// allowing you to create an alias for another variable.

int num = 42;
// reff to pointer num
int& numRef = num;

// Structures (struct)
// Structures are used to store different data types under a single variable 
// and accessibility of member variables and methods are public.

struct Person {
    string name;
    int age;
    float height;
};

Person p1 = {"John Doe", 30, 5.9};

// Classes (class)
// Classes are similar to structures, but the accessibility of the member data
//  and function are governed by access specifiers

class Person {
public:
    string name;
    int age;

    void printInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    };
};

Person p1;
p1.name = "John Doe";
p1.age = 30;