// Demonstrate working with Enccapsulation;


#include<iostream>
using namespace std;

class encp{

private:
     string name;
     int age;
     float salary;

     public:

    void setData(string n, int a, float s){
        name = n;
        age = a;
        salary = s;
    }
