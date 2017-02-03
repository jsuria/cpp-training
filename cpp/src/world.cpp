#include <iostream>

using namespace std;

class World
{
public:
  World(int id) : 
    _identifier(id)  
  { 
    cout << "Hello from " << _identifier << ".\n"; 
  }
  ~World() { 
    cout << "Bye from " << _identifier << ".\n"; 
  }
private:
  const int _identifier;
};

World TheWorld(1);

int main()
{
  World myWorld(10);

  for(int i = 3; i < 6; ++i)
  {
     World aWorld(i);
  }

  World oneMoreWorld(6);

  return 0;
}
