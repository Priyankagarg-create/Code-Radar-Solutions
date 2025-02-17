#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y){
        printf("x");
    }
    else if(y>x){
        printf("y");
    }
    else{
        printf("Both numbers are equal");
    }
    return 0;
}