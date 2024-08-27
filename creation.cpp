#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    unordered_map<int,int> mp;
    pair<int,int> p1;
    p1 = make_pair(1,3);
    mp.insert(p1);
    mp[2]=4;

    cout<<mp[1]<<endl;
    cout<<mp.at(1)<<endl;
    cout<<mp.size()<<endl;
    mp.erase(1);
    cout<<mp.size()<<endl;

    unordered_map<int,int> :: iterator it = mp.begin();

    while (it != mp.end())
    {
        cout<<it->first<<"   "<<it->second<<endl;
        it++;
    }
    
    map<string,int> m;
    int n,b;
    string a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        m.insert(pair<string,int>(a,b));
    }

    for(auto &x:m)
    {
        cout<<x.first<<"  "<<x.second<<endl;
    }

    unordered_map<string,int> m1;
    int d,e;
    string f;
    cin>>n;
    for(int i=0; i<d; i++)
    {
        cin>>f>>e;
        m1.insert(pair<string,int>(f,e));
    }

    for(auto &x:m1)
    {
        cout<<x.first<<"  "<<x.second<<endl;
    }


    cout<<"---------------testing------------"<<endl;
    unordered_map<int,int> m2;
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        m2[arr[i]]++;
        cout<<m2[arr[i]]<<"  "<<m2[i]<<endl;
    }
    return 0;
}