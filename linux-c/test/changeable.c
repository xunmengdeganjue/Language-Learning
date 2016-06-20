#include <stdio.h>
#include <stdarg.h>

/*
*FuncName: max
*Function: find the maxmum number of num numbers.
*Pameters: the count of the numbers,and variable numbers.
*Return values: int,the maxmum number. 
*/
int max(int num,...){
	int m = -0x7fffffff;
	int i ,t;
	va_list ap;
	va_start(ap,num);
	for(i = 0; i < num; i++){
		t = va_arg(ap, int);
		if( t > m ){
			m = t;
		}
	}
	va_end(ap);
	return m;

}

int main(int argc,char ** argv){
	int n = 0;
	n = max(4,2,3,4,5);/*find the maxmum number of the 4 numbers*/
	printf("the rusult is %d\n",n);
	return 0;
}

