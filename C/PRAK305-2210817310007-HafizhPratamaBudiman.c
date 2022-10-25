#include <stdio.h>
int main() {

	int sec,d,h,m,s;

	printf("Input waktu dalam detik : ");
	scanf("%d", &sec);

s=(sec % 60);
m=(sec % 3600) / 60;
h=(sec % 86400) / 3600;
d=(sec % (86400 * 30)) / 86400;
	
printf("%d Hari %d:%d:%d\n",d,h,m,s);

}