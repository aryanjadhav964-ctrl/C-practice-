//OOPs :
/* Topics -->
class [blueprint for creating objects like student or template]
object [Instance of a class with data and function]
4 main pillars of OOPs are [encap...,inheri...,poly...,abstract...]
Encapsulation [Hides internal data, only expose what's necessary]
Inheritance [allow one class to inherit properties and behavior from another]
Polymorphism [one function/method behaves differently based on in/out]
Abstraction [Hides complex details, shows only necessary features ]
*/

//classes and objects

//classes is a user-defined data type that acts as a blueprint for creating objects.
//It groups related variables (called data members) and functions called (member functions) into a single unit.
#include <iostream>
using namespace std;

 //example of a class
    class Student {
        public:             //access specifire [access specifirs define the visibility and sccessibility of class members (member functions and data members) ]
        string name;        //data members
        int age;
        void display() {        //member functions
            cout << "Name : " << name << "and Age : " << age << endl;
        }
    };

    class demo{
        private : int a;
        protected : int b;
        public :
        int c;
        void set() {
            a = 10;
            b = 20;
            c = 30;
        }
        void show () {
            cout << a << b << c;
        }
    };

    class child : public demo {
        public :
        void access() {
            // a = 10; // it will gives error
            b = 20; 
            c = 30;
        } 
        void show1 () {
            cout << b << c;
        }
    };


int main(){
   demo d;
   d.set();
   d.show();
   cout << endl;
   child big;
   big.access();
   big.show1();
//    d.a = 10; //error [in demo a is private]
//    d.b = 20; //error [in demo b is protected]
   d.c = 30; //[in demo c is public]
    return 0;
}