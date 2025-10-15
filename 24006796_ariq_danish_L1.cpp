#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string name;
    string email;
};

int main() {
    Student student[2];

    for (int a = 0; a < 2; a++) {
        cout << "Student " << a + 1 << "\n" ;
        cout << "Put student's id: ";
        cin >> student[a].id;
        cout << "Put student's name: ";
        cin >> student[a].name;
        cout << "Put student's email: ";
        cin >> student[a].email;
        cout << "\n";
    }

    cout << "\n--- Student List ---\n";
    for (int b = 0; b < 2; b++) {
        cout << "ID: " << student[b].id << "\n";
        cout << "Name: " << student[b].name << "\n";
        cout << "Email: " << student[b].email << "\n\n";
    }

    return 0;
}