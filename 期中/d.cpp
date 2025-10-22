#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,d,e;
	int a1,a2;
	int b1,b2;
	int c1,c2;
	cin>>a;
	a1 = a/3600;
	a2 = a%3600;
	b = a2/60;
	b1 =a2%60;
	printf("%02d:%02d:%02d",a1,b,b1);
	return 0;
}
