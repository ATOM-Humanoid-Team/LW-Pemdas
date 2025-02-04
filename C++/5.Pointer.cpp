// Pointers
// A pointer is a variable that stores the memory address of another variable (or function). 
// It points to the location of the variable in memory, and it allows you to access or modify the value indirectly.

//  Here’s a general format to declare a pointer:

dataType *pointerName;

// Initializing a pointer:

int num = 10;   
int *ptr = &num;  // Pointer 'ptr' now points to the memory address of 'num'
cout <<ptr << endl; // print memory address
cout <<*ptr << endl; //print value pointed

// Accessing value using a pointer:

int value = *ptr; // Value now contains the value of the variable that 'ptr' points to (i.e., 10)

// References
// A reference is an alias for an existing variable, meaning it’s a different name for the same memory location.
// Unlike pointers, references cannot be null, and they must be initialized when they are declared. 
// Once a reference is initialized, it cannot be changed to refer to another variable.

// Here’s a general format to declare a reference:

dataType &referenceName = existingVariable;

// Example:

int num = 10;
int &ref = num; // Reference 'ref' is now an alias of 'num's


// Function Parameters

// Pass by reference

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
   int x = 5, y = 10;
   cout << "Before Swap: x = " << x << " y = " << y << endl; // Outputs 5 10
   
   swap(x, y);
   cout << "After Swap: x = " << x << " y = " << y << endl;  // Outputs 10 5
}

// Pass by pointer

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
   int x = 5, y = 10;
   cout << "Before Swap: x = " << x << " y = " << y << endl; // Outputs 5 10
   
   swap(*x, *y);
   cout << "After Swap: x = " << x << " y = " << y << endl;  // Outputs 10 5
}