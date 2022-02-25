#include <bits/stdc++.h>

using namespace std;


int main()
{

    int arr[]={14,12,70,15,95,65,22,30};

    //maximum difference occur between

    int len = sizeof(arr)/sizeof(arr[0]);

    int high = INT_MIN,low = INT_MAX;

    for(int i=0;i<len;++i)
    {
        high=max(arr[i],high);
        low=min(arr[i],low);
    }

    cout<<(high-low)<<endl;

    return 0;
}

