#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t,*last;
    head=new Node;
    head->data=A[0];
    head->next=NULL;
    last=head;
    for(i=1;i<n;i++) 
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"\t";
        p=p->next;
    }
    cout<<"\n";
}
void displayR(struct Node *l)
{
    if(l !=NULL)
    {
        cout<<l->data<<"\t";
        displayR(l->next);
    }
}
 
void displayRB(struct Node *m)
{
    if(m!=NULL)
    {
        displayRB(m->next);
        cout<<m->data<<"\t";
    }
} 
int count(struct Node *p)
{
    int l=0;
    while(p != 0)
    {
        l++;
        p=p->next;
    }
    cout<<"\n"<<"length is:"<<l<<"\n";
    return 0;
}
int Rcount(struct Node *p)
{
    if(p!=NULL)
    {
        
        return Rcount(p->next)+1;
    }
    else 
    {
        return 0;
    }
}
int sum(struct Node *p)
{
    int sum=0;
    while(p!=NULL)
    {
        sum=(p->data)+sum;
        p=p->next;
    }
    cout<<"sum is:"<<sum<<"\n";
    return 0;
}
int Rsum(struct Node *p)
{
    int sum=0;
    if(p!=0)
    {
        sum=(p->data)+sum;
        return Rsum(p->next)+(p->data);
    }

    else 
    {
        return 0;
    }
}
int max(Node *p)
{
    int m=-32768;
    while(p !=0)
    {
        if(p->data>m)
        {
            m=p->data;
        }
        p=p->next;
    }
    cout<<"max number is:"<<m<<"\n";
}
int maxR(struct Node*p)
{
    int x=0;
    int min=-32768;
    if(p==0)
    {
        return min;
    }
    else
    {
        x=maxR(p->next);
        if(x>p->data)
        {
            return x;
        }
        else
        {
            return p->data;
        }
    }
}
struct Node search_l(struct Node *p,int key)
{
    while(p!=0)
    {
        if(key==(p->data))
        {
            cout<<p->data<<"\t"<<"is found";
            cout<<"key found at"<<"\t";
            cout<<p<<"\t";
        }
        else{
            break;
        }
        p=p->next;
    }
}
struct Node Rsearch (struct Node *p,int key)
{
    if(p!=NULL)
    {
        if(key==(p->data))
        {
            cout<<"key is found at:"<<p<<"\n";
            cout<<"key was:"<<p->data<<"\n";
        }
        else
        {
            
        }
        Rsearch(p->next,key);
    }
}
struct Node Msearch(struct Node *p,int key)
{
    Node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=head;
            cout<<"key found:"<<key<<"\n"<<"address is:"<<p<<"\n";
        }
        q=p;
        p=p->next;
    }
}
int Delete(struct Node *p,int pos)
{
    Node *q;
    int x;
    if(pos==1)
    {
        x=p->data;
        p=head;
        head=head->next;
        delete p;
    }
    else
    {
        p=head;
        q=NULL;
        for(int i=0;i<pos-1;i++)
        {
            q=p;
            p=p->next;
        }
        if (p !=NULL)
        {
            p->next=q->next;
            x=p->data;
            delete p;
            return x;
        }
    }
    
    return x;

}
int sort_check(struct Node *p)
{
    int x=-32768;
    p=head;
    while(p !=NULL)
    {
        if(p->data<x)
        {
            return true;
        }
        else
        {
            x=p->data;
            p=p->next;
            return false;
        }
    }
    return 0;
}
int duplicate(Node *p)
{
    struct Node *q=p->next;
    while(p!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;   
        }
        else
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
 
    }
    return 0;
}
int isloop(struct Node *f)
{
    struct Node *p,*q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        if(q !=NULL)
        {
            q=q->next;
        }
        else{
            q=NULL;
        }
    }while(p==NULL && q==NULL);
    if(p==q)
    return true;
    else
    return false;
}

int main()
{
    int A[]={1,1,2,2,3};
    struct Node *t1,*t2;
    create(A,5);
    display(head);
    displayR(head);
    displayRB(head);
    count(head);
    int m;
    m=Rcount(head);
    cout<<"length using recursion is:"<<m<<"\n";
    sum(head);
    int n;
    n=Rsum(head);
    cout<<"sum using recursion is:"<<n<<"\n";
    max(head);
    int w;
    w=maxR(head);
    cout<<"Max using recursive is:"<<w<<"\n";
    search_l(head,4);
    Rsearch(head,3);
    Msearch(head,2);
    //Delete(head,1);
    display(head);
    sort_check(head);
    duplicate(head);
    display(head);
    t1=head->next->next;
    t2=head->next->next->next->next->next;
    t2->next=t1;
    cout<<isloop(head);
    return 0;
}