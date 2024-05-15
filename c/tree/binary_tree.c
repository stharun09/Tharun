//binary tree implementation

//REQUIRED HEADER FILES
#include<stdio.h>
#include<stdlib.h>
//STRUCTURE DECLARATION
struct tree
{
	int idata;
	struct tree *left;//left is a pointer to a data type of struct tree
	struct tree *right;//right is a pointer to a data type of struct tree
};
//FUNCTION DECLARATIONS
struct tree *create();
int main()
{
		struct tree *root=NULL;//root is a pointer points to the structure
		root=create();//funtion to implement the tree hirearchy
}
//FUNCTION FOR IMPLEMENTATION OF TREE NODES
struct tree *create()
{
	struct tree *newnode=(struct tree *)malloc(sizeof(struct tree));

}

