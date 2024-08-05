#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *prv, *nxt;
	Node(int _data)
	{
		data=_data;
		prv=NULL;
		nxt=NULL;
	}
};
struct LinkedList{
	Node *head;
	int sz=0;
	void addnewnode(int pos, int data)
	{
		Node* NewNode=new Node(data);
		if (head == NULL)
		{
			head = NewNode;
			sz++;
			return;
		}
		if (pos == 1)
		{
			NewNode -> nxt = head;
			head -> prv = NewNode;
			head = NewNode;
			sz ++;
			return;
		}
		if (pos == sz+1)
		{
			Node* temp = head;
			while (temp -> nxt != NULL) temp = temp->nxt;
			NewNode -> prv = temp;
			temp -> nxt = NewNode;
			sz ++;
			return;
		}
		int count = 1;
		Node* temp = head;
		while (count < pos)
		{
			temp = temp -> nxt;
			count ++;
		}
		NewNode -> nxt = temp;
		NewNode -> prv = temp -> prv;
		NewNode -> prv->nxt = NewNode;
		temp -> prv = NewNode;
		sz ++;
	}
	void deletenode(int pos)
	{
		Node* temp = head;
		if (sz == 1)
		{
			head = NULL;
			sz --;
			return;
		}
		int count = 1;
		while (count < pos)
		{
			temp = temp -> nxt;
			count ++;
		}
		if (pos == 1)
		{
			temp -> nxt -> prv = NULL;
			head = temp -> nxt;
			sz --;
			return;
		}
		if (pos == sz)
		{
			temp -> prv -> nxt = NULL;
			//head = temp->prv;
			sz --;
			return;
		}
		temp -> prv -> nxt = temp -> nxt;
		temp -> nxt -> prv = temp -> prv;
		sz --;
	}
	void print()
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp -> data << " ";
			temp = temp -> nxt;
		}
		cout << endl;
	}
	int size()
	{
		return sz;
	}
	void printvitri(int pos)
	{
		Node* temp = head;
		int count = 1;
		while (count< pos)
		{
			temp = temp -> nxt;
			count ++;
		}
		cout << temp -> data << endl;
	}
	int find(int _data)
	{
		Node* temp=head;
		int count = 0;
		while (count <= sz)
		{
			count ++;
			temp = temp -> nxt;
			if (temp -> data == _data) 
			{
				return count;
			}
		}
		return 0;
	}
}LinkedList;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i ++)
	{	
		cin >> a[i];
		LinkedList.addnewnode(1, a[i]);
	}
	cout << LinkedList.size() << endl;
	LinkedList.print();
	//LinkedList.deletenode(1);
	//LinkedList.print();
	LinkedList.printvitri(2);
	cout << LinkedList.find(5);
	return 0;
}
