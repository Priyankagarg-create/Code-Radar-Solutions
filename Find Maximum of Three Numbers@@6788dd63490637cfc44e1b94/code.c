#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>z && x>y){
        printf(x);
    }
    else if(y>x && y>z){
        printf(y);
    }
    else{
        printf(z);
    }
    return 0;
}