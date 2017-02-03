#include <iostream>

int main()
{
  using namespace std;

  int chest = 42;
  int waist = 0x42;
  int inseam = 042;

  cout << "Are you retaining water?\n\n";
  cout << "Chest = " << chest << "\n";
  cout << "Waist = " << waist << "\n";
  cout << "Inseam = " << inseam << "\n\n";

  cout << "Converted to different Bases:\n\n";
  
  waist = 42;
  inseam = 42;

  cout << "Chest = " << chest << " (decimal)" << endl;
  cout << hex; // Converts variable in next cout string to hex
  cout << "Waist = " << waist << " hexadecimal" << endl;
  cout << oct; // Convert to octal
  cout << "Inseam = " << inseam << " (octal)" << endl;

  return 0;
}
