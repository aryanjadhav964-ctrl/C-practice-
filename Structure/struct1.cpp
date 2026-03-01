#include <iostream>
using namespace std;
struct Student {
    string name;
    int age;

    //Structure with Function
    void display() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    //Structure using constructor 
    Student (string name, int age ) {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;

    }


};

//Inheritance practice
struct Animal {
    void eat() {
        cout << "Animal is eating" << endl;
    }
};
struct dog : public Animal {
    void bark() {
        cout << "Dog is Barking" << endl;
    }
};

//multilevel inheritance use [grand parent -> parent -> child]
struct vehicle {
    void start() {
        cout << "Vehicle start" << endl;
    }
};

struct car :  vehicle {
    void drive() {
        cout << "Car is driving " << endl;
    }
}; 

struct sportcar :  car {
    void speed() {
        cout << "Sportcar is very fast " << endl;
    }
};

//multiple inheritance type use [multipe parents and one chiled]
struct father {
    void money() {
        cout << "Fathers money " << endl;
    }
};

struct mother {
    void love() {
        cout << "Mother's love " << endl;
    }
};

struct child : father, mother {
    
};

//Hierarchical Inheritance [One parent → Multiple children]
struct Shape {
    void draw() {
        cout << "Drawing shape\n";
    }
};

struct Circle : Shape {
};

struct Square : Shape {
};

int main() {
    // Student obj;
    // obj.name = "Aryan";
    // obj.age = 19;
    // obj.display();

    // Student("Aryan", 19);

    //single inheritance type use
    // dog obj;
    // obj.eat();
    // obj.bark();

    //multilevel inheritance type ues
    // sportcar obj1;
    // obj1.start();
    // obj1.drive();
    // obj1.speed();

    //multiple inheritance type use [multipe parents and one chiled]
    // child c;
    // c.money();
    // c.love();

    //Hierarchical Inheritance
    // Circle c;
    // Square s;

    // c.draw();
    // s.draw();

    //hybrid
    
}