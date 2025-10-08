#include <iostream>
using namespace std;
int get(int N)
{
    static int i = 0;
    return N - (i++) - 1;
}

int main()
{
    int SIZE = 10;
    int arr[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int j;
    for (int i = 0; i < SIZE; i++)
    {
        j = get(SIZE);
        if (j == i)
            continue;
        arr[i] += arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] -= arr[j];
    }

    // print the array
    for (int i = 0; i < SIZE; i++)
        std::cout << arr[i] << " ";
    return 0;
}