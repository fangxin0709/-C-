#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,d,e;
	cin>>a;
	b=a/3600;
	c=a%3600;
	d=c/60;
	e=c%60;
	printf("%02d:%02d:%02d",b,d,e);
	return 0;
}
