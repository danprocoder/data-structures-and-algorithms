#include <iostream>
#include <cstring>

using namespace std;

/*
 * A series of number in which each digit is the sum of the preceding 2 digits. The first 2 numbers are 0 and 1.
 */

void fibTill(int stop) {
  static int a = 0, b = 1;

  if (a == 0 && b == 1) {
    cout << a << endl << b << endl;
  }

  int c = a + b;
  cout << c << endl;

  a = b;
  b = c;

  if (b < stop)
    fibTill(stop);
}

int main(int argc, char* argv[]) {
  if (argc < 3) {
    cout << "Format should be: " << argv[0] << " <operation> <stop value>" << endl;

    return 1;
  }

  char *op = argv[1];
  int stop = stoi(argv[2]);

  if (strcmp(op, "till") == 0) {
    fibTill(stop);
  } else if (strcmp(op, "at") == 0) {

  } else {
    cout << "Unrecognized operation \"" << op << "\"" << endl;
  }

  return 0;
}
