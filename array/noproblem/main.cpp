#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,a[99],b[99],c,cek;
	int sum=0;
	while(cin>>n&&n!=-1){
		sum++;
		a[0]=n;
		for(int i=1;i<=12;i++){
			cin>>a[i];
		}
		for(int j=1;j<=12;j++){
			cin>>b[j];
		}
		c=a[0];
		cout<<"Case "<<sum<<":\n";
		for(int x=1;x<=12;x++){
//			cout<<c<<" "<<b[x]; //ÀË¬d¤j¤p 
			if(c>=b[x]){
				c=c-b[x];
				cout<<"No problem! :D\n";
			}else{
				cout<<"No problem. :(\n";
			}
			c=c+a[x];
		}
	}
	return 0;
}
