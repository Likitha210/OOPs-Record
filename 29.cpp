#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    void show() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(10, 20.5);
    Pair<string, int> p2("Age", 25);

    p1.show();
    p2.show();

    return 0;
}
