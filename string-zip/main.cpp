#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,temp="";
    cin >> s;
    int sum=1;
	int num=s.length();
    for (int i=0;i<num; i++) {
        if (i<num-1 && s[i]==s[i+1]){
            sum++;
        }else{
        	temp+=s[i]+to_string(sum);
            sum=1;
        }
    }
    int num1=temp.length();
	if(num1>=num){
		cout<<s;
	}else{
		cout<<temp;
	}
    return 0;
}

