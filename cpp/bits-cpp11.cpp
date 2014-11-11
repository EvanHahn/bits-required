#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
  cout << 1 + (int) (log2(strtod(argv[1], NULL))) << endl;
}
