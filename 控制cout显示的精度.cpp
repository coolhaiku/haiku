#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed; // 控制cout的显示精度
    // 强制以小数的方式显示
    cout << setprecision(2); // 控制显示的精度
    float floatNumber = 10.0 / 3.0;
    double doubleNumber = 100.0 / 3.0;
    const float million = 1000000; //设置million为常量

    cout << "floatNumber = " << floatNumber << endl;
    cout << "100w * floatNumber=" << million * floatNumber << endl;
    cout << "1000w * floatNumber=" << 10 * million * floatNumber << endl;

    cout << "\ndoubleNumber=" << doubleNumber << endl;
    cout << "100w *doubleNumber=" << million * doubleNumber;

    cin.get();
    return 0;
}