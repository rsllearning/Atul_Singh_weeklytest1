#include <bits/stdc++.h>

using namespace std;


class linklist
{
    public:
    int val=0;
    linklist *next = NULL;

};


linklist* add(linklist *head,int data)
{

    linklist *ptr = new linklist();
    ptr->val=data;

    linklist *temp = head;

    //adding data to the last of the linklist

    if(temp==NULL)
    {
        //when listlist was emplty
        head=ptr;
    }
    else
    {
        //when linklist is non-empty need to iterate till last

        while(temp->next!=NULL)
            temp=temp->next;


        //adding node to last
        temp->next=ptr;

    }

    return head;
}

linklist *rem(linklist *head,int data)
{
    if(head==NULL)
        return head;
    else if(head->val==data)
        return head->next;
    else
    {
        linklist *ptr = head;

        while(ptr->next->val!=data)
        {
            ptr=ptr->next;
        }

        //ptr->next is the node where my node is present
        ptr->next = ptr->next->next;
        return head;
    }
}



bool check(linklist *head,int data)
{

    while(head!=NULL)
    {
        if(head->val==data)
            return 1;
        head=head->next;
    }

    return 0;

}




int main()
{

    int input=1,data;

    linklist *base = NULL;


    while(input>=1&&input<=3)
    {

  
    cout<<" press 1 to add element "<<endl;
    cout<<" press 2 to rem element "<<endl;
    cout<<" press 3 to check "<<endl;
    cout<<" press other to terminate "<<endl;

    cin>>input;

    if(input==1)
    {
        cin>>data;
        cout<<" enter number to be added "<<endl;
        base = add(base,data);
    }
    else if(input==2)
    {
        cin>>data;
        cout<<" enter number to be removed "<<endl;
        base= rem(base,data);
    }
    else if(input==3)
    {
        cout<<" enter number to be removed "<<endl;
        cin>>data;
        if(check(base,data))
            cout<<" Element is Present "<<endl;
        else
            cout<<" Element is Absent "<<endl;

    }

    }


  return 0;
  }
