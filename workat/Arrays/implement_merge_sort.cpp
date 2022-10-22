#include <iostream>
#include <vector>

using namespace std;

// [4,2] 0,0,1
void merge(vector<int> &arr, int l, int mid, int r)
{
  vector<int> leftArr, rightArr;

  // 0-0+1 = 1
  int leftArrSize = mid - l + 1;
  // 1-0 = 1
  int rightArrSize = r - mid;

  for (int i = 0; i < leftArrSize; i++)
    leftArr.push_back(arr[l + i]);

  for (int i = 0; i < rightArrSize; i++)
    rightArr.push_back(arr[mid + 1 + i]);

  int i=0, j = 0;
  int arrI = l;

  while (i < leftArrSize && j < rightArrSize)
  {
    if (leftArr[i] <= rightArr[j])
    {
      arr[arrI] = leftArr[i];
      i++;
    }
    else
    {

      arr[arrI] = rightArr[j];
      j++;
    }
    arrI++;
  }

  while (i < leftArrSize)
  {
    arr[arrI] = leftArr[i];
    i++;
    arrI++;
  }

  while (j < rightArrSize)
  {
    arr[arrI] = rightArr[j];
    j++;
    arrI++;
  }
}

//[4,2], 0, 1
void sort(vector<int> &arr, int begin, int end)
{
  if (begin >= end)
    return;

  // mid = 0
  int mid = begin + (end - begin) / 2;
  //[4,2], 0, 0
  sort(arr, begin, mid);
  //[4,2], 1, 1
  sort(arr, mid + 1, end);
  //[4,2] 0,0,1
  merge(arr, begin, mid, end);
}

void mergeSort(vector<int> &arr)
{
  sort(arr, 0, arr.size() - 1);
}

int main()
{
  vector<int> x;
  x.push_back(4);
  x.push_back(2);

  mergeSort(x);
  return 0;
}