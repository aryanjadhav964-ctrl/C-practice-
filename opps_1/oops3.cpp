//Inheritance problems to practice
// Single inheritance : 1. Banking system [creating the bank account and saving account]
//2.Vehicle rental system [creatig the Vehicle and car]

//Multilavel inheritance : 3.Company level hierarchy
// 4. Education system.

//Hierarchical inheritance : 5. Hospital system
//6. E-commerce platform

// Multiple inheritance : 7. Gaming character system 
//8. smart electrical car

//Hybrid inheritance : 9. Advance banking system
// 10. Payment getway system
//11. food dilivery app
//12. Online learnign platform

//practice of banking system, 1st one
#include <iostream>
using namespace std;
class BankAccount {
    
    protected :
    int accountNumber;
    string accountHolderName;
    double balance;

    public :
    //using contructor [A constructor is a special member function that is automatically called when an object is created. It is used to initialize the object's data members.]
    BankAccount(int accNo, string name, double bal) {
        accountHolderName = name;
        accountNumber = accNo;
        balance = bal;
    }

    void deposit (double amount) {
        balance += amount;
        cout << "Deposited : " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn : " << amount << endl;
        }
    }

    //virtual is used to achieve runtime polymorphism. It tells the compiler — "this function can be overridden by a child class, and call the correct version at runtime."
    virtual void displayAccountInfo() {
        cout << "\n Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Balance : " << balance << endl;
    }

};

//derived class
    class SavingAccount : public BankAccount {
        private :
        double interestRate;

        public :
        SavingAccount (int accNo, string name, double bal, double rate) : BankAccount(accNo,  name, bal) {
            interestRate = rate;
        }

        void calculateInterest() {
            double interest = balance * interestRate / 100;
            balance += interest;
            cout << "Interest added : " << interest << endl;
        } 
        void displayAccountInfo() override{
            BankAccount :: displayAccountInfo();
            cout << "Interest rate : " << interestRate << "%" << endl;
        }
    };


int main() {
    SavingAccount acc1(101, "Aryan", 10000, 5);
    SavingAccount acc2(102, "Anushka", 20000, 4);

    acc1.deposit(2000);
    acc1.withdraw(3000);
    acc1.calculateInterest();
    acc1.displayAccountInfo();

    acc2.deposit(5000);
    acc2.withdraw(1000);
    acc2.calculateInterest();
    acc2.displayAccountInfo();

    return 0;
}