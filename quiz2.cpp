#include<bits/stdc++.h>
using namespace std;
int main() {
	string str,tmp;
	while(getline(cin, str)) {
		stringstream ss(str);
		int t = 0;
		while(ss >> tmp) {
			t = t ^ stoi(tmp);
		}
		printf("%d\n",t);
	}
	return 0;
}
