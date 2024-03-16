/*
 COP3014: Programmming II
 Assignment 4 - creating a program that generates total grade and letter grade for students. Use of classes and inheritence
 Duha Iqbal
 03/15/2024
*/

#include <iostream>
using namespace std;

class COP3014{
private:
    string firstName;
    string lastName;
    int ZNumber;
    double assinmentOneGrade;
    double assinmentTwoGrade;
    double assinmentThreeGrade;
    double assinmentFourGrade;
    double midtermGrade;
    double finalGrade;
    double totalGrade;
    string letterGrade;
public:
    //constructors
    COP3014(string user_first, string user_last, int user_Znumber);
    COP3014(string user_first, string user_last);
    COP3014(int user_Znumber);
    COP3014();
    
    //setters
    void set_first_name(string user_first);
    void set_last_name(string user_last);
    void set_Znumber(int user_Znumber);
    void set_assign_1_grade(double user_1_grade);
    void set_assign_2_grade(double user_2_grade);
    void set_assign_3_grade(double user_3_grade);
    void set_assign_4_grade(double user_4_grade);
    void set_midterm_grade(double user_midterm_grade);
    void set_final_grade(double user_final_grade);
    void set_total_grade(double user_total_grade);
    void set_letter_grade(string user_letter_grade);
    
    //getters
    string get_first_name();
    string get_last_name();
    int get_Znumber();
    double get_assign_1_grade();
    double get_assign_2_grade();
    double get_assign_3_grade();
    double get_assign_4_grade();
    double get_midterm_grade();
    double get_final_grade();
    double get_total_grade();
    string get_letter_grade();
    
    //input function that asks the user for student's name, Z-number and grades
    void input();
    
    //computes the student’s total grade
    void total_grade();
    
    //computes the student’s final letter grade
    void final_letter_grade(double totalGrade);
    
    //checks midterm and final grade
    void check_grades();
    
    //output function which outputs information of any student
    void output(COP3014 temp);
};

class Spring24: public COP3014{
private:
    string firstName = COP3014::get_first_name();
    string lastName = COP3014::get_last_name();
    int ZNumber = COP3014::get_Znumber();
    double assinmentOneGrade = COP3014::get_assign_1_grade();
    double assinmentTwoGrade = COP3014::get_assign_2_grade();
    double assinmentThreeGrade = COP3014::get_assign_3_grade();
    double assinmentFourGrade = COP3014::get_assign_4_grade();
    double midtermGrade = COP3014::get_midterm_grade();
    double finalGrade = COP3014::get_final_grade();
    double totalGrade = COP3014::get_total_grade();
    string letterGrade = COP3014::get_letter_grade();
    int labGrade;
public:
    //constructors
    Spring24(string user_first, string user_last, int user_Znumber);
    Spring24(string user_first, string user_last);
    Spring24(int user_Znumber);
    Spring24();
    
    //setter
    void set_lab_grade(double lab_grade);
    
    //getter
    double get_lab_grade();
    
    //input function that asks the user for student's name, Z-number, and grades, including lab grade
    void input_with_lab();
    
    //computes the student’s total grade, including lab grade
    void total_grade();
    
    //output function which outputs information of any student, with lab grade
    void output_with_lab(Spring24 temp);
};


int main() {
    //test constructors
    COP3014 student("duha", "iqbal", 23713121);
    Spring24 student1(12345678);
    
    //test setters
    student1.set_first_name("luna");
    student1.set_last_name("Johnson");
    student1.set_Znumber(87654321);
    
    //test getters
    cout << "COP3014:" <<endl;
    cout << student.get_first_name() << student.get_last_name() << "-" << student.get_Znumber() << endl;
    cout << "Spring24:" << endl;
    cout << student1.get_first_name() << student1.get_last_name() << "-" << student1.get_Znumber() << endl;
    
    //test input,total grade, letter grade, and output funtion
    COP3014 student2;
    student2.input();
    student2.output(student2);
    
    Spring24 student3;
    student3.input_with_lab();
    student3.output_with_lab(student3);
}

