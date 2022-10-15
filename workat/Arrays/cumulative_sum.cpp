#include <iostream>
#include <vector>

using namespace std;

vector<int> getCumulativeSum(vector<int> &arr)
{
  for (int i = 1; i < arr.size(); i++)
  {
    arr[i] = arr[i - 1] + arr[i];
  }
  return arr;
}