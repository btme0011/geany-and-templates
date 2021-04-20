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
            if(i==0) cerr<<endl;
            for(ll j=0;j<(ll)ans[i].size();j++){
				cerr << left << setw(10) << setfill(' ') <<ans[i][j];
            }
            if(i!=(ll)ans.size()-1)
            cerr<<endl;
        }
}    
#define deb(...) {cerr<<" [ "#__VA_ARGS__<<" : "; print1(__VA_ARGS__); cerr<<"]"<<endl; }
#define vdeb(...) {cerr<<" [ "#__VA_ARGS__<<" : "; print2(__VA_ARGS__); cerr<<"]"<<endl;}

// to return everything in string
#define ret(...) {stringstream returnn;returnn<<__VA_ARGS__;return returnn.str();}

typedef tree<
ll,
null_type,
greater_equal<ll>,	// less for set and  less_equal for  multiset
					// greater to find no of element striclty greater and less to find no of element strictly less
rb_tree_tag,
tree_order_statistics_node_update>
pods;
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set



#define M ll(1e9+7)
const ll INF=ll(1e18+10);
template<typename T>void printV(T vec){for(auto x:vec) cout<<x<<" "<<flush;cout<<endl;}
template<typename... T>ll mod_sum(T... t){ll ans=0;((ans=(((ans%M)+(t%M))%M)),...);return ans%M;}
ll mod_diff(ll a,ll b){return (a%M-b%M+M)%M;}
template<typename... T>ll mod_mul(T... t){ll ans=1;((ans=(((ans%M)*(t%M))%M)),...);return ans%M;}
template <class T> T gcd(T a , T b){ while(a != 0){T temp = a; a = b % a; b = temp;}return b;}
template <class T> T egcd(T a , T b , T &x , T &y){T gcd , xt , yt;if(a == 0){gcd = b;x = 0 , y = 1;}else {gcd = egcd(b % a , a , xt , yt);x = yt - (b/a)*xt; y = xt;}return gcd;}
template <class T> T expo(T base , T exp , T mod){T res = 1;base = base % mod;while (exp > 0){if (exp & 1)res = (res*base) % mod;exp = exp>>1;base = (base*base) % mod;}return res;}
template <class T> T modinv(T a , T mod){T x , y; egcd<T>(a , mod , x , y);while(x < 0) x += mod; while(x >= mod) x -= mod; return x;}
template <class T> T modinvfermat(T a , T mod){return expo<T>(a , mod - 2 , mod);}
template <class T> T mceil(T a, T b){if(a % b == 0) return a/b; else return a/b + 1;}
template <class T> T lcm(T a, T b){return (a*b)/gcd<T>(a, b);}


//c++ template for help.....................................................................................................................................................


string solve(){
/*	TAKE TIME TO THINK		:		|					1) MAKE SURE THE ALGO WILL WORK
	TAKE TIME TO THINK		:			|			 			*WRITE DOWN OBSERVATION
	TAKE TIME TO THINK			---			|		 			*ASK QUESTION AFTER EVERY STEP OF THE DECISION WILL IT WORK AND PROVE IT?
	TAKE TIME TO THINK		:			|			 			*KEEP QUESTION CLEAR IN MIND
	TAKE TIME TO THINK		:		|							*IF NOT GETTING IDEA USE PAPER OR WALK OR TAKE REST OR SEE OTHER QUESTION
																*THINK BRUTE FORCE AND OPTIMIZE
																*SOLVE SIMPLER VERSION OF THE PROBLEM
																*HELP FROM EXAMPLE(CHECK YOUR ALGO ON EXAMPLE)
		DEBUG													* LEAVE
1) 	CODE(CONSIDER THE BLACK AREA)						2) THINK THE PROCESS OF CODING					 	
2) 	ALGO														*IF THE ALGO IS COMPLICATED WRITE THE CLEAR PROCESS ON PAPER THEN CODE
3) 	OVERFLOW 													*KEEP THINGKING OF EDGE CASE ALSO
4)	DIFFERENT INPUT 									3) CODE PERFECTLY AND FAST BE CRYSTAL CLEAR ABOUT EVERY THING YOU CODE , CODE WITH PRESENCE OF MIND
5) 	CODE AGAIN													*USE FUNCTION AND DESCRIBING VARIABLE NAMES
6) 	MAP KA DIKKAT TO SAME KEY KA LIA DIFFERENT VALUE A->B AND A->C 		
7) 	CHANGED SOMETHING IN BETWEEN LIKE VARIABLE OR ELEMENT OF ARRAY ETC
8)	WRITE BRUTEFORCE AND CHECK
9) 	CHECK ON RANDOM TEST CASES
														
***********LEAVE**************LEAVE************LEAVE************LEAVE***********LEAVE************LEAVE**********LEAVE*************LEAVE************LEAVE****LEAVE*/										
	
	
	
	
	
	
	
	
	
	
	
	
ret("");	
}

int main() {
    cout<<setprecision(15);
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
