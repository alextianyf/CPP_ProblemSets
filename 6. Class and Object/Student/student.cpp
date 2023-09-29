#include <iostream>
#include "student.h"

using namespace std;

int Student::totalNumber = 0;
float Student::totalGrade = 0.0;

Student::Student(int id, string n, float g):ID(id), name(n), grade(g){
    std::cout << "Created a student" << std::endl;

    totalNumber++;
    totalGrade += grade;
}

Student::~Student(){
    std::cout << "Deleted a student" << std::endl;

    totalNumber--;
    totalGrade -= grade;
}