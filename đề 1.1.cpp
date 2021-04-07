#include <stdio.h>
#include <conio.h>
#include <math.h>
int kt(int n)
{int i;
if (n<2) return 0;
for (i=2;i<=(int)sqrt(n);i++)
if (n%i==0) return 0;
return 1;
}
main (){
	int k, i, n;
	printf ("Nhap n=");
	scanf ("%d",&n);
	if (kt(n)) printf ("La so nguyen to\n");
	else printf ("Khong phai la so nguyen to\n");
	printf ("Nhung so nguyen to nho hon %d la\n",n);
	for (i=2;i<=n;i++){
		if (kt(i)) printf (" %d ",i);
	}
}
