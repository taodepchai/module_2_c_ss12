#include<stdio.h>
#include<stdbool.h>
bool compare(int a,int b) {
	if (a<b) {
		return (true); 
	} else return false;
}
int main() {
	int a,b,c;
	printf("nhap 3 so a b c ");
	scanf("%d%d%d" , &a, &b, &c);
	printf("%d + %d = %d \n" , a ,b, a+b);
	if ( compare(a,b) ) {
		printf("%d - %d = %d\n", b, a, b-a);
	} else printf("%d - %d = %d\n",a,b,a-b);
	
	printf("%d + %d = %d \n" , c ,b, c+b);
	if ( compare(c,b) ) {
		printf("%d - %d = %d\n", b, c, b-c);
	} else printf("%d - %d = %d\n",c,b,c-b);
	
	printf("%d + %d = %d \n" , a ,c, a+c);
	if ( compare(a,c) ) {
		printf("%d - %d = %d\n", c, a, c-a);
	} else printf("%d - %d = %d\n",a,c,a-c);
}
