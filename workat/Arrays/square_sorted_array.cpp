#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getSquareSortedArray(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    arr[i] *= arr[i];
  }
  sort(arr.begin(), arr.end());
  return arr;
}