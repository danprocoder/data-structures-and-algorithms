#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

/*
 * A series of number in which each digit is the sum of the preceding 2 digits. The first 2 numbers are 0 and 1.
 */

void fib_till(int stop) {
  static int a = 0, b = 1;

  if (a == 0 && b == 1) {
    cout << a << endl << b << endl;
  }

  int c = a + b;
  cout << c << endl;

  a = b;
  b = c;

  if (b < stop)
    fib_till(stop);
}

int fib_at(int point) {
  if (point < 1) {
    cerr << "Point should be at least 1" << endl << endl;
    exit(EXIT_FAILURE);
  } else if (point <= 2) {
    return point - 1;
  } else {
    return fib_at(point - 1) + fib_at(point - 2);
  }
}

int main(int argc, char* argv[]) {
  if (argc < 3) {
    cout << "Format should be: " << argv[0] << " <operation> <stop value>" << endl;

    return 1;
  }

  char *op = argv[1];
  int stop = stoi(argv[2]);

  if (strcmp(op, "till") == 0) {
    cout << "Fibonacci series from 0 to " << stop << endl;
    fib_till(stop);
  } else if (strcmp(op, "at") == 0) {
    int fib_num = fib_at(stop);
    cout << "Number at position " << stop << " in the fibonacci series: " << endl << fib_num << endl;
  } else {
    cout << "Unrecognized operation \"" << op << "\"" << endl;
  }
  cout << endl;

  return 0;
}
