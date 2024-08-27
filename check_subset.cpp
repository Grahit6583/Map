#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool check_subset(vector<int> arr1, vector<int> arr2, int n, int m)
{
    if(m>n)
    {
        return false;
    }
    map<int,int> m1;
    map<int,int> m2;

    for(int i=0; i<n; i++)
    {
        m1[arr1[i]]++;
    }

    for(int i=0; i<m; i++)
    {
        m2[arr2[i]]++;
    }

    map<int,int> :: iterator it1;
    map<int,int> :: iterator it2 = m2.begin();
    bool ans = false;
    if(m1.size() >= m2.size())
    {
        for(it1 = m1.begin(); it1 != m1.end() && it2 != m2.end(); it1++)
        {
            ans = false;
            if(it1->first == it2->first && it1->second == it2->second)
            {
                ans = true;
                it2++;
            }
        }
        return ans;
    }
    return false;
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

    bool ans = check_subset(arr1, arr2, n, m);
    cout<<ans;
    return 0;
}