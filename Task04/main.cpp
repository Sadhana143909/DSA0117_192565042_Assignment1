
#include <iostream>
using namespace std;

int main()
{
    // 1. Integer division
    int a = 7;
    int b = 2;

    double c = a / b;
    double d = static_cast<double>(a) / b;

    cout << c << " " << d << endl;

    // 2. Character arithmetic
    char ch = 'A' + 2;

    cout << ch << " " << static_cast<int>(ch) + 1 << endl;

    // 3. Boolean conversion
    bool flag = 5;

    cout << flag << " " << boolalpha << flag << endl;

    // 4. Signed and unsigned comparison
    unsigned int u = 1;
    int s = -1;

    if (static_cast<unsigned int>(s) < u)
    {
        cout << "s < u" << endl;
    }
    else
    {
        cout << "s >= u" << endl;
    }

    return 0;
}
