#include <iostream>

using namespace std;

int
main ()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    {
      int n;
      cin >> n;
      
      if(n<=1399){
          std::cout << "Division 4" << std::endl;
          continue;
      }
      if(n<=1599 and n>=1400){
          std::cout << "Division 3" << std::endl;
          continue;
      }
      if(n<=1899 and n>=1600){
          std::cout << "Division 2" << std::endl;
          continue;
      }
      if(n>=1900){
          std::cout << "Division 1" << std::endl;
          continue;
      }

    }

  return 0;
}
