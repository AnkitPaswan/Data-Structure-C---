// C++ program to overload ++ when used as prefix

// #include <iostream>
// using namespace std;

// class Count {
//    private:
//     int value;

//    public:

//     // Constructor to initialize count to 5
//     Count() : value(5) {}

//     // Overload ++ when used as prefix
//     void operator ++() {
//         value = value + 1;
//     }

//     void display() {
//         cout << "Count: " << value << endl;
//     }
// };

// int main() {
//     Count count1;

//     // Call the "void operator ++()" function
//     ++count1;

//     count1.display();
//     return 0;
// }


// -----------------------OR--------------------------


#include<iostream>
using namespace std;

class A{
    public:
    int a;
    int b;
   
   public:
   int add(){
    return a+b;
   }

   void operator + (A &obj){
    int value1 = this ->a;
    int value2 = obj.a;
    cout<< "Output "<< value2 - value1<<endl;
   }
    
};

int main(){

//    A obj;
//    obj.a = 10;
//    obj.b = 20;  
//    cout<<obj.add()<<endl;

A obj1,obj2;
obj1.a = 4;
obj2.a = 7;

obj1 + obj2;

    return 0;
}