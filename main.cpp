#include "Student.h"

int main(){
    Student stu1;
    stu1.getdata();
    stu1.tot_marks();
    std::cout << stu1;

    Student stu2;
    stu2 = stu1;
    stu2.tot_marks();
    std::cout << stu2;

    Student stu3(stu2);
    stu3.tot_marks();
    std::cout << stu3;
    return 0;
}