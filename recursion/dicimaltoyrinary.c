#include<stdio.h>
void decimaltotrinary();
int main(){
int num;
printf("Enter a numbers You'r Choice ! :");
scanf("%d",&num);
decimaltotrinary(num);
}
void decimaltotrinary(int num){
if (num>=0) {
printf("%d",num%3);
}
}