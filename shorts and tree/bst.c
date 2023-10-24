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