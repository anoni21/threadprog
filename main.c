#include <stdio.h>
#include "lib.h"

int main (int argc, char * argv[]) {
	//ten chuong trinh la argv[0]	$0 trong shell
	//tham so thu nhat la argv[1]...$1 trong shell

	printf("Thuc hien chuong trinh dang %s  kichthuoc1 kichthuoc2\n", argv[0]);
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	
	printf("Dien tich la %ld\n", dientich(a,b));
	printf("Chu vi la %d\n", chuvi(a,b));

}
