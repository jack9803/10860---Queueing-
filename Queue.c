#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct MYQ myq;
struct MYQ{
    char name[20];
};

myq Q[10000000];

int main(){
char cmd[10];
char tmp[20];
int head=0;
int tail=0;
while(scanf("%s",&cmd)!=EOF){
if(strcmp(cmd,"Push")==0){
    scanf("%s",&Q[tail].name);
    tail++;
}else if(strcmp(cmd,"Pop")==0){
    if(head<tail){
        head++;
    }
}else if(strcmp(cmd,"Front")==0){
    if(head>=tail){
        printf("empty\n");
    }else{
        printf("%s\n",Q[head].name);
    }
}
}
return 0;
}
