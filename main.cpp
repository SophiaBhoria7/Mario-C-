#include <iostream>
using namespace std;

int main() {

  //declare the variables
  int user_input;
  int height;
  int rows;
  int spaces;

  //ask for the height of the pyramids from the user
  cout << "Please input a height between 0 and 10: ";
  cin >> user_input;

  //check if the height is in range, if not then ask again until in range
  while ((user_input >= 10) || (user_input <= 0))
    {
      cout << "Please input a height between 0 and 10: ";
      cin >> user_input;
    }


  for(rows = 1; rows <= user_input; rows = rows + 1)
    {
      for(spaces = 1; spaces <= user_input - rows; spaces = spaces +1)
        {
          cout << "  ";
        }
      for(height = 1; height <= rows; height = height + 1)
        {
          cout << "# ";
        }
      cout << "   ";
      for (height = 1; height <= rows; height = height + 1)
        {
          cout << "# ";
        }
      cout << endl;
    }


  return 0;
}

