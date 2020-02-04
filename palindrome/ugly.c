#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int n(int m){char b[11];t:sprintf(b,"%d",++m);for(int i=0,l=strlen(b)-1,j;i<(l/2)+1;i++){j=l-i;if(b[i]!=b[j])goto t;}return m;}
int main(int argc, char** argv)
{
	int num = atoi(argv[1]);
	int nextnum = n(num);
	printf("%d", nextnum);
}
