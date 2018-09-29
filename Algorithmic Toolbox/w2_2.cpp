#include <bits/stdc++.h>
using namespace std;
int a[10000000];
void fibo(){

	a[0]=0;
	a[1]=1;
	for(int i=2;i<=10000000;i++)
		a[i] = (a[i-1]+a[i-2])%10;

}
int main(){
	fibo();
int n;
cin>>n;
cout<<a[n];


}