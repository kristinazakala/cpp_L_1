#include <iostream>

using namespace std;


int main()
{
    int num;
    cout << " Enter number of rows: ";
    cin >> num;
    for (int i = 0; i < num; i++) {
        for (int j = 1; j <= num - i; j++) {
            cout << " ";// вивід пробілів
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";//  вивід частини трикутника з зірочками
        }
        for (int j = 0; j <= i - 1; j++) {
            cout << "+";// вивід частини трикутника з плюсами
        }
        cout << '\n';
    }
    return 0;
}
