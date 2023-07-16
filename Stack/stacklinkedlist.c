#include<stdio.h>
#include<stdio.h>
struct node{
int data;
struct node * next
};
struct node *top==null;
void push(int item);
void pop();
void veiw();


struct node *top=NULL;
int main(){
     int ch;
    printf("1 for push 2 for pop 3 for view \n");
    scanf("%d",&ch);
    if(ch==1){
        printf("enter the push element");
        scanf("%d",&item);
        push(item);
}
    else if (ch==2){
        item=pop();
    }
        if(item==-1){
            printf("under flow");
        }
        else{
            printf("poped item %d");
    }

         else if(ch==3){
              view();
}
else{
printf("illegal entry");
}
    }
void push(int item){
    temp=(struct node*)malloc(sizeof(struct node));
    if(top==NULL){
        
        printf("stack overflow")
    }
    else {
    temp->data=item;
    temp=NULL;
    }
    if(top==NULL){
        top=temp;

    }
    else {
    temp->next=top;
    top=temp;
    }
    void pop(){
        if(top==NULL){
            printf("under flow");
            return -1;
        }
        else{
            item=temp->data;
            temp=top;
            top=top->next;
            free(temp);
            return temp;
        }
    
    }
    
}
void view(){
    if (top==NULL) {
    printf("stack empty");
    }
    else {
    for (int i=0; i<top; i++) {
        printf(:"%d",stack[i]);
    }
}
}
