#include <iostream>
#include <sstream>

using namespace std;

class Student {
    string fio, group;
    float averageBall;

public:
    Student() {
        fio = "Name";
        group = "qqq-0";
        averageBall = 0.0f;
    }
    Student(string fio, string group, float averageBall) {
        this->fio = fio;
        this->group = group;
        this->averageBall = averageBall;
    }
    Student(const Student& s) {
        this->fio = s.fio;
        this->group = s.group;
        this->averageBall = s.averageBall;
    }
    string toString() {
        stringstream ss;
        ss << this->averageBall;
        return "Name: " + this->fio + ", group:" + this->group + ", ball:" + ss.str();
    }
    ~Student() {}
};

int main() {
    Student s("Ivan", "MDK-1", 2.6f);
    Student* s2 = new Student();
    Student s3(s);

    cout << s.toString() << endl;
    cout << s2->toString() << endl;
    cout << s3.toString() << endl;
    return 0;
}