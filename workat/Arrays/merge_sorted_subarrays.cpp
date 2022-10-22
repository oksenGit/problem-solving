#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> &A, int endIndex)
{
  int i = 0;
  int j = endIndex + 1;
  int totalSize = A.size();
  vector<int> result;
  while (i <= endIndex && j < totalSize)
  {
    if (A[i] <= A[j])
    {
      result.push_back(A[i]);
      i++;
    }
    else
    {
      result.push_back(A[j]);
      j++;
    }
  }

  while (i < endIndex + 1)
  {
    result.push_back(A[i]);
    i++;
  }

  while (j < totalSize)
  {
    result.push_back(A[j]);
    j++;
  }
  A = result;
  return result;
}