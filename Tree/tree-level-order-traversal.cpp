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

void levelorder(Node* root)
{
	if (root != NULL)
	{
		queue<Node*> q;
		q.push(root);
		while (q.empty() == false)
		{
			Node*curr = q.front();
			q.pop();

			cout << curr->key << " ";
			if (curr->left != NULL)
				q.push(curr->left);
			if (curr->right != NULL)
				q.push(curr->right);
		}
	}
}
int main()
{
	std::ios::sync_with_stdio(false);

	Node* root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	levelorder(root);
	return 0;
}
