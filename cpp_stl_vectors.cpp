#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"======= MAIN USEFUL FUNCTIONS ======="<<endl;
	vector<int> vect;
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
    cout<<vect.size()<<" "<<vect.capacity()<<endl;
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" "<<vect.at(i)<<endl;
    }
    cout<<vect.empty()<<endl;
    cout<<vect.front()<<endl;
    cout<<vect.back()<<endl;
    vect.pop_back();
    cout<<vect.size()<<" "<<vect.capacity()<<endl;
    vect.clear();
    cout<<vect.size()<<" "<<vect.capacity()<<endl;
    
    vector<int> vect2(5,0);
    vector<int> vect3(vect2);
    for(int i=0;i<vect3.size();i++){
        cout<<vect3[i]<<" ";
    }
    cout<<endl<<endl;
    
    cout<<"======= OTHER FUNCTIONS ======"<<endl;
    vect3.insert(vect3.begin(),5);
    for(int i=0;i<vect3.size();i++){
        cout<<vect3[i]<<" ";
    }
    cout<<endl;
    vect3.erase(vect3.begin());
    for(int i=0;i<vect3.size();i++){
        cout<<vect3[i]<<" ";
    }
    cout<<endl;
    vect3.emplace_back(10);
    for(int i=0;i<vect3.size();i++){
        cout<<vect3[i]<<" ";
    }
    cout<<endl;
	return 0;
}
