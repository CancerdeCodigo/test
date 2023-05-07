#include<stdio.h>
#include<stdlib.h>

int main(){
    int op,a, res;
    printf("DAME UN NUMERO\n");
    scanf("%d",&op);
    printf("%d",op);
    printf("Dame otro numero\n");
    scanf("%d",&a);
    printf("%d",a);
    res=op+a;
    printf("%d",res);
    return 0;
}