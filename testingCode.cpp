#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
using namespace __gnu_pbds; 

//c++ templte for help.......................................................................................................................................................
typedef long long ll;
#define M ll(998244353)
const ll INF=ll(1e17+5);



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


//for loop
#define fo(i,n) for(int i=0;i<(ll)n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
 
 
//to print vector element 
template<typename T>
void printV(T vec){
    fo(i,vec.size()) cout<<vec[i]<<" "<<flush;
    cout<<endl;
    }
    

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
greater_equal<ll>,	// less for set and  less_equal for  multiset
					// greater to find no of element striclty greater and less to find no of element strictly less
rb_tree_tag,
tree_order_statistics_node_update>
pods;

 
//mod
template<typename... T>
ll mod_Add(T... t){
	ll ans=0;
    ((ans=(((ans%M)+(t%M))%M)),...);
    return ans%M;
}
#define mod_add(...) mod_Add(__VA_ARGS__)

ll mod_sub(ll a,ll b){
	return (a%M-b%M+M)%M;
}

template<typename... T>
ll mod_Mul(T... t){
	ll ans=1;
    ((ans=(((ans%M)*(t%M))%M)),...);
    return ans%M;
}
#define mod_mul(...) mod_Mul(__VA_ARGS__)

//take n and array
#define s_tart int n;cin>>n;vector<ll> vec(n);for(auto &x:vec) cin>>x;


//c++ template for help.....................................................................................................................................................


string solve(){
	// TAKE TIME TO THINK		:		|				// 	THINK BRUTE FORCE AND OPTIMIZE
	// TAKE TIME TO THINK		:			|			// 	LEAVE
	// TAKE TIME TO THINK			---			|		// 	TAKE TIME TO THINK
	// TAKE TIME TO THINK		:			|			// 	HELP FROM EXAMPLE
	// TAKE TIME TO THINK		:		|				// 	KEEP QUESTION CLEAR IN MIND
														// 	OVERFLOW
														//	CODE WITH EDGE CASE
														// 	CONSIDER THE BLACK AREA
														/* 	1) MAKE SURE THE ALGO WILL WORK 
																	(IF NOT GETTING IDEA USE PAPER OR WALK OR TAKE REST OR SEE OTHER QUESTION)
														 * 	2) THINK THE PROCESS OF CODING  
														 * 	3) CODE PERFECTLY AND BE CRYSTAL CLEAR ABOUT EVERY THING YOU CODE AND CODE WITH PRESENCE OF MIND
																	(USE FUNCTION AND DESCRIBING VARIABLE NAMES)  
														 * 	4) IF WRONG ANS CHECK CODE FIRST THEN ALGO
														 * 	5) DIFFERENT INPUT
														 *  6) CODE AGAIN*/
	
	
	
		
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
