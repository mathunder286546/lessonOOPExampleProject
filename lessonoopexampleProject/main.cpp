#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	void clear(Student st) {
		st.name = " no name";
		st.surname = "no surname";
		st.age = 0;
		st.avg_mark = 10;
	}

	string convert() {
		string msg= "";
		msg += name;
		msg += " " + surname;
		msg += "(age = " + to_string(age);
		msg += ", average mark = " + to_string(avg_mark);
		msg += ")";
	}
};






int main() {
	Student st1;
	st1.name = "ivan";
	st1.surname = "ivanov";
	st1.age = 13;
	st1.avg_mark = 10;


	Student st2 = st1;

	cout << "Before:" << endl;
	cout << st1.convert() << endl;

	

	st1.clear();


	cout << "\nAfter:" << endl;
	cout << st1.convert() << endl;

	



	return 0;
}
