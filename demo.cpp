#include <bits/stdc++.h>
using namespace std;

void union_of_sorted_array(vector<int> &arr1, vector<int> &arr2)
{
  int i = 0;
  int j = 0;
  int n1 = arr1.size();
  int n2 = arr2.size();
  vector<int> unionArr;
  while (i < n1 && j < n2)
  {
    if (arr1[i] <= arr2[j])
    {
      if (unionArr.size() == 0 || arr1[i] != unionArr.back())
      {
        unionArr.push_back(arr1[i]);
      }
      i++;
    
    }
    else
    {
      if (unionArr.size() == 0 || arr2[j] != unionArr.back())
      {
        unionArr.push_back(arr2[j]);
      }

      j++;
    }
  }

  while (i < n1)
  {
    if (unionArr.size() == 0 || arr1[i] != unionArr.back())
    {
      unionArr.push_back(arr1[i]);
    }
    i++;
  }

  while (j < n2)
  {
    if  ( unionArr.size() == 0 || arr2[j] != unionArr.back())
    {
      unionArr.push_back(arr2[j]);
    }
    j++;
  }

  for (i = 0; i < unionArr.size(); i++)
  {
    cout << unionArr[i];
  }
}

int main()
{
  int n1 = 5, n2 = 7;
  vector<int> arr1(n1);
  vector<int> arr2(n2);
  for (int i = 0; i < n1; i++)
  {
    cin >> arr1[i];
  }
  for (int i = 0; i < n2; i++)
  {
    cin >> arr2[i];
  }

  union_of_sorted_array(arr1, arr2);

  return 0;
}