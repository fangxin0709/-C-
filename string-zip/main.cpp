#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,temp="";
    cin >> s;
    int sum=1;
	int num=s.length();
    for (int i=0;i<num; i++) {
        if (i<num-1 && s[i]==s[i+1]){
            sum++;
        }else{
        	temp+=s[i]+to_string(sum);
            sum=1;
        }
    }
    int num1=temp.length();
	if(num1>=num){
		cout<<s;
	}else{
		cout<<temp;
	}
    return 0;
}
using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     // 用兩層迴圈跑每一格
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {

//             // 算離四個邊的距離
//             int top = i;
//             int left = j;
//             int bottom = n - 1 - i;
//             int right = n - 1 - j;

//             // 找最小距離
//             int minDist = top;
//             if (left < minDist) minDist = left;
//             if (bottom < minDist) minDist = bottom;
//             if (right < minDist) minDist = right;

//             // 數字 = 最小距離 + 1
//             cout << minDist + 1;

//             // 空格（最後一個不用）
//             if (j != n - 1) cout << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

