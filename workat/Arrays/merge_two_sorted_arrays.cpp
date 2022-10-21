#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSortedArrays(vector<int> &A, vector<int> B)
{
  int iA, iB = 0;
  int totalSize = A.size() + B.size();
  vector<int> result;
  while (iA + iB != totalSize)
  {
    if (iB == B.size())
    {
      result.push_back(A[iA]);
      iA++;
      continue;
    }
    if (iA == A.size())
    {
      result.push_back(B[iB]);
      iB++;
      continue;
    }

    if (A[iA] <= B[iB])
    {
      result.push_back(A[iA]);
      iA++;
    }
    else
    {
      result.push_back(B[iB]);
      iB++;
    }
  }
  return result;
}