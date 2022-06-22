#include <bits/stdc++.h>
using namespace std;

int main() {
  cout<<"======= MAIN USEFUL FUNCTIONS ======="<<endl;
	map<int, string> m;
	m[1]="hello";
	m[2]="world";
	m[4]="hey";
	m[3]="kailasa";
	m.insert({5,"nischal"});
	m.insert({10,"abcdef"});
	
	cout<<m.size()<<" "<<m.empty()<<endl;
	for(auto i:m){
	    cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	
	m.erase(10);
	for(auto i:m){
	    cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	
	map<int, string> m2(m.begin(), m.end());
	for(auto i:m2){
	    cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	m2.erase(m2.begin(), m2.find(3));
	for(auto i:m2){
	    cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	m2.clear();
	cout<<m2.size()<<" "<<m2.empty()<<endl;
	cout<<"======";
	return 0;
}
