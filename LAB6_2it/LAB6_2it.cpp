#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

double averageIndexOfEvenElements(int a[], int n) {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            sum += i;
            count++;
        }
    }

    if (count == 0) {
        cout << "No even elements in the array." << endl;
        return 0.0;
    }

    return static_cast<double>(sum) / count;
}

int main() {
    int n;

    cout << "Array Size = ";
    cin >> n;

    int* a = new int[n];

    srand(time(0));

    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 100;
    }

    cout << "Array: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    double result = averageIndexOfEvenElements(a, n);
    if (result != 0.0) {
        cout << "The average index of even elements = " << result << endl;
    }

    delete[] a;

    return 0;
}
