#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(70);
    v.push_back(0);
    v.push_back(60);
    v.push_back(20);
    v.push_back(10);
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);
    v.push_back(30);
    v.push_back(30);
    
    cout<<binary_search(v.begin(),v.end(),60)<<endl;
    vector<int>::iterator it;
    it = lower_bound(v.begin(),v.end(), 60);
    cout<<it - v.begin()<<endl;
    cout<<"As V is not sorted, we cant have binary search to run perfectly, hence lower_bound also wont work"<<endl;
    
    sort(v.begin(),v.end());
    
    cout<<binary_search(v.begin(),v.end(),60)<<endl;
    it = lower_bound(v.begin(),v.end(), 60);
    cout<<it - v.begin()<<endl;
    
    cout<<"Max element = "<<*max_element(v.begin(),v.end())<<" Min element = "<<*min_element(v.begin(),v.end())<<endl;
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<"sum = "<<sum<<endl;
    find(v.begin(),v.end(),50) != v.end()? cout<<"50 is found\n": cout<<"50 is not found\n";
    cout<<"30 is repeated for "<<count(v.begin(),v.end(),30)<<" times"<<endl;
    
    for(auto it=v.begin();it<v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    rotate(v.begin(),v.begin()+1,v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    for(auto it=v.begin();it<v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl<<endl;
    
    int a=10;
    int b=20;
    cout<<"Before swapping"<<endl<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swapping"<<endl<<a<<" "<<b<<endl;
    cout<<"Max = "<<max(a,b)<<" Min = "<<min(a,b)<<endl<<endl;
    
    string str = "abcdef";
    cout<<str<< " ";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
	return 0;
}
