#include <string>

using namespace std;

class Employee
{
public:
	Employee(string = "Jack", string = "Ma", int = 0);
	void setFirstName(string);
	string getFirstName();

	void setLastName(string);
	string getLastName();

	void setMonthSalary(int);
	int getMonthSalary();

	void displayEmployee();
private:
	string firstName;
	string lastName;
	int monthSalary;
};