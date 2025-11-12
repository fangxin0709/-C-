#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,a[99999],b[99999],c=0;
	int sum,num;
	while(cin>>n){
		num++;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(a[0]<1){
			sum=0;
		}
		for(int j=0;j<n;j++){
			if(a[j]>=a[j+1] && j!=n-1){
				sum=0;
			}else if(a[j]==1 && a[j]>a[j+1]){
				sum=0;
			}
		}
		if(sum==0){	
			cout<<"Case #"<<num<<": It is not a B2-Sequence"<<endl;
			break;
		}else{
			for(int i=0;i<n;i++){
				for(int j=i+1;i<n;i++){
					b[c]=a[i]+a[j];
					c++;
				}
			}
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
//					cout<<b[i]<<" "<<b[j];
					if(b[i]==b[j]){
						sum=0;
						cout<<"Case #"<<num<<": It is not a B2-Sequence"<<endl;
						break;
					}
				}
			}
			cout<<"Case #"<<num<<": It is a B2-Sequence"<<endl;
		}
	}
	return 0;
}
