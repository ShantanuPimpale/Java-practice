#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        if(A[low]<0)
            low++;
        if(A[high]<0 && A[low]>0)
            swap(A[low],A[high]);
        if(A[high]>0)
            high--;
        if(A[high]>0 && A[low]<0)
        {
            low++;
            high--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0;
}