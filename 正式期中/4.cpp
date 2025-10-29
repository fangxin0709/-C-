#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	c=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(i%7==0 && i!=0){
			c++;
		}
	}
	cout<<c;

	return 0;
}
