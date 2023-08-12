
// Demonstrate working with Structure

// #include <iostream>
// using namespace std;

// struct Person
// {
//     char name[50];
//     int age;
//     float salary;
// };

// int main()
// {
//     Person p1;

//     cout << "Enter Full name: ";
//     cin.get(p1.name, 50);
//     cout << "Enter age: ";
//     cin >> p1.age;
//     cout << "Enter salary: ";
//     cin >> p1.salary;

//     cout << "\nDisplaying Information." << endl;
//     cout << "Name: " << p1.name << endl;
//     cout <<"Age: " << p1.age << endl;
//     cout << "Salary: " << p1.salary;

//     return 0;
// }

// ---------------------------------------

#include <iostream>
using namespace std;

// Declare a structure named "car"
struct car
{
    string brand;
    string model;
    int year;
};

int main()
{
    // Create a car structure and store it in myCar1;
    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Create another car structure and store it in myCar2;
    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}