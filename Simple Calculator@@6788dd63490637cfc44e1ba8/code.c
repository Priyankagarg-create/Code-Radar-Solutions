#include<stdio.h>
int main(){
    int x,y;
    char operator;
    scanf("%d",&x);
    scanf("%c",operator);
    scanf("%d",&y);
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