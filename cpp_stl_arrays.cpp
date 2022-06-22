#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"======= MAIN USEFUL FUNCTIONS ======="<<endl;
	array<int,4> arr = {1,2,3,4};
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "<<arr.at(i)<<endl;
    }
    cout<<arr.empty()<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl<<endl;
    
    cout<<"======= OTHER FUNCTIONS ======"<<endl;
    array<int,5> arr2 = {0,10,20,30,40};
    array<int,5> arr3;
    arr3.fill(100);
    
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    
    arr2.swap(arr3);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
	return 0;
}
