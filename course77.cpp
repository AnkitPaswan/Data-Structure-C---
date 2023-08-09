// Demonstrate working with Constructor;

#include <iostream>
using namespace std;

class students
{
private:
    int rno;
    string name;
    double fee;

public:
    // parameterized constructor calling
    students(int rno1, string name1, double fee1)
    {
        rno = rno1;
        name = name1;
        fee = fee1;
    }

    int rollno() { return rno; }
    string sname() { return name; }
    double fees() { return fee; }
};

int main()
{
    // constructor called
    students student1(315, "Ankit", 41000);

    students s(student1); // copy constructor(student1 data copies to s object)

    cout << student1.rollno() << endl;
    cout << student1.sname() << endl;
    cout << student1.fees() << endl;
    cout << "Copy const output" << endl;
    cout << s.rollno() << endl;
    cout << s.sname() << endl;
    cout << s.fees() << endl;

    return 0;
}