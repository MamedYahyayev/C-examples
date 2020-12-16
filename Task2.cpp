#include <iostream>
#include <cmath>
using namespace std;

int main() {
  for (int i = 111; i <= 999; i++) {
    int thirdDigit = i % 10;
    int secondDigit = (i / 10) % 10;
    int firstDigit = (i / 100);

    if (pow(firstDigit, 3) + pow(secondDigit, 3) + pow(thirdDigit, 3) == i) {
      cout << "Number : " << i << endl;
    }
  }

  return 0;
}
