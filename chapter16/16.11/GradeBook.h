#include <string>
using namespace std;

class GradeBook
{
    public:
        GradeBook(string, string);
        void setCourseName( string );
        void setTeacherName( string );
        string getCourseName();
        string getTeacherName();
        void dipalyMessage();
    private:
        string courseName;
        string teacherName;
};