#include<stdio.h>
int main()
{
    int array[]= {10,9,14,5};
    int i,j,tmp;
    int len = sizeof(array)/sizeof(array[0]);
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(array[i]>array[j]){
                tmp=array[j];
                array[j]=array[i];
                array[i]=tmp;
            }
        }
    }
    for(i=0;i<len;i++){
        printf("%d ",array[i]);
    }
    return 0;
}