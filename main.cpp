#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void create_array(int* a, const int array_size, const int number1, const int number2) {
    for (int i = 0; i < array_size; i++)
        a[i] = number1 + rand() % (number2 - number1 + 1);
}

void print_array(int* a, const int array_size) {
    for (int i = 0; i < array_size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int elements_counter(int* a, const int array_size) {
    int number = 0;
    for (int i = 0; i < array_size; i++) {
        if ((a[i] > 0) || (a[i] % 2 != 0))
            number++;
    }
    return number;
}

int elements_sum(int* a, const int array_size) {
    int sum = 0;
    for (int i = 0; i < array_size; i++) {
        if ((a[i] > 0) || (a[i] % 2 != 0))
            sum += a[i];
    }
    return sum;
}

void elements_change(int* a, const int array_size) {
    for (int i = 0; i < array_size; i++) {
        if ((a[i] > 0) || (a[i] % 2 != 0))
            a[i] = 0;
    }
}


int main()
{
    srand((unsigned)time(NULL));

    const int array_size = 27;
    int a[array_size];

    int number1 = -35;
    int number2 = 25;

    create_array(a, array_size, number1, number2);
    print_array(a, array_size);

    cout << "Sum : " << elements_sum(a, array_size) << endl;
    cout << "Amount of elements : " << elements_counter(a, array_size) << endl;

    elements_change(a, array_size);
    print_array(a, array_size);

    return 0;
    system("pause");
}


