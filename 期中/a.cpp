#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,d,e,f,g;
	cin>>a>>b;
	d = b -a;
	if(d%2==1){
		c = d/2+1;
	}else if(d%2==0 && a==0 || a%2==0){
		c = d/2+1;
	}else if(d%2==0){
		c = d/2;
	}
	cout<<c;
	return 0;
}
