#include <bits/stdc++.h>
using namespace std;

int main() {
  cout<<"======= MAIN USEFUL FUNCTIONS ======="<<endl;
	set<int, greater<int>> s = {7,7,5,5,0,0};
	s.insert(1);
	s.insert(2);
	s.insert(3);
	
	cout<<s.size()<<endl;
	set<int>::iterator it = s.begin(); 
	for(auto itr=it;itr!=s.end();itr++){
	    cout<<*itr<<" ";
	}
	cout<<endl;
	
	cout<<s.empty()<<endl;
	cout<<s.count(5)<<endl;
	cout<<*s.find(-2)<<endl;
	
	s.erase(s.begin(), s.find(3));
	for(auto i:s){
	    cout<<i<<" ";
	}
	
	set<int> s2(s.begin(),s.end());
	
	set<int>::iterator it2 = s2.begin();
	it2++;
	s2.erase(it2);
	cout<<s2.size()<<endl;
	
	for(auto i:s2){
	    cout<<i<<" ";
	}
	cout<<endl;
	
	s2.clear();
	cout<<s2.size()<<endl;
	cout<<"=======";
	return 0;
}
