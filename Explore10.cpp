#include <iostream>
using namespace std;
struct Broken {
    int values[4];
    Broken();
    Broken(int initialValues[4]);
};
Broken::Broken() {
    for(int index = 0; index < 4; index ++){
      values[index] = 0;
    }
}


Broken::Broken(int initialValues[4]) {
    for(int index = 0; index < 4; index ++){
      values[index] = initialValues[index];
}
}
void PrintBroken(Broken x) {
    cout << "[" << x.values[0];
    for (int index = 1; index < 4; index++) {
        cout << ", " << x.values[index];
    }
    cout << "]";
}

int main() {
    int x[] = {1, 2, 3, 4};
    Broken a;
    PrintBroken(a);
    Broken b(x);
    PrintBroken(b);
}