COP3014::COP3014(string user_first, string user_last, int user_Znumber){
    firstName = user_first;
    lastName = user_last;
    ZNumber = user_Znumber;
    assinmentOneGrade = 100;
    assinmentTwoGrade = 100;
    assinmentThreeGrade = 100;
    assinmentFourGrade = 100;
    midtermGrade = 100;
    finalGrade = 100;
    totalGrade = 100;
    letterGrade = 'A';
}

COP3014::COP3014(string user_first, string user_last){
    firstName = user_first;
    lastName = user_last;
    ZNumber = 12345678;
    assinmentOneGrade = 100;
    assinmentTwoGrade = 100;
    assinmentThreeGrade = 100;
    assinmentFourGrade = 100;
    midtermGrade = 100;
    finalGrade = 100;
    totalGrade = 100;
    letterGrade = 'A';
}

COP3014::COP3014(int user_Znumber){
    firstName = "First";
    lastName = "Last";
    ZNumber = user_Znumber;
    assinmentOneGrade = 100;
    assinmentTwoGrade = 100;
    assinmentThreeGrade = 100;
    assinmentFourGrade = 100;
    midtermGrade = 100;
    finalGrade = 100;
    totalGrade = 100;
    letterGrade = 'A';
}

COP3014::COP3014(){
    firstName = "First";
    lastName = "Last";
    ZNumber = 12345678;
    assinmentOneGrade = 100;
    assinmentTwoGrade = 100;
    assinmentThreeGrade = 100;
    assinmentFourGrade = 100;
    midtermGrade = 100;
    finalGrade = 100;
    totalGrade = 100;
    letterGrade = 'A';
}

void COP3014::set_first_name(string user_first){
    firstName = user_first;
}

void COP3014::set_last_name(string user_last){
    lastName = user_last;
}

void COP3014::set_Znumber(int user_Znumber){
    ZNumber = user_Znumber;
}

void COP3014::set_assign_1_grade(double user_1_grade){
    assinmentOneGrade = user_1_grade;
}

void COP3014::set_assign_2_grade(double user_2_grade){
    assinmentTwoGrade = user_2_grade;
}

void COP3014::set_assign_3_grade(double user_3_grade){
    assinmentThreeGrade = user_3_grade;
}

void COP3014::set_assign_4_grade(double user_4_grade){
    assinmentFourGrade = user_4_grade;
}

void COP3014::set_midterm_grade(double user_midterm_grade){
    midtermGrade = user_midterm_grade;
}

void COP3014::set_final_grade(double user_final_grade){
    finalGrade = user_final_grade;
}

void COP3014::set_total_grade(double user_total_grade){
    totalGrade = user_total_grade;
}

void COP3014::set_letter_grade(string user_letter_grade){
    letterGrade = user_letter_grade;
}

string COP3014::get_first_name(){
    return firstName;
}

string COP3014::get_last_name(){
    return lastName;
}

int COP3014::get_Znumber(){
    return ZNumber;
}

double COP3014::get_assign_1_grade(){
    return assinmentOneGrade;
}

double COP3014::get_assign_2_grade(){
    return assinmentTwoGrade;
}

double COP3014::get_assign_3_grade(){
    return assinmentThreeGrade;
}

double COP3014::get_assign_4_grade(){
    return assinmentFourGrade;
}

double COP3014::get_midterm_grade(){
    return midtermGrade;
}

double COP3014::get_final_grade(){
    return finalGrade;
}

double COP3014::get_total_grade(){
    return totalGrade;
}

string COP3014::get_letter_grade(){
    return letterGrade;
}

void COP3014:: input(){
    cout << "Enter first name: ";
    cin >> firstName;
    COP3014::set_first_name(firstName);
    cout << "Enter last name: ";
    cin >> lastName;
    COP3014::set_last_name(lastName);
    cout << "Enter Z number(without the Z): ";
    cin >> ZNumber;
    COP3014::set_Znumber(ZNumber);
    cout << "Enter assinment 1 grade: ";
    cin >> assinmentOneGrade;
    COP3014::set_assign_1_grade(assinmentOneGrade);
    cout << "Enter assinment 2 grade: ";
    cin >> assinmentTwoGrade;
    COP3014::set_assign_2_grade(assinmentTwoGrade);
    cout << "Enter assinment 3 grade: ";
    cin >> assinmentThreeGrade;
    COP3014::set_assign_3_grade(assinmentThreeGrade);
    cout << "Enter assinment 4 grade: ";
    cin >> assinmentFourGrade;
    COP3014::set_assign_4_grade(assinmentFourGrade);
    cout << "Enter midterm grade(if absent/missed enter 0): ";
    cin >> midtermGrade;
    COP3014::set_midterm_grade(midtermGrade);
    cout << "Enter final grade(if absent/missed enter 0): ";
    cin >> finalGrade;
    COP3014::set_final_grade(finalGrade);
}

