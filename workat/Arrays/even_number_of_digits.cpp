#include <iostream>
#include <vector>

using namespace std;

vector<int> getEvenDigitNumbers(vector<int> &arr)
{
  vector<int> output;
  for (int i = 0; i < arr.size(); i++)
  {
    int size = 1;
    if (arr[i] != 0)
    {
      size = trunc(log10(arr[i])) + 1;
    }
    if ((size % 2) == 0)
    {
      output.push_back(arr[i]);
    }
  }
  return output;
}