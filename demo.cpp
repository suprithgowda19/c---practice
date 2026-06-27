#include <bits/stdc++.h>
using namespace std;

void shift_all_zeros_right(vector<int>&arr)
{
  int n=arr.size();
   int i=0;
   int j=-1;
  for( i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
      j=i;
      break;
    }
    
  }
  if(i==-1)
  {
    return ;
  }
  i=j+1;
  
  while(i<n)
  {  
    
    if(arr[i] != 0)
    {
      swap(arr[i],arr[j]);
      j++;
    }
    else{
      i++;
    }
 }
 for(i=0;i<n;i++){
  cout<<arr[i];
 }
     
}


int main()
{   
  int n=5;
    vector<int>arr(n);
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
    shift_all_zeros_right(arr);


  return 0;
}