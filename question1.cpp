#include <iostream>
using namespace std;

int par_de_soma_s(int a[], int n, int s) {
  int index = 0;
  int i, j;
  for (i = 0; i < n; ++i) 
    for (j = i + 1; j < n; ++j) 
      if (a[i] + a[j] == s) {
        cout << "Par encontrado: (" << a[i] << " + " << a[j] << ")\n";
        index++;
      }
  if (index == 0) {  
    cout << "Não existe par de soma";
  }
  else {
    cout << "Total de pares igual a " << s << " é " << index;  
  }
  return index;
}

int main() {
    int s;
    int n;
    cin >> s;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    par_de_soma_s(a, n, s);
}