void COP3014::total_grade(){
    double total;
    total = ((assinmentOneGrade + assinmentTwoGrade +assinmentThreeGrade + assinmentFourGrade)/4.0) * 0.25 + midtermGrade *0.3 + finalGrade * 0.45;
    COP3014::set_total_grade(total);
}

void COP3014::final_letter_grade(double totalGrade){
    midtermGrade = get_midterm_grade();
    finalGrade = get_final_grade();
    
    if (totalGrade >= 90) {
        COP3014::set_letter_grade("A");
    } else if (totalGrade >= 87) {
        COP3014::set_letter_grade("A-");
    } else if (totalGrade >= 83) {
        COP3014::set_letter_grade("B+");
    } else if (totalGrade >= 80) {
        COP3014::set_letter_grade("B");
    } else if (totalGrade >= 77) {
       COP3014::set_letter_grade("B-");
    } else if (totalGrade >= 73) {
        COP3014::set_letter_grade("C+");
    } else if (totalGrade >= 70) {
        COP3014::set_letter_grade("C");
    } else if (totalGrade >= 67) {
       COP3014::set_letter_grade("C-");
    } else if (totalGrade >= 63) {
        COP3014::set_letter_grade("D+");
    } else if (totalGrade >= 60) {
       COP3014::set_letter_grade("D");
    } else if (totalGrade >= 51) {
        COP3014::set_letter_grade("D-");
    } else {
        COP3014::set_letter_grade("F");
    }
}

void COP3014::check_grades(){
  if (midtermGrade == 0 && totalGrade >= 70) {
        COP3014::set_letter_grade("C");
    } else if (midtermGrade == 0 && totalGrade >= 67) {
        COP3014::set_letter_grade("C-");
    } else if (midtermGrade == 0 && totalGrade >= 63) {
        COP3014::set_letter_grade("D+");
    } else if (midtermGrade == 0 && totalGrade >= 60) {
        COP3014::set_letter_grade("D");
    } else if (midtermGrade == 0 && totalGrade >= 51) {
        COP3014::set_letter_grade("D-");
    } else if(finalGrade == 0){
        COP3014::set_letter_grade("F");
    } else {
        get_letter_grade();
    }
}

void COP3014::output(COP3014 temp){
    temp.total_grade();
    double totalGrade = temp.get_total_grade();
    temp.final_letter_grade(totalGrade);
    temp.check_grades();
    
    cout << endl << "COP3014" << endl;
    cout << temp.get_first_name() << " " << temp.get_last_name() << "-" << "Z" << temp.get_Znumber() << endl;
    cout << "Assign 1: " << temp.get_assign_1_grade() << endl;
    cout << "Assign 2: " << temp.get_assign_2_grade() << endl;
    cout << "Assign 3: " << temp.get_assign_3_grade() << endl;
    cout << "Assign 4: " << temp.get_assign_4_grade() << endl;
    cout << "Midterm: " << temp.get_midterm_grade() << endl;
    cout << "Final: " << temp.get_final_grade() << endl;
    cout << "Total grade: " << temp.get_total_grade() << endl;
    cout << "Final grade: " << temp.get_letter_grade() << endl;
}

Spring24::Spring24(string user_first, string user_last, int user_Znumber){
    set_first_name(user_first);
    set_last_name(user_last);
    set_Znumber(user_Znumber);
    set_assign_1_grade(100);
    set_assign_2_grade(100);
    set_assign_3_grade(100);
    set_assign_4_grade(100);
    set_midterm_grade(100);
    set_final_grade(100);
    labGrade = 100;
    set_total_grade(100);
    set_letter_grade("A");
}

