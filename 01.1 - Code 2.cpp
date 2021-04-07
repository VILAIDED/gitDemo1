#include <bits/stdc++.h>
int kt(float n) {
if (n < 2 ) return 0;
if (n == (int) n) {
for ( int i =2 ; i*i <= n ; i++)
if ((int) n%i == 0) return 0;
return 1;
}
else return 0;
}
main (){
char so[125];
	fflush(stdin);
	gets(so);
	int a=strlen(so),dem;
	for(int i=0;i<a;i++)
	 if((so[i]<48)||(so[i]>57)){
	 	dem++;
	 	break;
	 }
	if(dem!=0) printf("NO");
	else{
		a=atoi(so);
		if(kt(a)) printf("YES");
		else printf("NO");
}
    for(int j=2;j<=atoi(so);j++){
	     if(kt(j)){
	     	printf("\n%d ",j);}
		 }
		return 0;}

