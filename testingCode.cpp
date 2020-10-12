#include <bits/stdc++.h>

using namespace std;
 
 


//c++ templte for help.......................................................................................................................................................

typedef long long ll;

template<typename... T>
void print1(T... t){
	((cout<<t<<" "),...);
}

template<typename... T>
void print2(T... t){
		vector<vector<ll>> ans={t...};
		for(ll i=0;i<(ll)ans.size();i++){
			if(i!=0) cout<<"\t\t";
			else cout<<"\t";
			for(ll j=0;j<(ll)ans[i].size();j++){
				cout<<ans[i][j]<<" ";
			}
			if(i!=(ll)ans.size()-1)
			cout<<endl;
		}
}	
#define deb(...) {cout<<" [ "#__VA_ARGS__<<" : "; print1(__VA_ARGS__); cout<<"]"<<endl; }
#define vdeb(...) {cout<<" [ "#__VA_ARGS__<<" : "; print2(__VA_ARGS__); cout<<"]"<<endl;}

// to return everything in string
#define ret(...) {stringstream returnn;returnn<<__VA_ARGS__;return returnn.str();}

stringstream retvec;
template<typename... T>
void returnvector(T... t){
		vector<vector<ll>> ans={t...};
		for(ll i=0;i<(ll)ans.size();i++){
			for(ll j=0;j<(ll)ans[i].size();j++){
				retvec<<ans[i][j];
				if(j!=(ll)ans[i].size()-1)
					retvec<<" ";
			}
			if(i!=(ll)ans.size()-1)
				retvec<<endl;
		}
}
#define vret(...) {retvec.clear();returnvector(__VA_ARGS__);return retvec.str()};
	


//for loop
#define fo(i,n) for(int i=0;i<(ll)n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
 
 
//to print vector element 
template<typename T>
void printV(T vec){
	fo(i,vec.size()) cout<<vec[i]<<" "<<flush;
	cout<<endl;
	}
	
 
#define M 998244353
const ll INF=ll(1e9+5);
 
//iterate map
template<typename T>
void itR(T map){
	 for(auto itr=map.begin();itr!=map.end();itr++){
				deb(itr->first,itr->second);
			}
	cout<<endl;
}

//c++ template for help.....................................................................................................................................................

string solve(){
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	ret("");
}

int main() {
	cout<<setprecision(10);
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll testCase;
	cin>>testCase;
	for(ll tt=0;tt<testCase;tt++){
		string ans1=solve();
		if(ans1!="")
			cout<<ans1<<endl;
	}
	return 0;
}
