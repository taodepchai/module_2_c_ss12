#include<stdio.h>
#include<stdbool.h>
bool compare(int a,int b) {
	if (a>b) {
		return (true); 
	} else return false;
}
bool devide(int a,int b) {
	if (a%b == 0) {
		return (true); 
	} else return false;
}
int main() {
	int a,b,c;
	printf("nhap 3 so a b c ");
	scanf("%d%d%d" , &a, &b, &c);
	printf("%d * %d = %d \n" , a ,b, a*b);
	if ( compare(a,b) ) {
		if ( devide(a,b) ) {
			printf(" %d / %d = %d\n" ,a, b,a/b);
		} else printf("%d khong chia het cho %d\n", a,b);
	} else {
		if ( devide(b,a) ) {
			printf(" %d / %d = %d\n", b, a, b/a);
		} else printf("%d khong chia het cho %d\n", b,a);
	}
	
	printf("%d * %d = %d \n" , c ,b, c*b);
	if ( compare(c,b) ) {
		if ( devide(c,b) ) {
			printf(" %d / %d = %d\n" ,c, b,c/b);
		} else printf("%d khong chia het cho %d\n", c,b);
	} else {
		if ( devide(b,c) ) {
			printf(" %d / %d = %d\n" ,b, c, b/c);
		} else printf("%d khong chia het cho %d\n", b,c);
	}
	
	
	printf("%d * %d = %d \n" , a ,c, a*c);	
	if ( compare(a,c) ) {
		if ( devide(a,c) ) {
			printf(" %d / %d = %d\n" ,a, c,a/c);
		} else printf("%d khong chia het cho %d\n", a,c);
	} else {
		if ( devide(c,a) ) {
			printf(" %d / %d = %d\n" ,c, a, c/a);
		} else printf("%d khong chia het cho %d\n", c,a);
	}
	
		
}
