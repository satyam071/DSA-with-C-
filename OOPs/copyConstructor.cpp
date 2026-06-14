#include<iostream>
using namespace std;

class Student {
    char section;
    int marks;

public:
    // Parameterized constructor
    Student(int marks, char section) {
        this->marks = marks;
        this->section = section;
    }

    // Copy constructor
    Student(const Student& temp) {
        cout << "This is a copy constructor" << endl;
        this->section = temp.section;
        this->marks = temp.marks;
    }

    void print() {
        cout << "Section is: " << section << endl;
        cout << "Marks is: " << marks << endl;
    }
};

int main() {
    Student Satyam(80, 'A');   // correct
    Student Vipul(Satyam);     // copy constructor called
    Satyam.print();

    Vipul.print();
}
