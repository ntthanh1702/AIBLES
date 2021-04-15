
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int a[10] = {1, 4, 5, 3, 7, 2, 4, 8, 4, 9};
	ll sum = 1;
	for(int i = 0; i < 10; i++)  sum = sum * a[i];
	for(int i = 0; i < 10; i++)  cout << sum/a[i] << " ";
}

