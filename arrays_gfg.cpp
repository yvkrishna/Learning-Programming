#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void max_diff(int arr[], int n){
    int ans = arr[1]-arr[0];
    int min_val = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-min_val > ans)    ans = arr[i]-min_val;
        if(min_val>arr[i])  min_val=arr[i];
    }
    cout<<ans<<endl;
}

void freq_of_sorted_array(int arr[], int n){
    int freq = 1;
    int value = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]==value)   freq++;
        else{
            cout<<value<<" "<<freq<<endl;
            freq=1;
            value = arr[i];
        }
    }
    cout<<value<<" "<<freq<<endl;
}

void buy_and_sell_stock(int arr[], int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            sum+=arr[i]-arr[i-1];
        }
    }
    cout<<sum<<endl;
}

void trapping_rain_water(int arr[], int n){
    // int lmax[n], rmax[n], sum=0, min=0;
    // lmax[0] = arr[0];
    // rmax[n-1] = arr[n-1];
    
    // for(int i=1;i<n;i++){
    //     if(arr[i]>lmax[i-1])    lmax[i]=arr[i];
    //     else    lmax[i]=lmax[i-1];
    // }
    
    // for(int i=n-2;i>=0;i--){
    //     if(arr[i]>rmax[i+1])    rmax[i]=arr[i];
    //     else    rmax[i]=rmax[i+1];
    // }
  
    // for(int i=1;i<n-1;i++){
    //     if(lmax[i]<rmax[i])     min=lmax[i];
    //     else    min=rmax[i];
    //     sum+=min-arr[i];
    // }
    // cout<<sum<<endl;
    
    int sum=0,min=0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[i];
        for(int j=0;j<i;j++)
            if(arr[j]>lmax) lmax=arr[j];
            
        int rmax=arr[i];
        for(int j=i+1;j<n;j++)
            if(arr[j]>rmax) rmax=arr[j];
            
        if(lmax>rmax)   min = rmax;
        else    min = lmax;
        sum+=min-arr[i];
    }
    cout<<sum<<endl;
}

void consecutive_ones(int arr[], int n){
    // int cnt=0, max_cnt=0;
    // bool flag = false;
    
    // for(int i=0;i<n;i++){
    //     if(arr[i]==1 && flag)   cnt++;
    //     else if(arr[i]==1 && !flag){
    //         cnt=1;
    //         flag=true;
    //     }
    //     else if(arr[i]==0){
    //         max_cnt=cnt;
    //         cnt=0;
    //         flag=false;
    //     }
    // }
    // if(cnt>max_cnt) max_cnt=cnt;
    // cout<<max_cnt<<endl;
    
    int ans=0,curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            curr=0;
        }else{
            curr++;
            if(curr>ans) ans=curr;
        }
    }
    cout<<ans<<endl;
}

void max_sub_array(int arr[], int n){
    int res=arr[0];
    int ans = arr[0];
    for(int i=1;i<n;i++){
        res = max(res+arr[i], arr[i]);
        ans = max(ans, res);
    }
    cout<<ans<<endl;   
}

void max_length_even_odd_array(int arr[], int n){
    int cnt=1,ans=1;
    for(int i=1;i<n;i++){
        if(arr[i-1]%2==0 && arr[i]%2!=0)    cnt++;
        else if(arr[i-1]%2!=0 && arr[i]%2==0)   cnt++;
        else    cnt=1;
        
        ans = max(cnt, ans);
    }
    cout<<ans<<endl;
}

void majority(int arr[], int n){
    int cnt=1, res=0;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i])    cnt++;
        else    cnt--;
        if(cnt==0) {
            res=i;
            cnt=1;
        }
    }
    cnt=0;
    for(int i=0;i<n;i++)
        if(arr[i]==arr[res])   cnt++;
        
        if(cnt>n/2) cout<<res<<" -> "<<arr[res]<<endl;
        else    cout<<-1<<endl;
}

void max_k_window_in_array(int arr[], int n){
    int ans=INT_MIN, sum=0;
    int k;
    cin>>k;
    
    for(int i=0;i<k;i++)
        sum+=arr[i];   
    
    ans=sum;
    
    for(int i=k;i<n;i++){
        sum+=arr[i]-arr[i-k];
        ans=max(ans, sum);
    }
    cout<<ans<<endl;
}

void sum_in_array_of_k_window(int arr[], int n){
    int sum=0, k, inp_sum;
    cin>>k>>inp_sum;
    
    for(int i=0;i<k;i++)
        sum+=arr[i];   
    
    for(int i=k;i<n;i++){
        if(sum==inp_sum){
            cout<<"YES"<<endl;
            return;
        }
        sum+=arr[i]-arr[i-k];
    }
    cout<<"NO"<<endl;
}

void is_sum_possible(int arr[], int n){
    int sum=arr[0], inp_sum, window=1;
    cin>>inp_sum;

    for(int i=1;i<n;i++){
        if(sum==inp_sum){
            cout<<"YES"<<endl;
            return;
        }
        if(sum>inp_sum){
            i--;
            window--;
            sum-=arr[i-window];
            continue;
        }
        sum+=arr[i];
        window++; 
    }
    cout<<"NO"<<endl;
}

// void print_nbonacci(){
//     int n,m;
//     cin>>n>>m;
//     int sum=0, window_elem=1;
    
//     for(int i=0;i<n-1;i++)
//         cout<<sum<<" ";
   
//     sum+=1;
//     cout<<sum<<" ";
    
//     for(int i=n;i<=m;i++){
//         cout<<sum<<" ";
//         sum+=sum;
//         if(i%n-1==0)  sum-=window_elem;
//         if(i%(n)==0)  window_elem = sum;
//     }
// }

void get_sum_prefix(int arr[], int n){
    int sum_arr[n];
    sum_arr[0]=arr[0];
    for(int i=1;i<n;i++)
        sum_arr[i] = sum_arr[i-1]+arr[i]; 
        
    
    int r,l;
    cin>>l>>r;
    if(l!=0)    cout<<sum_arr[r]-sum_arr[l-1]<<endl;
    else    cout<<sum_arr[r]<<endl;
}

void check_equalibrium(int arr[], int n){
    int sum=arr[0], l_sum=0;
    for(int i=1;i<n;i++)    sum+=arr[i];
    
    for(int i=0;i<n;i++){
        if(l_sum==sum-arr[i]){
            cout<<"YES"<<endl;
            return;
        }
        l_sum+=arr[i];
        sum-=arr[i];
    }
    cout<<"NO"<<endl;
}

int main() {
    	int n;
    	cin>>n;
	
    	int arr[n];
    	for(int i=0;i<n;i++){
    	    cin>>arr[i];
    	}
	
    // max_diff(arr,n);
    // freq_of_sorted_array(arr,n);
    // buy_and_sell_stock(arr,n);
    // trapping_rain_water(arr,n);
    // consecutive_ones(arr,n);
    // max_sub_array(arr,n);
    // max_length_even_odd_array(arr,n);
    // majority(arr,n);
    // max_k_window_in_array(arr,n);
    // sum_in_array_of_k_window(arr,n);
    // is_sum_possible(arr,n);
    
    // print_nbonacci();
    
    // get_sum_prefix(arr,n);
    check_equalibrium(arr,n);
	return 0;
}
