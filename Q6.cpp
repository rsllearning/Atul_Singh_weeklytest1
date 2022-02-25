#include <bits/stdc++.h>

using namespace std;

void cal(int n)
{

    vector <int> arr(1,1);
    int last = 1;

    for(int i=0;i<n;++i)
    {

        //move a pointer
        for(int j=0;j<n-i;++j)
            cout<<" ";

        for(int j=n-i;j<(n-i+last);++j)
        {
            cout<<arr[j-n+i]<<" ";
        }

        cout<<endl;

        vector <int> temp(last+1,0);
        temp[0]=1;

        for(int j=1;j<last;++j)
        {
            temp[j]=arr[j]+arr[j-1];
        }

        temp[last]=1;
        ++last;

        arr=temp;
    }
    return;


}

int main()
{

    cal(5);


    return 0;
}

