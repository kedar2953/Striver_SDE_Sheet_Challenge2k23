#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long >>ans(n);
        for(int i=0;i<n;++i)
        {
            ans[i].resize(i+1);//incresing length at each row by 1
            ans[i][0]=1; ans[i][i]=1;//1st and last element of each row is 1

            for(int j=1;j<i;++j)//To get rest elements of row 
            {
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j]; 
            }
            
        }
        return ans;
  
}
