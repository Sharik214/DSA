#include <stdio.h>
void swap(int*xp, int*yp){
    int temp;
    temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selectshort(int A[], int n)
{
int i, j, min;
for(i=0;i<n-1;i++){
    min=i;
    for(j=i+1;j<n;i++){
        if(A[j]<A[min]){
            min=j;
        }
        if(min!=i){
            swap(&A[min],&A[i]);
        }
    }
}
}
void printarray(int A[],int size){
for(int i=0;i<size;i++){
    printf("%d",A[i]);
}
}

int main(){
    int Arr[7]={2,4,1,3,6,5,7};
    int n=sizeof(Arr)/sizeof(Arr[0]);
    selectshort(Arr, n);
    printarray(Arr, n);
    return 0;

}
