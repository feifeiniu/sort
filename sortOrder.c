#include<stdio.h>
int main()
{
    //√∞≈›≈≈–Ú°§
    int arry[]={10,9,14,5};
    int i;
    int j;
    int tmp;
    int len = sizeof(arry)/sizeof(arry[0]);
    for(i=0;i<len-1;i++){
        for(j=0;j<len-1-i;j++){
            if(arry[j]>arry[j+1]){
            tmp=arry[j+1];
            arry[j+1]=arry[j];
            arry[j]=tmp;
            };
        };
    };
    for(i=0;i<len;i++){
        printf("%d ",arry[i]);
    };
    return 0;
}