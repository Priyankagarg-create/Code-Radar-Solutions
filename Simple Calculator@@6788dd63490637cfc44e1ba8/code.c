#include<stdio.h>
int main(){
    int x,y;
    char operator;
    scanf("%d%d",&x,&y);
    scanf("%c",operator);
    switch(operator){
    case '+':printf("%d%d%c",&x,&y,operator, xy+);
    break;
    case '-':printf("%d%d%c",&x,&y,operator, xy-);
    break;
    case '*':printf("%d%d%c",&x,&y,operator, xy*);
    break;
    case '/':printf("%d%d%c",&x,&y,operator, xy/);
    break;
    default:printf("Invalid");
    return 0;
}
}