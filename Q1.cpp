#include <bits/stdc++.h>

using namespace std;


void cal(int arr[],int len,int sum)
{

    unordered_map <int,int> mp;

    //my map holds the frequency of element to the right of ith index
    //

    for(int i=0;i<len;++i)
    {

        if(mp.find(sum-arr[i])!=mp.end())
        {
            cout<<(sum-arr[i])<<" "<<arr[i]<<endl;
            return;
        }

        ++mp[arr[i]];
    }

    return ;
}


//space complexity O(N)
//time complexity O(N)


int main()
{

    int arr[5]={1,2,-3,4,5};
     int len = sizeof(arr)/sizeof(arr[0]);

    int sum = 2;

    cal(arr,len,sum);


    return 0;
}

