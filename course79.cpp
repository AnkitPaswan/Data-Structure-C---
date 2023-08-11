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

    void getData(){

        // return this->name;

        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }


};

int main(){

   encp emp;
   emp.setData("Ankit", 25, 500000);
   emp.getData();
   
   return 0;
}