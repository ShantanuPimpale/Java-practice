#include<iostream>
#include<vector>
using namespace std;
void Reverse(vector<char>&s)
    {
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }

    }

    void FizzBuzz(int n)
    {
        if(n%3==0 && n%5==0)
        {
            cout<<n<<"="<<"\tFizzBuzz\n";
        }
        else if(n%3==0)
        {
            cout<<n<<"="<<"\tFizz\n";
        }
        else if(n%5==0)
        {
            cout<<n<<"="<<"\tBuzz\n";
        }
        else
        {
            cout<<n<<"="<<"\tNo FizzBuzz\n";
        }
    }
int main()
{
    string str;
    cout<<"Enter string:";
    cin>>str;
    vector<char>str1(str.begin(),str.end());
    Reverse(str1);
    string str2(str1.begin(),str1.end());
    cout<<"\nReversed String is:\t"<<str2;
    if(str==str2)
    {
        cout<<"\nString is Palindrome\n";
    }
    else
    {
        cout<<"\nString is not Palindrome\n";
    }
    int num;
    cout<<"Enter the Number:";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        FizzBuzz(i);
    }
    return 0;
}