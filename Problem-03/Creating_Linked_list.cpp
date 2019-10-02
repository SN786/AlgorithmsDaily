This program creates linked list by asking user how many node do you want to insert and each element for corresponding node.

Author : Sharif Nawaz
College : Jaypee University of Engineering and Technology,Guna
Year/Department : 2nd/CSE
E-Mail Id : sharifnawaz747@gmail.com

#include<bits/stdc++.h>
using namespace std;

struct node{  //Created structure
int data;
struct node *next;
};
struct node * createNode_List(int);
void display_List(struct node *start);
int main()
{
    int n;
	printf("Enter the number of Nodes : ");
    cin>>n;
    struct node *start=createNode_List(n);
    display_List(start);
    return 0;

}
struct node * createNode_List(int n)  // Dynamically Creating Node
{
    int number;
    struct node * start=NULL;
    struct node * new_node,* temp;
    if(n<=0)
    {
        return NULL;
    }
    start= (struct node *)malloc(sizeof(struct node));
    if(start==NULL)
    {
        cout<<"Memory can not allocated\n";
    }
    else{
        cout<<"Enter number for 1st node\n";
        cin>>number;
        start->data=number;
        start->next=NULL;
        temp=start;
        for(int i=2;i<=n;i++)
        {
            new_node= (struct node * ) malloc(sizeof(struct node));
            if(new_node==NULL)
            {
               cout<<"Memory can not allocated\n";
            }
            else
            {
                cout<<"Enter number for"<<i<<"node\n";
                cin>>number;
                new_node->data=number;
                new_node->next=NULL;
                temp->next=new_node;
                temp=temp->next;
            }
        }


        }
    return start;

}
void display_List(struct node *start)  //Function for Displaying linked List
{
    if(start==NULL)
    {
        cout<<"Empty linked list\n";

    }
    else{
        cout<<"List is given below\n";
        while(start!=NULL)
        {
           cout<<(start->data)<<" "<<endl;
           start=start->next;
        }

        }



}
