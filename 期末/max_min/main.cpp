#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,c;
	int b[100];
	int max=0,min=100;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b[i];
		c+=b[i];
		if(b[i]>max){
			max=b[i];
		}else if(b[i]<min){
			min=b[i];
		}
	}
	float avg;
	avg = c/a;
	printf("AVG = %.2f\n",avg);
	printf("MAX = %d\n",max);
	printf("MIN = %d\n",min);
	return 0;
}
