#include<bits/stdc++.h>
using namespace std;

void printRange(int *input, int n, int ln, int hn) {
	unordered_map<int, bool>um;
	for(int i=0;i<n;i++) {
		um[input[i]] ++;
	}
	for(int i=ln;i<=hn;i++) {
		if(um.count(i) > 0) {
			continue;
		}
		cout<<i<<" ";
		um[input[i]] = false;
	}
}

int main() {
	int n, input[1000], ln, hn;
	cout<<"Enter the number of elements you want to enter:";
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++) {
		cin>>input[i];
	}
	cout<<"Enter the lower limit:";
	cin>>ln;
	cout<<endl;
	cout<<"Enter the upper limit:";
	cin>>hn;
	cout<<endl;
	printRange(input, n, ln, hn);
	return 0;
}
