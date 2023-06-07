#include <bits/stdc++.h>
using namespace std;
long long int nCr(long long int n,long long int r) {
    long long res = 1;

    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (long long int)(res);
}

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int >> ans;

  
    for (int row = 1; row <= n; row++) {
        vector<long long int> tempLst; 
        for (int col = 1; col <= row; col++) {
            tempLst.push_back(nCr(row - 1, col - 1));
        }
        ans.push_back(tempLst);
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<long long int>> ans = printPascal(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0;
}