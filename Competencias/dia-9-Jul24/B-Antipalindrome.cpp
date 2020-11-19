#include <bits/stdc++.h>
using namespace std;

#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
bool palindrome(string s){
	string a = s;
	reverse(a.begin(), a.end());
    return a==s;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	string s;
	cin >> s;
	for(int i=s.length(); i>=0; --i){
		string a = s.substr(0,i);
		if(!palindrome(a))END(a.length())
	}
    END(0)
}