#include <iostream>
using namespace std;
// with prototype
void a_functtt();
void b_functtt();

void a_functtt(){
    // calling another function
    b_functtt();
}
void b_functtt(){
    // does something
}


int main(){
    a_functtt();
    return 0;
}