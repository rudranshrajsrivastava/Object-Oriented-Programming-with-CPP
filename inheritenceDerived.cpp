#include<bits/stdc++.h>
using namespace std;

class Human{

    public:
    string name;
    int weight;

};

class Student:public Human{

    private:
    int rollno,fees;

    public:
    string name;
    int weight;

};

int main(){
    Student A;
    A.name="xyz";
}