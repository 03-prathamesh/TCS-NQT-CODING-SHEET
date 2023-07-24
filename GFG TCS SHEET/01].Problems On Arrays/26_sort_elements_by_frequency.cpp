#include <bits/stdc++.h>
using namespace std;

bool sortByFrequency(pair<int,int>&a,pair<int,int>&b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second>b.second;
}

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr;
	    vector<pair<int,int>>p;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        arr.push_back(a);
	    }
	   //  for(int i=0;i<arr.size();i++){
	   //     cout<<arr[i]<<endl;
	   // }
	    map<int,int>mp;
	    for(auto x:arr){
	        mp[x]++;
	    }
	    for(auto x:mp){
	        p.push_back(x);
	    }
	    sort(p.begin(),p.end(),sortByFrequency);
	    
	   //// int n;
    //     cin >> n;
    //     vector<int> arr;
    //     map<int, int> mp;

    //     for (int i = 0; i < n; i++) {
    //         int a;
    //         cin >> a;
    //         arr.push_back(a);
    //         mp[a]++;
    //     }

    //     vector<pair<int, int>> p(mp.begin(), mp.end());
    //     sort(p.begin(), p.end(), sortByFrequency);

	    int i=0;
	    for(auto x:p){
	        int element=x.first;
	        int frequency=x.second;
	        for(int j=0;j<frequency;j++){
	            arr[i]=element;
	            i++;
	        }
	    }
	    for(int i=0;i<arr.size();i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	  
	return 0;
}