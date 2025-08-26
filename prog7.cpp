#include <iostream>
#include <string>   // for stoi

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please provide a number as command line argument." << endl;
        return 0;
    }

    int n = stoi(argv[1]);   // convert argument to integer

    cout << "Multiplication Table of " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
