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
	cin>>m>>n;
	compute();
	long long rem1= (m+2)%(v.size());
	long long rem2= (n+2)%(v.size());
	long long sum1 = v[rem1]-1;
	long long sum2 = v[rem2]-1;
	if(sum1==-1)	
		sum1 = 9;
	if(sum2==-1)
		sum2 = 9;
	// cout<<sum2<<" "<<sum1<<" "<<<<endl;
	//find sum between  n and m and then add Fm since that is subtracted from sum.
	int mthTerm = v[m%v.size()];
	if(sum2<sum1)
		sum2 = sum2+10;
	long long diff = (sum2 - sum1 + mthTerm)%10;
	cout<<diff<<endl;

}


