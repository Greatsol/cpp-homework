#include <iostream>
#include <vector>


struct Lesson;


struct Student {
	Student(const std::string n): name(n)
	{}

	const std::string name;
	std::vector<Lesson*> lessons;
};


struct Lesson {
	Lesson(const std::string n) : name(n)
	{}

	const std::string name;
	std::vector<Student*> students;
};


void print_students_of_lesson(Lesson* l) {
	std::cout << (*l).name << ":\n";
	for (auto i = 0U; i < (*l).students.size(); ++i) {
		std::cout << "|____" << (*((*l).students[i])).name << "\n";
	}
}


void make_relationship(Lesson* l, Student* s) {
	(*l).students.push_back(s);
	(*s).lessons.push_back(l);
}


int main() {
	Student s1("student 1"), s2("student 2"), s3("student 3");
	Lesson l1("lesson 1"), l2("lesson 2");

	make_relationship(&l1, &s1);
	make_relationship(&l1, &s2);
	make_relationship(&l2, &s1);
	make_relationship(&l2, &s3);

	print_students_of_lesson(&l1);
	print_students_of_lesson(&l2);
}