#include <bits/stdc++.h>
using namespace std;

int main() {
  cout<<"======= MAIN USEFUL FUNCTIONS ======="<<endl;
	stack<string> s;
	s.push("hello");
	s.push("world");
	s.push("hi");
	s.push("kailasa");
	s.push("nischal");
	cout<<s.size()<<" "<<s.top()<<endl;
	s.pop();
	s.pop();
	s.pop();
	cout<<s.size()<<" "<<s.top()<<endl;
	cout<<s.empty()<<endl;
	cout<<"=======";
	return 0;
}
