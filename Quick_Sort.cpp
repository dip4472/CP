#include <bits/stdc++.h>
using namespace std;
//Quick Sort
int pivotted(vector<int>&a,int low, int high)
{int pivot=a[low];
 int i=low; int j=high;
 while(i<j){
   while(a[i]<=pivot && i<=high-1)
      i++;
   while(a[j]>pivot && j>=low +1)
      j--;
   if(i<j)swap(a[i],a[j]);

 }
 swap(a[low],a[j]);
 return j;
}
void quick_sort(vector<int> &a,int low,int high)
{ if(low<high)
   { int pivot= pivotted(a,low,high);
      quick_sort(a,low,pivot-1);
      quick_sort(a,pivot+1,high);
   }



}

vector<int> qs(vector<int> a)
{quick_sort(a,0,9);
return a;
}



int main() {
   vector<int>a; int x;
   for(int i=0;i<10;i++)
      {cin>>x;
        a.push_back(x);}
   
   a=qs(a);
   for(int i=0;i<10;i++)
      {cout<<a[i]<<endl;}
     return 0;
}