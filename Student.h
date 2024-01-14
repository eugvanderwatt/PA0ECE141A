//
// Created by ecvdw on 1/11/2024.
//

#ifndef PA0_141A_STUDENT_H
#define PA0_141A_STUDENT_H

#include<iostream>

const int size=5;

class Student{
public:
    Student();
    Student(const Student & aCopy);
    Student& operator=(const Student & aCopy);
    ~Student();
    void getdata ();
    void tot_marks ();
    friend std::ostream& operator<<(std::ostream& os, const Student& stu);
private:
    int roll_no{};
    double marks[size]{};
} ;

#endif //PA0_141A_STUDENT_H
