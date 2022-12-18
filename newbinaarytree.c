#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
	struct node *left, *right;
};

struct node* newNode(int item)
{
	struct node* temp
		= (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->key);
		inorder(root->right);
	}
}
void preorder(struct node* root)
{
	if (root != NULL) {
		printf("%d ", root->key);
        preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node* root)
{
	if (root != NULL) {
        postorder(root->left);
		postorder(root->right);
        printf("%d ", root->key);
	}
}
struct node* minValueNode(struct node* node)
{
	struct node* current = node;
	while (current && current->left != NULL)
		current = current->left;

	return current;
}
struct node* insert(struct node* node, int key)
{
	if (node == NULL)
		return newNode(key);
	if (key < node->key)
		node->left = insert(node->left, key);
	else
		node->right = insert(node->right, key);
	return node;
}

struct node* deleteNode(struct node* root, int key)
{
	if (root == NULL)
		return root;

	if (key < root->key)
		root->left = deleteNode(root->left, key);

	else if (key > root->key)
		root->right = deleteNode(root->right, key);

	else {
		if (root->left == NULL) {
			struct node* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			struct node* temp = root->left;
			free(root);
			return temp;
		}
		struct node* temp = minValueNode(root->right);
		root->key = temp->key;
		root->right = deleteNode(root->right, temp->key);
	}
	return root;
}
struct node *search(struct node *ptr, int searc)
{
    if (ptr == NULL)
    {
        return NULL;
    }
    else if (searc < ptr->key)
        return search(ptr->left, searc);
    else if (searc > ptr->key)
        return search(ptr->right, searc);
    return ptr;
}





struct node* roos = NULL;

void main()
{
	

    int choice,val;
    struct node* pt;
    printf("\n>>>1.insertion>>>2.deleted>>>3.search>>>4.inorder>>>5.preorder>>>6.postorder\nEnter the Choice of oeperations:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter the value to be inserted:");
            scanf("%d",&val);
            roos=insert(roos,val);
            break;
        case 2:
            printf("Enter the value to be deleted:");
            scanf("%d",&val);
            roos = deleteNode(roos,val);
            break;
        case 3:
            printf("\nEnter the key to searched:");
            scanf("%d", &val);
            pt = search(roos,val);
            if (pt == NULL)
            {
                printf("\nKey is not presented in the tree.");
            }    
            else
            {
                printf("\nKey is presented in the list.");
            }
            break;
        case 4:
                printf("inorder Traversal\n");
                inorder(roos);
                break;
        case 5:
                printf("preorder Traversal\n");
                preorder(roos);
                break;
        case 6:
                printf("postorder Traversal\n");
                postorder(roos);
                break;                
    }
	main();
}
