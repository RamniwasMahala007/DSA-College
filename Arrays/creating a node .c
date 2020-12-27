//creating a single linked list program in c 
//so first how to create a node so see program below

#include<stdio.h>
#include<stdlib.h>            //here this library required to call malloc function


struct node
{
	int data;
	struct node*link;         // here pointer link(*link) repersent the next struct node
};
int main()
{
	struct node *head=NULL;   // here *head point to struct node to  first node
	head=(struct node*)malloc(sizeof(struct node)); // (struct node*) is typecast it is not madatory to write 
	                                              // malloc help to create first node 
	                                                
	
	head->data=90;             // ->(arrow operator accessing to data
	head->link=NULL;
	
	printf("%d",head->data);
	return 0;
}

