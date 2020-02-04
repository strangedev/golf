#include <stdio.h>
int main(int q,char**z){for(int j=1,a=0;j<201;a=0,j++){for(int i=j-1;i>0;i--){a+=(j%i==0?i:0);}if(a>j)printf("%d\n",j);}}