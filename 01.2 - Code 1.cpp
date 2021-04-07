#include <bits/stdc++.h>
int shh(int n){
	int i,s=0;
	for (i=0;i<n;i++){
		if (n%i==0) s+=i;
		if (s==n) return 1; else return 0;
	}
}
void Nhap(int a[], int n){
	int i;
	for (i=0;i<n;i++){
		printf ("a[%d]=",i);
		scanf ("%d",&a[i]);
	}
}
void Xuat(int a[], int n){
	int i;
	for (i=0;i<n;i++) printf ("%d ",a[i]);
}
void LietKeMang(int a[], int n)
{
	for (int i = 0; i < n;i++)
	if (shh(a[i])==1) 
		printf("%5d", a[i]);
}
main (){
	int a[1000];
	int n;
	printf ("Nhap n=");
	scanf ("%d",&n);
	Nhap (a,n);
	Xuat (a,n);
	printf ("\nCac so hoan hao trong mang  ");
	LietKeMang (a,n);
}


