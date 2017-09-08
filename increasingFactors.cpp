#include <map>
#include <iostream>

// finds number of natural factors a number has
int countNaturalFactors(int number) {
  int numOfFactors = 0;

  for (int i=1; i <= number; i++) {
    if (number % i == 0) {
      numOfFactors++;
    }
  }

  return numOfFactors;
}

std::map<int, int> factorNumbersUpTo(int upperBound) {

  // will be in the form (number, numberOfFactors) 
  std::map<int, int> factorsPerNumber = std::map<int, int>();

  // connects each key in the map with it's number of natural factors
  for (int i=1; i <= upperBound; i++) {
    factorsPerNumber[i] = countNaturalFactors(i);
  }

  return factorsPerNumber;
}

int main() {

  // populate map with 1000 numbers with their factors
  std::map<int, int> oneThousandNumbersWithFactors = factorNumbersUpTo(1000);
  std::map<int, int>::iterator it;

  for (it = oneThousandNumbersWithFactors.begin(); it != oneThousandNumbersWithFactors.end(); it++) {
    std::cout << "(" << it -> first << ", " << it -> second << "), ";
  }

  return 0;
}
