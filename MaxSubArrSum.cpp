#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long  tempsum=0;
    long long ans=0;
    for(int i=0;i<n;++i)
    {
        tempsum+=arr[i];

        if(ans<tempsum) ans=tempsum;

        if(tempsum<0) tempsum=0;

    }
    return ans;
}