#include <iostream>

void uselessFunction(int param);

/**
 * @brief Demonstrates various variable types and control flow constructs.
 *
 * This function takes an integer parameter and performs the following actions:
 * 
 * - Initializes a local variable with the parameter value.
 * - Declares a static variable to persist its value across function calls.
 * 
 * - Creates a reference to the local variable.
 * 
 * - Declares a constant integer.
 * 
 * - If the local variable is greater than zero, iterates from 0 to localVar - 1,
 * 
 *   printing the iteration number to standard output.
 * 
 * - Otherwise, prints a message indicating no iterations.
 * 
 * - Adds the local variable's value to the static variable.
 *
 * @param param The integer value used for local variable initialization and loop control.
 * @return void
 */
void uselessFunction(int param) {
    int localVar = param;
    static int staticVar = 0;
    int& refVar = localVar;
    const int constVar = 42;
    if (localVar > 0) {
        for (int i = 0; i < localVar; ++i) {
            std::cout << "Iteration " << i << std::endl;
        }
    } else {
        std::cout << "No iterations." << std::endl;
    }

    staticVar += localVar;
    return;
}

int main() {
    uselessFunction(3);
    return 0;
}