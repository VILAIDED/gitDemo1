#include<bits/stdc++.h>
int shh(int n){
	int s=0;
	for(int i=1;i<=n/2;i++)
	if(n%i==0) s+=i;
	if(n==s) return 1;
	return 0;
	}
int main(){
	char so[156];
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
		if(shh(a)) printf("YES");
		else printf("NO");
	}
}
