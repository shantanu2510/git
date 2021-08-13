#include<iostream>
#include<algorithm>
#include<math.h>
#include <limits.h>
using namespace std;
int main()
{
    int b,n,m;
   int sum=0;
   int maxm,res=-1;
   
    cin>>b>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
        
    }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if((arr1[i]+arr2[j])<=b)
           {
          sum=arr1[i]+arr2[j];
          res=max(res,sum);
           }
          
       }
   }
   cout<<"answer is"<<res;
   
}

