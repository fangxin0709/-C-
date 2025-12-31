#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;

int main() {
  	string psd;
  	char psd2;
  	bool a=false,b=false,c=false,d=false;
  getline(cin,psd);
  	//高級
//  	for(int i=0;i<psd.length();i++){
//  		psd2=psd[i];
//  		if(islower(psd2)){ //大寫 
//  			a=true;
//		}else if(isupper(psd2)){ //小寫 
//			b=true;
//		}else if(isdigit(psd2)){ //數字 
//			c=true;
//		}else if(!isspace(psd2)){ //特殊 
//			d=true;
//		}
//	}
	char psd3;
	//我考試可以用的
//	for(int i=0;i<psd.length();i++){
//		char ch = psd[i];
//		if(ch >='a' && ch<='z'){
//			a=true;
//		}else if(ch >='A' && ch<='Z'){
//			b=true;
//		}else if(ch>='0' && ch<='9'){
//			c=true;
//		}else if(ch!=' '){
//			d=true;
//		}
//	} 
	cout<<"a="<<(a ? "YES" : "NO")<<endl;
	cout<<"b="<<(b ? "YES" : "NO")<<endl;
	cout<<"c="<<(c ? "YES" : "NO")<<endl;
	cout<<"d="<<(d ? "YES" : "NO")<<endl;
//	cout<<atoi(i.c_str());
    return 0;
}

