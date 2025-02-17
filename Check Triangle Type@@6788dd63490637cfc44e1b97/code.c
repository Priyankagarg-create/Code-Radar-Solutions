#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x==y && y==z){
        printf("Equilateral");
    }
    else if(x==y || y==z || x==z){
        printf("Isosceles");
    }
    else(x!=y && y!=z){
        printf("Scalene");
    }
    return 0;
}