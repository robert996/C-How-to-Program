#include <iostream>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string _courseName, string _teacherName)
{
    setCourseName(_courseName);
    setTeacherName(_teacherName);
}

void GradeBook::setCourseName(string name)
{
    if (name.length() <= 25)
    {
        courseName = name;        
    }
    if(name.length() > 25)
    {
        courseName = name.substr(0, 25);

        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

void GradeBook::setTeacherName(string name)
{
    teacherName = name;
}

string GradeBook::getCourseName()
{
    return courseName;
}

string GradeBook::getTeacherName()
{
    return teacherName;
}

void GradeBook::dipalyMessage()
{
    cout << "Welcome to the grade book for \n" << getCourseName()
        << "! \n" 
        << "The teacher is " << getTeacherName() 
        << ". \n" << endl;
}

