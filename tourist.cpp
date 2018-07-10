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
		long long n,k,v;
		cin>>n>>k>>v;
		vector <string> vect;
		vector <string> ans;
		for(int i=1;i<=n;i++){
			string x=to_string(i);
			string y;
			cin>>y;
			x+=y;
			vect.push_back(x);
		}
		int current_last=v*k%n;
		int current=current_last;
		for(int i=0;i<k;i++){
		if(current==0){
		current=n;
		}
		string y=vect[current-1];
		ans.push_back(y);
		current-=1;
		}
		sort(ans.begin(),ans.end());
		cout<<"Case #"<<cases<<": ";
		for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";	
		}
		cout<<endl;
	}
 	return 0;
}
