#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"input string\n";
      cin>>str;

      if (str.find("a") == string::npos)
        cout << "'a' is not found" << '\n';
      else
        cout << "'a' found" << '\n';

      if (str.find("b") == string::npos)
        cout << "'b' is not found" << '\n';
      else
        cout << "'b' found" << '\n';

      if (str.find("c") == string::npos)
        cout << "'c' is not found" << '\n';
      else
        cout << "'c' found" << '\n';
      return 0;

}
