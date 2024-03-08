/*
 COP3014: Programmming II
 Assignment 4 - creating a program that randomly generates random score up between 1-20 for up to 10 quizzes,this is the imput file. Then the program calculates the average and adds it to the output file.
 Duha Iqbal
 02/23/2024
*/

#include <iostream>
using namespace std;

class COP3014{
private:
    string firstName;
    string lastName;
    int ZNumber;
    int Grades;
    double totalGrade;
    char letterGrade;
public:
    //constructors
    COP3014(string first_name, string last_name, int Z_number, int grades);
    COP3014(string first_name, string last_name, int Z_number);
    COP3014(string first_name, string last_name);
    COP3014(string first_name);
    COP3014();
    
    //setters
    void set(string first_name, string last_name, int Z_number, int grades);
    void set(string first_name, string last_name, int Z_number);
    void set(string first_name, string last_name);
    void set(string first_name);
    void set();
    
    //input function that asks the user for student's name, Z-number and grades
    void input(string& firstName, string& lastName, int& ZNumber, int& Grades);
    
    //computes the student’s total grade
    void total_grade(int grades, double& totalGrade);
    
    //computes the student’s final letter grade
    void finalGrade(double total_grade, char& letterGrade);
    
    //output function which outputs information of any student
    void output(int Z_number, int grades);
};

class Spring24: public COP3014{
private:
    int labGrade;
public:
    //constructor
    Spring24(string first_name, string last_name, int Z_number, int grades, int lab_grade);
    
    //setter
    void set(string first_name, string last_name, int Z_number, int grades, int lab_grade);
    
    //input function that asks the user for student's name, Z-number, and grades, including lab grade
    void input(string& firstName, string& lastName, int& ZNumber, int& Grades, int labGrade);
    
    //computes the student’s total grade
    void totalGrade(int grades, double& totalGrades, int lab_grade);
    
    //output function which outputs information of any student
    void output(int Z_number, int grades, int lab_grade);
};


int main() {
    cout << "Hello, World!\n";
    return 0;
}

COP3014::COP3014(string first_name, string last_name, int Z_number, int grades){
    firstName = first_name;
    lastName = last_name;
    ZNumber = Z_number;
    Grades = grades;
}

COP3014::COP3014(string first_name, string last_name, int Z_number){
    firstName = first_name;
    lastName = last_name;
    ZNumber = Z_number;
}

COP3014::COP3014(string first_name, string last_name){
    firstName = first_name;
    lastName = last_name;
}

COP3014::COP3014(string first_name){
    firstName = first_name;
}
