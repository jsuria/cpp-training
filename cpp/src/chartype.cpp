#include <iostream>

int main()
{
  using namespace std;
  char ch;

  cout << "Enter a character: " << endl;
  cin >> ch;
  cout << "You entered " << ch << " character. Yey." << endl;

  // ASCII examples
  int i = ch;

  cout << "The ASCII code for " << ch << " is " << i << endl;

  cout << "Add one to the character code:" << endl;
  ch = ch + 1;
  i = ch;

  cout << "The ASCII code for " << ch << " is " << i << endl;
  
  // Using cout.put()
  cout << "Displaying char ch using cout.put(ch): ";
  cout.put(ch);
  cout << endl;  

  // Display a constant
  cout << "Display a constant: ";
  cout.put('!');

  cout << endl << "Done" << endl;

  return 0;
}
