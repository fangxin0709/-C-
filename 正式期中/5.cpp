#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	int g;
	for(int i=1;i<=5;i++){
		cin>>a>>b>>c;
		if((a*a+b*b)==c*c){
			g++;
		}
	}
		cout<<g;
	return 0;
}
