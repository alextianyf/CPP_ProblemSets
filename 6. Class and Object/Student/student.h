#ifndef _STUDENT_H
#define _STUDENT_H

#include <iostream>

using std::string;

class Student{

private:
    const int ID;
    const string name;
    float grade;

    static int totalNumber;
    static float totalGrade;

public:
    Student(int id, string n, float g);

    ~Student();

    static float averageGrade(){
        return totalGrade/totalNumber;
    }
};

#endif // !_STUDENT_H