
#include <iostream>
#include <vector>

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
      vector < int >v;

      while (n != 0)
	{
	  v.push_back (n % 10);
	  n = n / 10;
	}
      int first = 0;
      int last = 0;
      for (int i = v.size () - 1; i >= 0; i--)
	{
	  if (i > 2)
	    {
	      first += v[i];
	    }
	  else
	    {
	      last += v[i];
	    }
	}
      if (first == last)
	cout << "YES" << endl;
      else
	{
	  cout << "NO" << endl;
	}

    }

  return 0;
}
