#include <iostream>
#include <vector>
#include <string>
#include <iomanip>  //setprecision function
#include <cmath>	//math
#include <cstdio>
#include <vector>	//vector array
#include <algorithm>	//stl algorithm
#include <set> //STL library set




using namespace std;

int rand(int a , int b){// random no for test case
	return a+rand()%(b-a+1);
}



int main(int argc,char* argv[]) {
	srand(atoi(argv[1]));
	int n=rand(1,10);
	cout<<n<<endl;
	set<int> used;
	for(int i=0;i<n;i++){
		int x;
		do{
			x=rand(1,2);
		}while(used.count(x));
		cout<<x-1<<flush;
		//used.insert(x);
	
	}
    return 0;

}
