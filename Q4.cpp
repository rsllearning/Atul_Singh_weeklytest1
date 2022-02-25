#include <bits/stdc++.h>

using namespace std;

int type(char ch)
{
    if(ch=='['||ch==']')
        return 1;
    else if(ch=='{'||ch=='}')
        return 2;
    else if(ch=='('||ch==')')
        return 3;
    else
        return 0;
}

int add(char ch)
{
    if(ch=='{'||ch=='['||ch=='(')
        return 1;
    else
        return -1;
}

bool cal(char arr[],int len)
{

    int fre[4]={};

    for(int i=0;i<len;++i)
    {
        int bracket = type(arr[i]);


        //continue if it is not  a bracket
        if(bracket==0)
            continue;


        fre[bracket]+=add(arr[i]);
        //add frequency at the corresponding bracket

        //if at any moment
        if(fre[bracket]<0)
            return 0;
    }


    for(int i=1;i<=3;++i)
        if(fre[i])
        return 0;



}

int main()
{

    char ch[]={'(','2','+','[','(','{','*','4','{','}','3','/',')',']',')'};
    int len = sizeof(ch)/sizeof(ch[0]);

    if(cal(ch,len))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

    return 0;
}

