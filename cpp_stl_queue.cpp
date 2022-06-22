#include <bits/stdc++.h>
using namespace std;

int main() {
  cout<<"======= MAIN USEFUL FUNCTIONS ======="<<endl;
	queue<string> q;
	q.push("hello");
	q.push("world");
	q.push("hi");
	q.push("kailasa");
	q.push("nischal");
	cout<<q.size()<<" "<<q.front()<<" "<<q.back()<<endl;
	q.pop();
	q.pop();
	q.pop();
	cout<<q.size()<<" "<<q.front()<<" "<<q.back()<<endl;
	cout<<q.empty()<<endl;
	cout<<"=======";
	return 0;
}
