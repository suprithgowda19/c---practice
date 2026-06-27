#include <bits/stdc++.h>
using namespace std;

void intersection(vector<int>&a,vector<int>&b)
{
    int i=0,j=0;
    int n1=a.size();
    int n2=b.size();
    vector<int>intersection;

   
      while(i<n1 && j<n2)
      {
           if(a[i]==b[j])
           {
              intersection.push_back(a[i]);
              i++;
              j++;
           }
           else if(a[i]<b[j])
           {
             i++;
           }

           else
           j++;
      }
      for(i=0;i<intersection.size();i++)
      {
        cout<<intersection[i];
      }
   

     
}


int main()
{   
  int n1=5,n2=6;
    vector<int>a(n1);
    vector<int>b(n2);
  for(int i = 0; i < n1; i++)
  {
    cin >> a[i];
  }
  for(int i=0;i<n2;i++)
  {
    cin>>b[i];
  }
  intersection(a,b);
  


  return 0;
}