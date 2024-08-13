#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Tamanho do array: ";
    cin >> n;
    int e[n];
   
    for (int i = 0; i < n; i++) {
        cin >> e[i];
    }


    int a, b, c;
    int index = 0;
    int k, j, l;


    for (k = 0; k < n; k++) {
        for (j = k + 1; j < n; j++) {
            for (l = j + 1; l < n; l++) {
                if (e[k] > e[j] && e[k] > e[l]) {
                    a = e[k];
                    b = e[j];
                    c = e[l];
                } else if (e[j] > e[k] && e[j] > e[l]) {
                    a = e[j];
                    b = e[k];
                    c = e[l];
                } else {
                    a = e[l];
                    b = e[k];
                    c = e[j];
                }


                if (a * a == b * b + c * c) {
                    index++;
                    cout << a << "²" << " = " << b << "²" << " + " << c << "²" << endl;
                }
            }
        }
    }


    cout << index << endl;
    return 0;
}
