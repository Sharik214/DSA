#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*right;
    struct node*left;
};
struct node*root=NULL;
int main(){
    create_tree();
printf("pre_oder traversal")
    pre_oder();
    printf("in_oder traversal")
    in_oder();
    printf("post_oder traversal")
    post_oder();
    
    return 0;
}
void create_tree(){
    int n 
    printf("enter number of node");
    scanf("%d",n);
    for (int i=0;i<=n;i++) {
        struct node*temp;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",temp->data);
        if (root==NULL) {
        root=temp;
        }  
        else{
            while (1) {
            if (temp->data<trav->data) {
            if (trav->left=NULL) {
            trav->left=temp;
            break;
            }
            else{
                trav=trav->left;
            }
            else if(temp->data<trav->data){
                trav->right=NULL;
                trave->right=temp;
                break;
            }
            else{
                trav=trav->right;
            }
            else if (trave->data ==temp->data){
                printf("invaild node");
                contine;
            }
            

            }
        }
        }  
    }

}
void pre_order(){
    if(root==NULL){
 return 0;
    }
else{
     printf("%d",root->data);
    pre_order(root->left);
    pre_order(root->right);
    
}
}
void in_order(){
    if(root==NULL){
 return 0;
    }
else{
     
    in_order(root->left);
     printf("%d",root->data);
    in_order(root->right);
    
}
}
 void in_order(){
    if(root==NULL){
 return 0;
    }
else{
     
    post_order(root->left);
     post_order(root->right);
     printf("%d",root->data);
    
    
}
}

