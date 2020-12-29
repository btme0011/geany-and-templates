#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
using namespace __gnu_pbds; 

//c++ templte for help.......................................................................................................................................................

typedef long long ll;

template<typename... T>
void print1(T... t){
    ((cerr<<t<<" "),...);
}

template<typename... T>
void print2(T... t){
        vector<vector<ll>> ans={t...};
        for(ll i=0;i<(ll)ans.size();i++){
            if(i!=0) cerr<<"\t\t";
            else cerr<<"\t";
            for(ll j=0;j<(ll)ans[i].size();j++){
                cerr<<ans[i][j]<<" ";
            }
            if(i!=(ll)ans.size()-1)
            cerr<<endl;
        }
}    
#define deb(...) {cerr<<" [ "#__VA_ARGS__<<" : "; print1(__VA_ARGS__); cerr<<"]"<<endl; }
#define vdeb(...) {cerr<<" [ "#__VA_ARGS__<<" : "; print2(__VA_ARGS__); cerr<<"]"<<endl;}

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
#define vret(...) {retvec.clear();returnvector(__VA_ARGS__);return retvec.str();}
    


//for loop
#define fo(i,n) for(int i=0;i<(ll)n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
 
 
//to print vector element 
template<typename T>
void printV(T vec){
    fo(i,vec.size()) cout<<vec[i]<<" "<<flush;
    cout<<endl;
    }
    
 
#define M ll(998244353)
const ll INF=ll(1e9+5);
 
//iterate map
template<typename T>
void itR(T map){
     for(auto itr=map.begin();itr!=map.end();itr++){
                deb(itr->first,itr->second);
            }
    cout<<endl;
}

typedef tree<
ll,
null_type,
greater<int>,
rb_tree_tag,
tree_order_statistics_node_update>
pods;
 

//c++ template for help.....................................................................................................................................................

string solve(){
	// TAKE TIME TO THINK		:		|
	// TAKE TIME TO THINK		:			|	
	// TAKE TIME TO THINK			---			|		// TAKE TIME TO THINK
	// TAKE TIME TO THINK		:			|
	// TAKE TIME TO THINK		:		|
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
ret("");	
}

int main() {
    cout<<setprecision(15);
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //ll testCase;
    //cin>>testCase;
    //for(ll tt=0;tt<testCase;tt++){
        string ans1=solve();
        if(ans1!="")
            cout<<ans1<<endl;
    //}
    return 0;
}













