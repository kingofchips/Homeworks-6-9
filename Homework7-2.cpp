#include <iostream>
using namespace std;

class Group {
private:
	int studentsList;
public:
	class Student {
	private:
		string ClassName;
		string name;
	public:
		Student(string ClassName, string name) {
			this->ClassName = ClassName;
			this->name = name;
		}
	};
	Student* studentList;

};

int main()
{
	Group A;
	Group B;
};

