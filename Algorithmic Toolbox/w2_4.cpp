#include <bits/stdc++.h>
using namespace std;

int gcd(long long a,long long b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);

}
int main(){
	long long a,b;
	cin>>a>>b;
	if(a>b)
		cout<<(a*b)/gcd(a,b);
	else
		cout<<(a*b)/gcd(b,a);


}