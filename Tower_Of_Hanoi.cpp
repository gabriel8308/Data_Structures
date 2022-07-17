#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void TOH(int n, int A, int B, int C){
	if(n>0){
		TOH(n-1,A,C,B);
		printf("(%d,%d)",A,C);
		TOH(n-1,B,A,C);
	}
}

int main() {
	// Your code goes here;
	TOH(3,1,2,3);
	return 0;
}