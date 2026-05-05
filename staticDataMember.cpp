#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int accountNumber;
    int balance;
    static int count;
    static int total_balance;

    public:
    Customer(string name,int accountNumber,int balance){
        this->name=name;
        this->accountNumber=accountNumber;
        this->balance=balance;
        total_balance+=balance;
        count++;
    }

    static void access(){
        cout << count << endl;
    }
    
    static void totalBalance(){
        cout << total_balance << endl;
    }

    void display(){
        cout << name << endl;
        cout << accountNumber << endl;
        cout << balance << endl;
        cout << count << endl;
    }
};

int Customer::count=0;
int Customer::total_balance=0;

int main(){
    Customer c1("A",1,100);
    Customer c2("B",2,200);
    Customer c3("C",3,300);
    // c1.display();
    // c2.display();
    // c3.display();
    Customer::access();
    Customer::totalBalance();
    return 0;
}