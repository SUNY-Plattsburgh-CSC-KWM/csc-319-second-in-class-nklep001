#include <iostream>
#include <random>
#include <string>
#include <numeric>

using namespace std;

char randLetter() {
    // Create a random device to seed the random number generator
    random_device rd;
    // Create a Mersenne Twister engine, seeded with the random device
    mt19937 gen(rd());
    // Define a uniform integer distribution for the ASCII range of 'a' to 'z'
    uniform_int_distribution<> distrib('a', 'z');

    // Generate and return a random character
    return static_cast<char>(distrib(gen));
}

int sumArrayElements(int *array, int numin) { 
    int sum3 = 0;
    for (int i = 0; i < numin; ++i) {
        sum3 += array[i];
    }
    return sum3;
}

vector<int> numbers;
int numin = 0;
int sum1;
int main() {
    cout << "Please input a number between 1-50: ";
    cin >> numin;
    cout << "Your number is: "<<numin<<endl;
    int *array = NULL;
    array = new int[numin];

    for (int i = 0; i < numin-1; i++) {
        int randval = (rand()%10)+1;
        numbers.push_back(randval);
        array[i] = randval;
    }
    for (int i = 0; i < numin-1; i++) {
        sum1 = sum1+numbers[i];
    }
    for (int i = 0; i < numin-1; i++) {
        cout << numbers[i] << " ";
    }
    int sum2 = accumulate(numbers.begin(), numbers.end(),0);
    sort(array, array + numin);

    cout <<endl;
    cout << sum1 << endl;
    cout << sum2 <<endl;

    cout << sumArrayElements(array,numin);
    delete[] array;
    return 0;
}
