#include <stdio.h>
#include "libmy.h"
void main () {
	int a,b;
	printf ("Moi nhap vao so a: ");

	scanf("%d", &a);
	printf ("Moi nhap vao so b: ");
	scanf ("%d", &b);

	printf("Tong cua 2 so la %d\n", cong(a,b));
	printf("Tich cua 2 so la %ld\n", nhan(a,b));
}

