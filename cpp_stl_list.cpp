#include <bits/stdc++.h>
using namespace std;

int main() {
  cout<<"======= MAIN USEFUL FUNCTIONS ======="<<endl;
	list<int> l;
	l.push_back(1);
	l.push_front(2);
	l.push_back(3);
	l.push_front(4);
	for(auto i:l){
	    cout<<i<<" ";
	}
	cout<<endl;
	l.pop_back();
	l.pop_front();
	for(auto i:l){
	    cout<<i<<" ";
	}
	cout<<endl;
	cout<<l.size()<<endl;
	l.push_back(1);
	l.push_front(2);
	l.push_back(3);
	l.push_front(4);
	l.erase(l.begin());
	for(auto i:l){
	    cout<<i<<" ";
	}
	cout<<endl;
	l.clear();
	cout<<l.size()<<endl<<endl;
    
    cout<<"====== OTHER FUNCTIONS ======="<<endl;
    list<int> l2(5,10);
    for(auto i:l2){
	    cout<<i<<" ";
	}
	cout<<endl;
	list<int> l3(l2);
	l3.push_front(17);
	l3.push_back(17);
	for(auto i:l3){
	    cout<<i<<" ";
	}
	return 0;
}
