#include<stdio.h>
int main(int argc,char **arg){
char name[4]="a";
printf("each name value = %c %c %c %c \n",name[0],name[1],name[2],name[3]);
printf("name value = %s\n",name);
name[0]="M";
name[1]='o';
name[2]='s';
name[3]='s';
printf("new name value each = %c %c %c %c\n",name[0],name[1],name[2],name[3]);
printf("printing out name = %s\n",name);
return 0;
}
