//Sort the array containing 0,1 and 2

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
    int mid=0;
    while(mid<=high)
    {
        if(A[mid]==0)
        {
            swap(A[mid],A[low]);
            mid++;
            low++;
        }
        else if(A[mid]==1)
            mid++;
        else
        {
            swap(A[mid],A[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0;
}