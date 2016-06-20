#include <stdio.h>

int main(){
	
	char line[1024] = {0};
	//int n ;
	
	printf("enter something!\n");
	
	while((fgets(line,128,stdin)) != NULL){
		printf("the content of the line is %s\n",line);
	}

}
