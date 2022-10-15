#include <iostream>
#include <vector>

using namespace std;

vector<int> getCumulativeSum(vector<int> &arr)
{
  vector<int> positive;
  for (int i = 1; i < arr.size(); i++)
  {
    arr[i] = arr[i - 1] + arr[i];
  }
  
  for (int i = 0; i < arr.size(); i++){
    if(arr[i]<1){
      continue;
    }
    positive.push_back(arr[i]);
  }
  return positive;
}
