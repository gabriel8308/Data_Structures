#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

double ei (double x, double n){
	double s =1;
	for(int i=n;i>1;i--){
		s = 1 + (x/i)*s;
		
	}
	
	return s;
	
}

double er (int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return er (x, n - 1);
}

int main() {
	// Your code goes here;
	double m,n;
	m = er(4,4);
	n = ei(4,4);
	cout<<m<<endl;
	return 0;
}