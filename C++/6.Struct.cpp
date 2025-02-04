// Structures


#include <iostream>

using namespace std;

struct Employee {
    // Inisialisasi
    int id;
    string name;
    float salary;

    // Inisialisasi dengan deafult value
    // int id = 1 ;
    // string name ="user";
    // float salary =100;
};

int main(){

    Employee e1; // create an object of the 'Employee' structure
    e1.id = 1;
    e1.name = "tono";
    e1.salary = 40000;
    // cout << e1 << endl; (this will be error)
    cout << e1.id << endl;
    cout << e1.name << endl;
    return 0;
}