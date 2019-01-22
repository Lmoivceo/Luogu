#include<iostream>
#include<map>
using namespace std;
struct node
{
    char data;
    struct node *l,*r;
};
string s;
int n;
int deep=0;
int loc=0;
void create(node *t)
{
    if(deep<n)
    {
        t=new node;
        deep++;
        create(t->l);
        deep--;
        deep++;
        create(t->r);
        deep--;
    }
    return;
}
void edit(node *t)
{
    if(deep<n)
    {
        cout<<'a'<<endl;
        if(t->l!=NULL)
        {
            deep++;
            edit(t->l);
            deep--;
        }
        cout<<'b'<<endl;
        if(t->r!=NULL)
        {
            deep++;
            edit(t->r);
            cout<<'c'<<endl;
            if(deep==n-1)
            {
                if(s[loc]=='1')
                    t->data='I';
                else
                    t->data='B';
            }
            else
            {
                if(t->l->data=='I'&&t->r->data=='I')
                    t->data='I';
                else if(t->l->data=='B'&&t->r->data=='B')
                    t->data='B';
                else
                    t->data='F';
            }
            deep--;
        }
    }
}
void h(node *t)
{
    if(deep<n&&t->l!=NULL&&t->r!=NULL)
    {
        deep++;
        h(t->l);
        deep--;
        deep++;
        h(t->r);
        cout<<t->data;
        deep--;
    }
}
int main()
{
    cin>>n;
    cin>>s;
    node *tree;
    create(tree);
    cout<<1<<endl;
    deep=0;
    edit(tree);
    cout<<2<<endl;
    deep=0;
    h(tree);
    cout<<3<<endl;
    cout<<endl;
    return 0;
}
