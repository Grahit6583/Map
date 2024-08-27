#include<iostream>
#include<bits/stdc++.h>

using namespace std;

pair<int,int> find_similarity(vector<int> arr1, vector<int> arr2, int n, int m )
{
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[arr1[i]]++;
    }

    for(int i=0; i<m; i++)
    {
        mp[arr2[i]]++;
    }

    int count =0;
    int ans = 0;
    unordered_map<int,int> :: iterator it;

    for(it=mp.begin(); it != mp.end(); it++)
    {
        if(it->second > 1)
        {
            ans++;
        }
        count++;
    }
     return make_pair(ans,count);
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int> arr1;
    vector<int> arr2;

    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        arr1.push_back(k);
    }

    for(int i=0; i<m; i++)
    {
        int k;
        cin>>k;
        arr2.push_back(k);
    }

    pair<int,int> ans = find_similarity(arr1,arr2,n,m);
    cout<<ans.first<<"    "<<ans.second<<endl;

    return 0;
}