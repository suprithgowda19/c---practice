#include <bits/stdc++.h>
using namespace std;


   

     void missingElement(vector<int>&arr)
     {
      
        arr[0]=1;
      for(int i=0;i<arr.size();i++)
      {
              if(arr[i+1]==arr[i]+1)
              {
                  continue;
              }
              else
              cout<<"missing number is "<<arr[i]+1;
              break;
      }

     }


int main()
{   
  int n=5,n2=6;
    vector<int>arr(n);
    // vector<int>b(n2);

    
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  } 
  missingElement(arr);


  // for(int i=0;i<n2;i++)
  // {
  //   cin>>b[i];
  // }
  // intersection(a,b);
  


  return 0;
}