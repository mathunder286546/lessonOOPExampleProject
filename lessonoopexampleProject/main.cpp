#include "main.h"

class Student {
public:
	
	string name;
	string surname;
	int age;
	float avg_mark;


	Student() {
		cout << " default ctor" << endl;
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;

	}


	Student(string nm,string surnm,int a,float mark) {
		cout << " default ctor" << endl;
		name = nm;
		surname = surnm;
		age = a;
		avg_mark = mark;

	}

	~Student() {
		cout << "destructor" << endl;


	}

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
	cout << st1. convert() << endl;
	Student st1;
	Student st2("Ivan", "Ivanov", 14, 10);
	st1.name = "ivan";
	st1.surname = "ivanov";
	st1.age = 13;
	st1.avg_mark = 10;


	Student st2 = st1;

	cout << "Before:" << endl;
	cout << st1.convert() << endl;


	

	/*st1.clear();*/


	cout << "\nAfter:" << endl;
	cout << st1.convert() << endl;

	
	



	return 0;
}
