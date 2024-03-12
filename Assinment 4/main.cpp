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
    double assinmentOneGrade;
    double assinmentTwoGrade;
    double assinmentThreeGrade;
    double assinmentFourGrade;
    double midtermGrade;
    double finalGrade;
    double totalGrade;
    char letterGrade;
public:
    //constructors
    COP3014(string first_name, string last_name, int Z_number);
    COP3014(string first_name, string last_name);
    COP3014(int Z_number);
    COP3014();
    
    //setters
    void set_first_name(string first_name);
    void set_last_name(string last_name);
    void set_Znumber(int Z_number);
    void set_assign_1_grade(double assign_1_grade);
    void set_assign_2_grade(double assign_2_grade);
    void set_assign_3_grade(double assign_3_grade);
    void set_assign_4_grade(double assign_4_grade);
    void set_midterm_grade(double midterm_grade);
    void set_final_grade(double final_grade);
    void set_total_grade(double total_grade);
    void set_letter_grade(char letter_grade);
    
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
    char get_letter_grade();
    
    //input function that asks the user for student's name, Z-number and grades
    void input();
    
    //computes the student’s total grade
    void total_grade(double assinmentOneGrade, double assinmentTwoGrade, double assinmentThreeGrade, double assinmentFourGrade, double midtermGrade, double finalGrade);
    
    //computes the student’s final letter grade
    void final_grade(double totalGrade, char& letterGrade);
    
    //output function which outputs information of any student
    void output();
};

class Spring24: public COP3014{
private:
    int labGrade;
public:
    //setter
    void set_lab_grade(double lab_grade);
    
    //input function that asks the user for student's name, Z-number, and grades, including lab grade
    void input_with_lab();
    
    //computes the student’s total grade
    void totalGrade(double assinmentOneGrade, double assinmentTwoGrade, double assinmentThreeGrade, double assinmentFourGrade, double midtermGrade, double finalGrade, int lab_grade, double& totalGrade);
    
    //output function which outputs information of any student
    void output(int Z_number, int grades, int lab_grade);
};


int main() {
    COP3014 test("Duha", "Iqbal");
    cout << test.get_first_name() << endl;
    
    return 0;
}

COP3014::COP3014(string first_name, string last_name, int Z_number){
    firstName = first_name;
    lastName = last_name;
    ZNumber = Z_number;
    assinmentOneGrade = 100;
    assinmentTwoGrade = 100;
    assinmentThreeGrade = 100;
    assinmentFourGrade = 100;
    midtermGrade = 100;
    finalGrade = 100;
    totalGrade = 100;
    letterGrade = 'A';
}

COP3014::COP3014(string first_name, string last_name){
    firstName = first_name;
    lastName = last_name;
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

COP3014::COP3014(int Z_number){
    firstName = "First";
    lastName = "Last";
    ZNumber = Z_number;
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

void COP3014::set_first_name(string first_name){
    firstName = first_name;
}

void COP3014::set_last_name(string last_name){
    lastName = last_name;
}

void COP3014::set_Znumber(int Z_number){
    ZNumber = Z_number;
}

void COP3014::set_assign_1_grade(double assign_1_grade){
    assinmentOneGrade = assign_1_grade;
}

void COP3014::set_assign_2_grade(double assign_2_grade){
    assinmentTwoGrade = assign_2_grade;
}

void COP3014::set_assign_3_grade(double assign_3_grade){
    assinmentThreeGrade = assign_3_grade;
}

void COP3014::set_assign_4_grade(double assign_4_grade){
    assinmentFourGrade = assign_4_grade;
}

void COP3014::set_midterm_grade(double midterm_grade){
    midtermGrade = midterm_grade;
}

void COP3014::set_final_grade(double final_grade){
    finalGrade = final_grade;
}

void COP3014::set_total_grade(double total_grade){
    totalGrade = total_grade;
}

void COP3014::set_letter_grade(char letter_grade){
    letterGrade = letter_grade;
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

char COP3014::get_letter_grade(){
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
    cout << "Enter midterm grade: ";
    cin >> midtermGrade;
    COP3014::set_final_grade(midtermGrade);
    cout << "Enter final grade: ";
    cin >> finalGrade;
    COP3014::set_final_grade(finalGrade);
}

void COP3014::total_grade(double assinmentOneGrade, double assinmentTwoGrade, double assinmentThreeGrade, double assinmentFourGrade, double midtermGrade, double finalGrade){
    double total;
    total = ((assinmentOneGrade + assinmentTwoGrade +assinmentThreeGrade + assinmentFourGrade)/4.0) * 0.25 + midtermGrade *0.3 + finalGrade * 0.45;
    COP3014::set_total_grade(total);
    
}

void COP3014::final_grade(double totalGrade, char& letterGrade){
    if(totalGrade = 100 && totalGrade >= 90){
        COP3014::set_letter_grade('A');
    }
    else if(totalGrade < 90  && totalGrade >= 87){
        COP3014::set_letter_grade('A-');
    }
    else if(totalGrade < 87  && totalGrade >= 83){
        COP3014::set_letter_grade('B+');
    }
    else if(totalGrade < 83  && totalGrade >= 80){
        COP3014::set_letter_grade('B');
    }
    else if(totalGrade < 80  && totalGrade >= 77){
        COP3014::set_letter_grade('B-');
    }
    else if(totalGrade < 77  && totalGrade >= 73){
        COP3014::set_letter_grade('C+');
    }
    else if(totalGrade < 73  && totalGrade >= 70){
        COP3014::set_letter_grade('C');
    }
    else if(totalGrade < 70  && totalGrade >= 67){
        COP3014::set_letter_grade('C-');
    }
    else if(totalGrade < 67  && totalGrade >= 63){
        COP3014::set_letter_grade('D+');
    }
    else if(totalGrade < 63  && totalGrade >= 60){
        COP3014::set_letter_grade('D');
    }
    else if(totalGrade < 60  && totalGrade >= 51){
        COP3014::set_letter_grade('D-');
    }
    else if(totalGrade < 60  && totalGrade >= 0){
        COP3014::set_letter_grade('F');
    }
}


void COP3014::output(){
    
}
