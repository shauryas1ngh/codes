#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

struct node{
    int data;
    node* link;
};

node* head=nullptr;

void push(int data)
{
    node* temp=new node;
    temp->data=data;
    temp->link=head;
    head=temp;
}

void pop()
{
    node* temp=head;
    head=temp->link;
    delete temp;
}

void display()
{
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

void insert(int data)
{
    if(head==nullptr)
    {
        push(data);
        return;
    }
    int da=head->data;
    pop();
    insert(data);
    push(da);
}

void reversestack()
{
    if(head==nullptr)
    {
        return;
    }
    int data=head->data;
    pop();
    reversestack();
    insert(data);
}


int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    
    display();
    
    reversestack();
    display();
    return 0;
}
