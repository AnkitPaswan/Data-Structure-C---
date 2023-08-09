
// Demonstrate working with class and objects;

#include <iostream>
using namespace std;

class ankit
{

public: // creating public class;
    string name;
    int age;
    float height;

    void print() // creating func
    {
        cout << "My name is: " << name << endl;
        cout << "Gender: " << gender << endl; // private data member calling inside class;
    }

private: // creating private class & its data members accessed only inside the class;
    string gender = "Male";
    string address;

    // using getter & setter method for accessing private members outside the class;
public:
    string getAddress()
    {
        return address;
    }
    void setAddress(string add)
    {
        address = add;
    }
};

int main()
{

    cout << "Overall static allocation" << endl;
    // static Allocation
    ankit a; // object created
    // cin >> a.name; // taking input from user;

    // Access attributes and set values
    a.name = "Ankit";
    a.age = 25;
    a.height = 5.7;

    a.setAddress("Madhubani");
    // Print attribute values
    cout << "Name: " << a.name << endl;
    cout << "Age: " << a.age << endl;
    cout << "Height: " << a.height << endl;
    cout << "Address: " << a.getAddress() << endl;

    // calling function
    a.print();

    // ----------------------------------
    cout << "Overall static allocation" << endl;
    // Dynamically allocation means Heap memory allocation;
    ankit *a1 = new ankit;

    a1->name = "Ankit";
    a1->age = 22;
    a1->height = 5.6;
    a1->setAddress("Malout");

    // using dereferences pointer for accesssing data from dynamic allocation
    // cout << "Name: " << (*a1).name << endl;
    // cout << "Age: " << (*a1).age << endl;
    // cout << "Height: " << (*a1).height << endl;
    // cout << "Address: " << (*a1).getAddress() << endl;

    // other method to access data from dynamic memory allocation
    cout << "Name: " << a1->name << endl;
    cout << "Age: " << a1->age << endl;
    cout << "Height: " << a1->height << endl;
    cout << "Address: " << a1->getAddress() << endl;

    return 0;
}