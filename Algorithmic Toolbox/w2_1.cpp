#include <bits/stdc++.h>
using namespace std;
int a[46];
void fibo(){

	a[0]=0;
	a[1]=1;
	for(int i=2;i<=45;i++)
		a[i] = a[i-1]+a[i-2];

}
int main(){
	fibo();
int n;
cin>>n;
cout<<a[n];


}