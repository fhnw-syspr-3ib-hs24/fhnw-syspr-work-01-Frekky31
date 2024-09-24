#include <stdio.h>
#include <stdlib.h>

struct tree
{
	char *label;
	struct tree *left;
	struct tree *right;
};

// main function
int main(void)
{
	// Create a tree
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

	// Print the tree
	printf("Root: %s\n", root->label);
	printf("Left: %s\n", root->left->label);
	printf("Right: %s\n", root->right->label);

	// Free the tree
	free(root->left);
	free(root->right);
	free(root);

	return 0;
}
