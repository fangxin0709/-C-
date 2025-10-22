#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,d,e,f;
	for(int i=1;i<=5;i++){
		cin>>a>>b>>c;
		if(a+b>c && b+c>a && a+c>b){
			d++;
		}
	}
	cout<<d;
	return 0;
}