Spring24::Spring24(string user_first, string user_last){
    set_first_name(user_first);
    set_last_name(user_last);
    set_Znumber(12345678);
    set_assign_1_grade(100);
    set_assign_2_grade(100);
    set_assign_3_grade(100);
    set_assign_4_grade(100);
    set_midterm_grade(100);
    set_final_grade(100);
    labGrade = 100;
    set_total_grade(100);
    set_letter_grade("A");
}

Spring24::Spring24(int user_Znumber){
    set_first_name("First");
    set_last_name("Last");
    set_Znumber(user_Znumber);
    set_assign_1_grade(100);
    set_assign_2_grade(100);
    set_assign_3_grade(100);
    set_assign_4_grade(100);
    set_midterm_grade(100);
    set_final_grade(100);
    labGrade = 100;
    set_total_grade(100);
    set_letter_grade("A");
}

Spring24::Spring24(){
    set_first_name("First");
    set_last_name("Last");
    set_Znumber(12345678);
    set_assign_1_grade(100);
    set_assign_2_grade(100);
    set_assign_3_grade(100);
    set_assign_4_grade(100);
    set_midterm_grade(100);
    set_final_grade(100);
    labGrade = 100;
    set_total_grade(100);
    set_letter_grade("A");
}

void Spring24::set_lab_grade(double lab_grade){
    labGrade = lab_grade;
}

double Spring24::get_lab_grade(){
    return labGrade;
}

void Spring24::input_with_lab(){
    cout << "Enter first name: ";
    cin >> firstName;
    set_first_name(firstName);
    cout << "Enter last name: ";
    cin >> lastName;
    Spring24::set_last_name(lastName);
    cout << "Enter Z number(without the Z): ";
    cin >> ZNumber;
    Spring24::set_Znumber(ZNumber);
    cout << "Enter assinment 1 grade: ";
    cin >> assinmentOneGrade;
    Spring24::set_assign_1_grade(assinmentOneGrade);
    cout << "Enter assinment 2 grade: ";
    cin >> assinmentTwoGrade;
    Spring24::set_assign_2_grade(assinmentTwoGrade);
    cout << "Enter assinment 3 grade: ";
    cin >> assinmentThreeGrade;
    Spring24::set_assign_3_grade(assinmentThreeGrade);
    cout << "Enter assinment 4 grade: ";
    cin >> assinmentFourGrade;
    Spring24::set_assign_4_grade(assinmentFourGrade);
    cout << "Enter lab grade: ";
    cin >> labGrade;
    Spring24::set_lab_grade(labGrade);
    cout << "Enter midterm grade: ";
    cin >> midtermGrade;
    Spring24::set_midterm_grade(midtermGrade);
    cout << "Enter final grade: ";
    cin >> finalGrade;
    Spring24::set_final_grade(finalGrade);
 }
 
 void Spring24::total_grade(){
     double total;
     total = ((assinmentOneGrade + assinmentTwoGrade +assinmentThreeGrade + assinmentFourGrade)/4.0) * 0.25 + midtermGrade *0.25 + finalGrade * 0.4 + labGrade *0.1;
     Spring24::set_total_grade(total);
 }
 
 void Spring24::output_with_lab(Spring24 temp){
    temp.total_grade();
    double totalGrade = temp.get_total_grade();
    temp.final_letter_grade(totalGrade);
    temp.check_grades();
    
    cout << endl << "COP3014" << endl;
    cout << temp.get_first_name() << " " << temp.get_last_name() << "-" << "Z" << temp.get_Znumber() << endl;
    cout << "Assign 1: " << temp.get_assign_1_grade() << endl;
    cout << "Assign 2: " << temp.get_assign_2_grade() << endl;
    cout << "Assign 3: " << temp.get_assign_3_grade() << endl;
    cout << "Assign 4: " << temp.get_assign_4_grade() << endl;
    cout << "Midterm: " << temp.get_midterm_grade() << endl;
    cout << "Final: " << temp.get_final_grade() << endl;
    cout << "Total grade: " << temp.get_total_grade() << endl;
    cout << "Final grade: " << temp.get_letter_grade() << endl;
 }
