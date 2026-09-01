#include <bits/stdc++.h>
using namespace std;
void subsequence(int ind , vector<int> &ds , int arr[] , int n)
{
    if (ind==n){
        for (auto it : ds) {
            cout << it << " ";
        }
        if (ds.size()==0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    //subsequence(ind+1,ds,arr,n);
    ds.push_back(arr[ind]);
    subsequence(ind+1,ds,arr,n);
    ds.pop_back();
    subsequence(ind+1,ds,arr,n);
    
    
}

int main()
{
    int arr[] = {3,2,1};
    int n = 3;
    vector<int> ds;
    subsequence(0,ds,arr,n);
    return 0;
}
