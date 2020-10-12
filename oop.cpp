
#include <sstream>
#include <fstream>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <functional>
#include <utility>
#include <bitset>
#include <cstdlib>/*
#include <ctime>
#include <cstdio>



#include <iostrexam>
#include <vector>
#include <string>
#include <iomanip>  //setprecision function
#include <cmath>	//math
#include <cstdio>
#include <vector>	//vector array
#include <algorithm>	//STL algorithm
#include <set> //STL library set
#include <sstream> // for stringstream
#define deb(x) cout<<#x<<" "<<x<<endl;/* for debuging  printing variable
															with name*/


using namespace std;

int y=5;


//c++ templte for help...........................................................

#define deb(x) cout<<#x<<" "<<x<<endl;/* for debuging  printing variable
															with name*/

// for printing value of variable with cout
template<typename... T>
void print(T... t){
		((cout<<t<<" "),...);
	}


//for saving as stringstream
template<typename... T>
string ss(T... t){
	stringstream sis;
	((sis<<t<<" "),...);
	return sis.str();
	}
	
//for taking multiple input
template<typename... T>
void input(T&... t){
	((cin>>t),...);
	}
	
//for loop
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)


//to print vector element 
template<typename T>
void printV(T vec){
	int i;
	fo(i,vec.size()) print(vec[i]);
	}
	







//c++ template for help........................................................


class player{
	public:
	string name;
	int health;
	player(string name="none",int a=0);
	player();
	
	bool operator==(const player rhs);
	};
	
	
	bool player::operator==(const player rhs){
		if(this->name==rhs.name)
		return true;
		else return false;
		}
	
	
	
	 player::player(string name,int health):name{name},health{health}{
		 }

int main(){
	print(setprecision(16));

	//player frank{"frank",0};
	
	//player newplayer{"",0};//copy constructor
	
	//newplayer=frank;/*deep copy*/
	
	//frank.name="madarchod";
	
	//cout<<newplayer.name<<" "<<frank.name<<endl;

		
		
	//player *frank=new player{"frank",0};
	
	//player *newplayer=new player{"",0};
	
	//newplayer=frank;//shallow copy
		
	//cout<<newplayer->name<<" "<<frank->name<<endl;

		
		
		
		
		
		
		
		
		
		
	player akhil{"n",0};
	player nikhil{"akhil",2};
	player nikhil1{"akhil",2};
	if(akhil==nikhil) cout<<"true"<<endl;
		//both r same
	if(akhil.operator==(nikhil)) cout<<"true"<<endl;
		
		
		
		
		
		vector<player> team{akhil,nikhil};
		
		auto loc=find(team.begin(),team.end(),nikhil1);
		
		cout<<loc->health<<endl;
		
		
		
		
		
		
		
		
		
		
	return 0;
}
























