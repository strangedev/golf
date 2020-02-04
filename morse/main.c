#include <stdio.h>

char t[] = "\0TEMNAIOGKDWRUS~.QZYCXBJP\0L-FVH09\08\0\0\07\0\0\0\0\0\0\061\0\0\0\0\0\02\0\0\03\045";
int main(int argc, char**argv){
	int i = 1;
	for( char* c = argv[1]; (*c) != 0; c++ )
	{
		if(*c==' '){
			printf("%c", t[i-1]);
			i = 1;
		} else 
			i = i*2 + ((*c) == '.' ? 1 : 0);
	}
	printf("\n");
}