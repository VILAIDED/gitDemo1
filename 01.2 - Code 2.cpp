#include<bits/stdc++.h>
using namespace std;
void sohoanhao(int n, vector<string> s){
	int i,j,dem=0,tong=0,k=0;int a[100];
	for(i=0;i<n;i++){
		for(j=0;j<s[i].size()-1;j++){
	      if((s[i][j]<'0')||(s[i][j]>'9')) ++dem;
	}                             		
	if(dem==0){
	stringstream num(s[i]);
	num>>a[k];
	  ++k;
	} 
	dem=0;        
	}
		cout<<endl;
	cout<<"b/ CAC SO HOAN HAO TRONG MANG LA:"<<endl;
	for(i=0;i<k;i++){
		for(j=1;j<a[i];j++){
			if(a[i]%j==0) tong=tong+j;
		}
		if(tong==a[i]) cout<<a[i]<<"  ";
		tong=0;
	}
}
void xuat(int n, vector<string> &s){
	int i;
	cout<<"a2/ CAC PHAN TU CUA MANG A LA: \n"<<endl;
    for(i=0;i<n;i++){
    	cout<<s[i]<<"  ";
	}
}
void nhap(int n, vector<string> &s){
	char a[100];int i;
	cout<<"a1/ NHAP CAC PHAN TU CUA MANG A: \n"<<endl;
   	cin.ignore();
    for(i=0;i<n;i++){
    	cout<<"A["<<i<<"]=";	
	    cin.getline(a,100);
	     s.push_back(a);
	}

}
main(){
	vector<string> s;int n;
	cout<<"Nhap so phan tu: \n";
	cin>>n;
	nhap(n,s);
	xuat(n,s);
    sohoanhao(n,s);

 }
