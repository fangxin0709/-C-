#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,min;
	cin>>a>>b>>c;
	min=a;
	if(min>=b){
		min=b;
	}
	if(min>=c){
		min=c;
	}
	cout<<min;
	return 0;
}
