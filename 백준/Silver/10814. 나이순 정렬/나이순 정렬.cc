#include <iostream>
#include <algorithm>
using namespace std;

struct Person {
    int age;
    string name;
};

bool compare(Person a, Person b) {
    return a.age < b.age;
}

int main() {
    int n;
    cin >> n;

    Person *person = new Person[n];

    for (int i = 0; i < n; i++) {
        cin >> person[i].age >> person[i].name;
    }

    stable_sort(person, person + n, compare);

    for (int i = 0; i < n; i++) {
        cout << person[i].age << " " << person[i].name << "\n";
    }

    delete[] person;

    return 0;
}
