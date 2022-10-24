#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMaxConsecutiveOnes(vector<int> &A)
{
  int max = 0;
  int current = 0;
  for (int i = 0; i < A.size(); i++)
  {
    if (A[i] == 1)
    {
      current++;
      if (current > max)
      {
        max = current;
      }
    }
    else
    {
      current = 0;
    }
  }
  return max;
}