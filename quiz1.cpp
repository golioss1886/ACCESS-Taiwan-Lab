#include<bits/stdc++.h>
using namespace std;
int main() {
	int a;
	string str,tmp;
	while(getline(cin,str)) {
		//cout << " :: " << str << endl;
		int n = 0;//arraySizeCount
		map<int, int> m;
		stringstream ss(str);
		//cout <<"str :: "<< str << endl;
		while(ss >> tmp) {
			//cout << tmp << endl;
			a = stoi(tmp);
			//cout << a << endl;
			map<int, int>::iterator iter = m.find(a);
			if(iter != m.end()) {
				m[a]++;
			} else {
				m.insert(pair<int, int>(a,1));
			}
			n++;
		}
		//cout << n << " = n " << endl;
		for(map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
			//cout << it -> first << " " << it -> second << "::" << endl;
			if(it -> second > floor(n/2))
				cout << it -> first << " ";
		}
		cout <<"\n";
		//cin.ignore();
	}
	return 0;
}
//while(scanf("%d",&a)!=EOF) {
//n++;
