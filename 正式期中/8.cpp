#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	int b=1;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int z=1;z<i;z++){
			cout<<" ";
		}
		for(int j=a-i;j>=0;j--){
			cout<<b++;
		}
		for(int x=a-1-i;x>=0;x--){
			cout<<b++;
		}
		cout<<endl;
		b=1;
	}
	return 0;
}
