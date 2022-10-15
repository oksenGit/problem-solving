#include <iostream>
#include <vector>
#include <map>

using namespace std;

int getIdenticalTwinsCount(vector<int> &arr)
{

  int count = 0;
  map<int, int> freq;
  map<int, int>::iterator it;

  for (int i = 0; i < arr.size(); i++)
  {
    freq[arr[i]]++;
  }

  for (it = freq.begin(); it != freq.end(); it++)
  {
    count += (it->second * (it->second - 1)) / 2;
  }

  return count;
}