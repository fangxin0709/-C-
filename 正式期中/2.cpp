#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
//		int a1=0;
		if(a%i==0){
			cout<<i<<" ";
		}
	}
	return 0;
}
