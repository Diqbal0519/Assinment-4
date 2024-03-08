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
    string first_name;
    string last_name;
    int Z_number;
    int grades;
    double total_grade;
    char final_letter_grade;
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
    void input(string& first_name, string& last_name, int& Z_number, int& grades);
    
    //computes the student’s total grade
    void totalGrade(int grades, double& total_grade);
    
    //computes the student’s final letter grade
    void finalGrade(double total_grade, char& final_letter_grade);
    
    //output function which outputs information of any student
    void output(int Z_number, int grades);
};

class Spring24: public COP3014{
private:
    int lab_grade;
public:
    //constructor
    Spring24(string first_name, string last_name, int Z_number, int grades, int lab_grade);
    
    //setter
    void set(string first_name, string last_name, int Z_number, int grades, int lab_grade);
    
    //input function that asks the user for student's name, Z-number, and grades, including lab grade
    void input(string& first_name, string& last_name, int& Z_number, int& grades, int lab_grade);
    
    //computes the student’s total grade
    void totalGrade(int grades, double& total_grades, int lab_grade);
    
    //output function which outputs information of any student
    void output(int Z_number, int grades, int lab_grade);
};


int main() {
    cout << "Hello, World!\n";
    return 0;
}

