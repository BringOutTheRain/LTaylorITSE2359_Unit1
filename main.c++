#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    
    ifstream inputfile;
    int i;
    i = 1;
    int min = 0;
    int max = 0;
    int a = 0;
    int b = 0;
    double sum = 0;
    double avg = 0;
    double Hgrade = 0;
    float scores[8];
    string name;
    int age;
    float gpa;


    inputfile.open("student_data (1).txt");
    if (!inputfile)
    {
        cout << "No Input File" <<endl;
        exit(-1);
    }


    while (!inputfile.eof())
    {

        inputfile >> name >> age >> gpa;

        sum = sum + gpa;
        avg = sum / 53;

        if (gpa >= 3.9)
        cout << name << " Is one of the top of this class with a " <<gpa << " GPA"<< endl; 

        if (age <= 19)
        cout << "The youngest student/s are " << name <<endl;

        if (age >= 24)
        cout << "The Oldest Student/s are "<< name << endl;
    }



   
    cout << "The avg GPA is " << avg << endl;
    inputfile.close();

    return 0;
}