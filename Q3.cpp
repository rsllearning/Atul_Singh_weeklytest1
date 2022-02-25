#include <bits/stdc++.h>

using namespace std;



int main()
{
        char ch = 's';

        unordered_map < char,int> mp;
           int ans = 0;

           while(cin>>ch)
           {
               ++mp[ch];
               ans=mp[ch];
           }

           cout<<ans<<endl;


    return 0;
}

