#include <bits/stdc++.h>

using namespace std;


//logic is that biggest sum would be

// product of biggest positive number

// product of biggest negative number

void cal(int arr[],int len)
{

    sort(arr,arr+len);
    //my map holds the frequency of element to the right of ith index

    cout<<max(arr[0]*arr[1],arr[len-1]*arr[len-2])<<endl;

}


//time complexity O(Nlog(N))


int main()
{

    int arr[6]={-15,-20,1,2,-30,30};
     int len = sizeof(arr)/sizeof(arr[0]);


    cal(arr,len);


    return 0;
}

