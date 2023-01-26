#include <iostream>
#include <string>

using namespace std;

const size_t SIZE = 5;

void sortNames(string names[SIZE]) {
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (names[i][0] > names[j][0]) {
                swap(names[i], names[j]);
            }
        }
    }
}

int main() {
    string names[SIZE] = {"Ivanov", "Sidorov", "Alexandrov", "Petrov", "Synergov"};

    sortNames(names);

    for (int i = 0; i < SIZE; i++) {
        cout << names[i] << endl;
    }

    return 0;
}