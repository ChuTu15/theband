#include<iostream>

#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int dem = 0;
    int a = 0;
    double result = 0;
    while (n != 1) {

        result = log(n + 1) / log(2);
        if (result == int(result) && result >= 3) {
            n++;
            dem++;
            cout << n << endl;
            n/=2;
            dem++;
            cout << n << endl;
        } else {
            result = log(n) / log(2);
            if (result == int(result) && result >= 3) {
                n = n / 2;cout << n << endl;
                dem++;
            } else {
                result = log(n - 1) / log(2);
                if (result == int(result) && result >= 3) {
                    n--;
                    dem++;cout << n << endl;
                    n/=2;
                    dem++;cout << n << endl;
                } else {
                    if (n % 2 == 0) n = n / 2;
                    else n = n - 1;
                    cout << n << endl;
                    dem++;
                }
            }
        }
    }
    cout << dem;

}
