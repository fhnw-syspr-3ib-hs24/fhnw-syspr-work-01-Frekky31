#include <stdio.h>
#include <stdlib.h>

struct tree
{
	char *label;
	struct tree *left;
	struct tree *right;
};

int main(void)
{
	struct tree *root = malloc(sizeof(struct tree));
	root->label = "root";

	root->left = malloc(sizeof(struct tree));
	root->left->label = "left";
	root->left->left = NULL;
	root->left->right = NULL;

	root->right = malloc(sizeof(struct tree));
	root->right->label = "right";
	root->right->left = NULL;
	root->right->right = NULL;

	print_tree(root);

	free(root->left);
	free(root->right);
	free(root);

	return 0;
}

void print_tree(struct tree *node)
{
	if (node == NULL)
	{
		return;
	}
	printf("%s\n", node->label);
	print_tree(node->left);
	print_tree(node->right);
}
