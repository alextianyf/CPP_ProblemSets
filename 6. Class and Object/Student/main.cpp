#include <iostream>
#include "student.h"
#include "student.cpp"

using namespace std;

int main(){
    Student Jack(001, "Jack", 80);
    Student *Bill = new Student(002, "Bill", 90);

    std::cout << "Average grade is: " << Student::averageGrade() << std::endl;

    delete Bill;
    std::cout << "Average grade is: " << Student::averageGrade() << std::endl;

    return 0;
}