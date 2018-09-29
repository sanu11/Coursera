#include<bits/stdc++.h>
using namespace std;
std::vector<long long> v;
long long n,m;



void compute(){

	long long nextNum;
	//start from f1 and f2 and iterate till we find next 01 seq. thats the cycle. From there same seq will continue.

	//f0
	v.push_back(0);
	//f1
	v.push_back(1);
	//f2
	v.push_back(1);			
	while(1){
		// cout<<"hi"<<endl;	
		if(v[v.size()-2]==0&&v[v.size()-1]==1){
			v.pop_back();
			v.pop_back();
			
			break;
		}
		nextNum = v[v.size()-2]+v[v.size()-1];
		v.push_back(nextNum%10);

	}

}
int main(){
	

//logic here is that : Sum(Fn) = (Fn-2) -1;
	cin>>n;
	compute();
	long long rem1= (n)%(v.size());
	long long rem2= (n+1)%(v.size());

	cout<<(v[rem1]*v[rem2])%10<<endl;

}