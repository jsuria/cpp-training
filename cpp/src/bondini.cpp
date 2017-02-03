#include <iostream>

int main()
{
  using namespace std;
  cout << "\aOperation \"HyperHype\" is now activated!\n";
  cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";

  long code;
  cin >> code;

  cout << "\007You entered " << code << "...\n";
  cout << "\007Code verified Proceed with Plan XX-" << code << "!\n";

  return 0;
}
