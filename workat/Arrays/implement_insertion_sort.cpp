#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr)
{
  for (int i = 1; i < arr.size(); i++)
  {
    int pos = i;
    while (pos > 0 && arr[pos] < arr[pos - 1])
    {
      int temp = arr[pos - 1];
      arr[pos - 1] = arr[pos];
      arr[pos] = temp;
      pos--;
    }
  }
}