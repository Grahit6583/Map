#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int max_fre(vector<int>arr,int n)
{
    unordered_map<int,int> m;
    int maxfre = -1;
    int maxans = 0;
    for(int i=0; i<n; i++)
    {
        m[arr[i]]++;
        maxfre = max(maxfre,m[arr[i]]);
    }

    for(int i=0; i<n; i++)
    {
        if(maxfre == m[arr[i]])
        {
            maxans = arr[i];
            break;
        }
    }

    return maxans;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }

    cout<<endl;
    int ans = max_fre(arr,n);
    cout<<ans<<endl;
    return 0;
}