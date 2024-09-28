#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		long long noOfFighters;
		cin>>noOfFighters;

		long long ans=0;

		long long sum=0;
		for (long long i = 0; i < noOfFighters-2; i++) {
			long long elem;
			cin>>elem;
			sum+=elem;
		}
		long long secLast= 0 , last = 0;
		cin>>secLast;
		secLast -= sum;
		cin>>last;
		last-=secLast;
        cout << last << endl;

	}

}
