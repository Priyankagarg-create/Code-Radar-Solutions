#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y>z && x>z>y){
        printf('x');
    }
    else if(y>x>z && y>z>x){
        printf('y');
    }
    else{
        printf('z');
    }
    return 0;
}