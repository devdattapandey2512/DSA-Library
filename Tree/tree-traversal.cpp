#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define mod 1000000007
#define inf 1000000000000000001;


using namespace std;

struct Node
{
	int key;
	struct Node* left;
	struct Node* right;

	Node(int k)
	{
		this->key = k;
		right = NULL;
		left = NULL;
	}
};

void inorder(Node* root)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << root->key << " ";
		inorder(root->right);
	}
	else
		return;
}

void preorder(Node* root)
{
	if (root != NULL)
	{
		cout << root->key << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(Node* root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout << root->key << " ";
	}

}
int main()
{
	std::ios::sync_with_stdio(false);

	Node* root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
	postorder(root);
	return 0;
}
