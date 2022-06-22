#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"======= MAIN USEFUL FUNCTIONS ======="<<endl;
	priority_queue<int> maxi;
	priority_queue<int, vector<int>, greater<int>> mini;
	
	maxi.push(1);
	maxi.push(2);
	maxi.push(0);
	maxi.push(4);
	maxi.push(7);
	maxi.emplace(10);
	
	int maxi_size = maxi.size();
	cout<<maxi_size<<" "<<maxi.empty()<<endl;
	
	for(int i=0;i<maxi_size;i++){
	    cout<<maxi.top()<<" ";    
	    maxi.pop();
	}
	cout<<endl;
	
	mini.push(7);
	mini.push(0);
	mini.push(6);
	mini.push(1);
	mini.push(5);
	mini.push(8);
	
	int mini_size = mini.size();
	cout<<mini_size<<" "<<mini.empty()<<endl;
	
	for(int i=0;i<mini_size;i++){
	    cout<<mini.top()<<" ";    
	    mini.pop();
	}
	cout<<endl;
	cout<<"=======";
	return 0;
}
