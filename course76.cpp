// Demonstrate working with Constructor;

#include <iostream>
using namespace std;

class students
{

public:
    int id;
    string name;
    double marks;

    // default constructor calling
    students()
    {
        // id = 10;
        // name = "Arjun";
        // marks = 505.15;

        // cout << "Id: " << id
        //      << ", name: " << name
        //      << ", marks: " << marks << endl;

        // take input from user
        cout << "Enter student id: " << endl;
        cin >> id;
        cout << "Enter student name: " << endl;
        cin >> name;
        cout << "Enter student marks: " << endl;
        cin >> marks;
    }
    void displayStudent()
    {
        cout << "Student Id: " << id << endl;
        cout << "student name: " << name << endl;
        cout << "student marks: " << marks << endl;
    }
};

int main()
{
    students student1;

    // calling displayStudent function
    student1.displayStudent();

    return 0;
}