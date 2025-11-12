#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	while(cin>>n){
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		b[0]=a[0];
		for(int j=1;j<n;j++){
			b[j]=a[j]-a[j-1];
		}
		for(int x=0;x<n;x++){
			cout<<b[x]<<" "; 
		}
	}
	return 0;
}
