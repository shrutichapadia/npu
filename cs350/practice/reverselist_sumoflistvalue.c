#include <stdio.h>
#include <stdlib.h>
using namespace std;
//! Node to store digits
struct Node{
	short digit;	//doesn't make a difference if I use short or int
	Node* next;
};
//!Function reverses an input list


void reverseList(Node*& head){
	Node* curr = head;
	Node* nxt  = head->next;
	curr->next = NULL;
	while(true){
			head	   = nxt;
			if(head->next==NULL){
				head->next = curr;
				break;
			}
			nxt	   = nxt->next;
			head->next = curr;
			curr	   = head;
	}
}
void sumOfLists(Node*& list1, Node*& list2, Node*& result){
	// Reverse lists: Time: O( m + n). operating on input lists to save space complexity
	reverseList(list1);
	reverseList(list2);
	Node* ptr;
	ptr = new Node();
	result = ptr;
	int n1=0,n2=0,sum=0,carry=0;
	bool n1flag=true,n2flag=true;
	while(n1flag || n2flag){
		n1= n1flag?list1->digit:0;
		n2 = n2flag?list2->digit:0;
		sum = n1+n2+carry;
		carry = (sum>=10)?1:0;
		ptr->digit = (sum-10*carry);
		if(n1flag)
			if(list1->next==NULL)
				n1flag = false;
			else
				list1 = list1->next;
 		if(n2flag)
			if(list2->next==NULL)
		 		n2flag = false;
			else
				list2 = list2->next;
		if(n1flag || n2flag){
			ptr->next = new Node();
			ptr = ptr->next;
		}else
			ptr->next = NULL;
	}
	reverseList(result);
}
void printListValues(Node*& list){
	Node* ptr=list;
	do{
		cout<<ptr->digit<<",";
		ptr = ptr->next;
	}while(ptr->next!=NULL);
	cout<<ptr->digit<<endl;
}
int main(){

	//construct two lists, replace the below digits to test your values
	int myNum1[] = {9,1,2,3,2,9};//First list 912329,
	int myNum2[] = {0,8,0,9};  //second list 0809
	Node *newNd1, *num1, *num2, *result;
	newNd1=new Node;num1 = newNd1;
	int sz = sizeof(myNum1) / sizeof(int);
	for(int i=0;i<sz;++i){
		newNd1->next = (i==sz-1)?NULL:(new Node);
		newNd1->digit = myNum1[i];
		newNd1=newNd1->next;
	}
	newNd1 = new Node;num2 = newNd1;
	sz = sizeof(myNum2) / sizeof(int);
	for(int i=0;i<sz;++i){
		newNd1->digit = myNum2[i];
		newNd1->next = (i==sz-1)?NULL:(new Node);
		newNd1=newNd1->next;
	}
	//Find sum
	sumOfLists(num1,num2,result);	//. Result should be 913138
 	printListValues(result);
}
