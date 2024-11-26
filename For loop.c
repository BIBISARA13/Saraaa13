#include< stdio.h>
int main () {
   int num;
printf("enter a number to generate its multiplication table:");
scanf ("%d",&num);

for(int i=1;i<=10;i++){
print ("%dx%d=%d\n",num,i,num*i);
}
return0;
}
