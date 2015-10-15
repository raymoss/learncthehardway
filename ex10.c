#include<stdio.h>
int main(int argc,char **argv){
	int i;
	argv=argv+1;
	for(i=1;i<argc;i++){
		printf("arguments values %d =%s \n",i,*argv);
		printf("the 2 nd character using array=%c \n",(*argv)[1]);
		*argv=*argv+1;
		printf("the 2 nd character = %c \n",**argv);
		argv=argv+1;	
	}
return 0;

}
