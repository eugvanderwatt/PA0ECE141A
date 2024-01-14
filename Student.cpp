//
// Created by ecvdw on 1/11/2024.
//
#include "Student.h"

Student::Student(){
    this->roll_no = 0;
    for(double & mark : this->marks){
        mark = 0.0;
    }
}

Student::Student(const Student & aCopy){
    this->operator=(aCopy);
}

Student& Student:: operator=(const Student& aCopy){
    this->roll_no = aCopy.roll_no;
    for(int i = 0; i <= size - 1; ++i){
        this->marks[i] = aCopy.marks[i];
    }
    return *this;
}

Student::~Student()= default;

void Student::getdata(){
    std::cout<<"\nEnter roll no: ";
    std::cin >> this -> roll_no;

    for(int i=0; i < size; i++){
        std::cout<<"Enter marks in subject "<<(i+1)<<": ";
        double mark;
            while(true) {
                if (std::cin >> mark) {
                    this->marks[i] = mark;
                    break;
                } else {
                    // not a valid number
                    std::cout << "Invalid Input! Please input a numerical value." << std::endl;
                    std::cin.clear();
                    while (std::cin.get() != '\n'); // empty loop
                }

            }
    }
}

void Student :: tot_marks() { //calculating total marks
    double total=0;
    for(double mark : this->marks){
        total += mark;
    }
    std::cout << "\n\nTotal marks " << total << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Student& stu){
    os << "student number: " << stu.roll_no << std::endl;
    for (int i = 0; i <= size-1; ++i) {
        os << "mark for subject " << (i + 1) << ": " << stu.marks[i] << std::endl;
    }
    os << std::endl;
    return os;
}

