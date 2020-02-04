#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int next_palindrome_number(int m){
	char num[16];

next_number: 
	sprintf(num,"%d",++m);
	for( 
		int l_head= 0, r_head= strlen(num) -1, r_bound= r_head;
		l_head < (r_bound / 2) + 1;
		l_head++
	){
		r_head= r_bound - l_head;
		if(num[l_head] != num[r_head]) goto next_number;
	}
	return m;
}
int main(int argc, char** argv)
{
	int num= atoi(argv[1]);
	int nextnum= next_palindrome_number(num);
	printf("%d\n", nextnum);
}
