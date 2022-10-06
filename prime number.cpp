#include <iostream>
using namespace std;

int main() {

  int i, a;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> a;

  if (a == 0 || a == 1) {
    is_prime = false;
  }

  for (i = 2; i <= a/2; ++i) {
    if (a % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << a << " is a prime number";
  else
    cout << a << " is not a prime number";
}
