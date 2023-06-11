#include <iostream>
#include <string>
#include <vector>

class Student {
public:
    Student(std::string name, int age, double score) 
    : name_(name), age_(age), score_(score) {}

    std::string GetName() const { return name_; }
    int GetAge() const { return age_; }
    double GetScore() const { return score_; }

private:
    std::string name_;
    int age_;
    double score_;
};

int main() {
    std::vector<Student> students;
    students.push_back(Student("Tom1", 20, 90.5));
    students.push_back(Student("Jerry1", 19, 88.5));
    students.push_back(Student("Alice1", 21, 92.5));

    double average_score = 0.0;
    for (const auto& student : students) {
        std::cout << "Name: " << student.GetName() << ", Age: " << student.GetAge()
                  << ", Score: " << student.GetScore() << std::endl;
        average_score += student.GetScore();
    }

    average_score /= students.size();
    std::cout << "Average score: " << average_score << std::endl;

    return 0;
}
