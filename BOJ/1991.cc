#include<iostream>

using namespace std;

int tree[26][2];

void preorder(int a) {
	if (a == -1)return;
	printf("%c", a + 'A');
	preorder(tree[a][0]);
	preorder(tree[a][1]);
}

void inorder(int a) {
	if (a == -1)return;
	inorder(tree[a][0]);
	printf("%c", a + 'A');
	inorder(tree[a][1]);
}

void postorder(int a) {
	if (a == -1)return;
	postorder(tree[a][0]);
	postorder(tree[a][1]);
	printf("%c", a + 'A');
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		a = a - 'A';
		if (b == '.')
			tree[a][0] = -1;
		else
			tree[a][0] = b - 'A';
		if (c == '.')
			tree[a][1] = -1;
		else
			tree[a][1] = c - 'A';
	}
	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);

}