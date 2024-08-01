#include <iostream>
using namespace std;

class Students {
private:
	string name;
	int age;
	char degree;
	string courses;
	string hobbies;
	int phone;
public:
	// Setters
	void declareStudentData(string studentName, int studentAge, char studentDegree, string studentCourses, string studentHobbies, int studentPhone) {
		name = studentName;
		age = studentAge;
		degree = studentDegree;
		courses = studentCourses;
		hobbies = studentHobbies;
		phone = studentPhone;
	}

	// Getters
	void getStudentData() {
		cout << "Student Name Is " << name << endl;
		cout << "Student Age Is " << age << endl;
		cout << "Student Degree Is " << degree << endl;
		cout << "Student Courses Are " << courses << endl;
		cout << "Student Hobbies Are " << hobbies << endl;
		cout << "Student Phone Is " << phone << endl;
	}
};

int main() {

	string mainName;
	int mainAge;
	char mainDegree;
	string mainCourses;
	string mainHobbies;
	int mainPhone;

	Students S1;
	cout << "Please Enter Student's Data" << endl;
	cout << "First Enter Name" << endl;
	cin >> mainName;
	cout << "First Enter Age" << endl;
	cin >> mainAge;
	cout << "First Enter Degree" << endl;
	cin >> mainDegree;
	cout << "First Enter Courses" << endl;
	cin >> mainCourses;
	cout << "First Enter Hobbies" << endl;
	cin >> mainHobbies;
	cout << "First Enter Phone" << endl;
	cin >> mainPhone;

	cout << "====================================" << endl;

	cout << "Display Student's Data" << endl;
	S1.declareStudentData(mainName, mainAge, mainDegree, mainCourses, mainHobbies, mainPhone);
	S1.getStudentData();

	return 0;
}
