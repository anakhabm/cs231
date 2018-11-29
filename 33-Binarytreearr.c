          //ANAKHA BM
          //ROLL_NO:6

#include<stdio.h>

typedef struct node
{
 struct node*left;
 struct node*right;
 char data;
}node;

node* insert(char c[],int n)
{ node*tree=NULL;
 if(c[n]!='\0')
 {
  tree=(node*)malloc(sizeof(node));
  tree->left=insert(c,2*n+1);
  tree->data=c[n];
  tree->right=insert(c,2*n+2);
 }
 return tree;
}
//traverse the tree in inorder
void inorder(node*tree)
{
 if(tree!=NULL)
 {
  inorder(tree->left);
  printf("%c\t",tree->data);
  inorder(tree->right);
 }
}

void main()
{
 node*tree=NULL;
 char c[]={'A','B','C','D','E','F','\0','G','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'};
 tree=insert(c,0);
 inorder(tree);
}
OUTPUT:


Binary Tree
1. Insert
2. Search
3. Delete
4. Print
5. Exit
Enter your choice : 1
Enter data to be inserted : 4
Successfully inserted

        Binary Tree
1. Insert
2. Search
3. Delete
4. Print
5. Exit
Enter your choice : 1
Enter data of the parent node : 4
Enter data to be inserted : 3
Where do you want to enter the data (L/R): l
Successfully inserted

        Binary Tree
1. Insert
2. Search
3. Delete
4. Print
5. Exit
Enter your choice : 1
Enter data of the parent node : 3
Enter data to be inserted : 2
Where do you want to enter the data (L/R): l
Successfully inserted

        Binary Tree
1. Insert
2. Search
3. Delete
4. Print
5. Exit
Enter your choice : 1
Enter data of the parent node : 2
Enter data to be inserted : 3
Where do you want to enter the data (L/R): l
Successfully inserted

        Binary Tree
1. Insert
2. Search
3. Delete
4. Print
5. Exit
Enter your choice : 4
 3 2 3 4
        Binary Tree
1. Insert
2. Search
3. Delete
4. Print
5. Exit
Enter your choice : 2
Enter data to be searched : 2
Node found
Enter data of the node to be deleted : 3
Successfully deleted

        Binary Tree
1. Insert
2. Search
3. Delete
4. Print
5. Exit
Enter your choice : 4
 2 3 4
        Binary Tree
1. Insert
2. Search
3. Delete
4. Print
5. Exit
Enter your choice : 5
