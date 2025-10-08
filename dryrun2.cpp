#include <iostream>
using namespace std;

int list[5] = {2, 4, 8, 10, -1};
int nextList[5] = {3, -1, 0, 1, -1};
int start = 2;
int Free = 4;

void magic(int val, int position) {
    int start = ::start;
    for (int i = 0; i < position - 1; i++)
        start = nextList[start];
    list[Free] = val;
    nextList[Free] = nextList[start];
    nextList[start] = Free++;
}

void magic() {
    int start = ::start;
    while (start != -1) {
        cout << list[start] << "->";
        start = nextList[start];
    }
    cout << "*" << endl;
}

int main() {
    cout << start << endl;
    magic();
    magic(5, 2);
    magic();
    return 0;
}