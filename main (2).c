#include<stdio.h>
int is_sorted(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i]+1){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d\n",is_sorted(arr,n));
    return 0;
}