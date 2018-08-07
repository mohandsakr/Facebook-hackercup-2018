//proiblem link:https://www.facebook.com/hackercup/problem/1632703893518337/
//status:Accepted.

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	int cases=0;
	while(t--){
		++cases;
		unsigned long long n,k,v;
		cin>>n>>k>>v;
		vector <string> vect;
		vector <int> ans;
		for(int i=1;i<=n;i++){
			string y;
			cin>>y;
			vect.push_back(y);
		}
		
		
		int current_last=v*k%n;
		int current=current_last;
		for(int i=0;i<k;i++){
		if(current==0){
		current=n;
		}
	
		
	
		ans.push_back(current);
		current-=1;
		
		}
		
		sort(ans.begin(),ans.end());
		cout<<"Case #"<<cases<<": ";
		int len;
		for(int i=0;i<ans.size();i++){
		cout<<vect[ans[i]-1]<<" ";	
		}
		cout<<endl;

	}
	
	
	
 	return 0;
}
