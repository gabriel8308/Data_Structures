#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int C(int n, int r){
	
	if(r==0||r==n){
		return 1;
	}

	else{
		return C(n-1,r)+C(n-1,r-1);
	}
	
}

int main() {
	// Your code goes here;
	int c;
	c = C(5,2);
	cout<<c<<endl;
	return 0;
}