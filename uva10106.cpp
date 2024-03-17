/*#include <bits/stdc++.h>
using namespace std;

void solution(string x) {
    vector<int> a(251,0),b(251,0),c(510,0);
    int carry=0,sum;
    string y;
    cin >> y;
    for (int i=x.size()-1,j=0;i>=0;i--,j++) {
        a[j] = int(x[i])-48;
    }
    for (int i=y.size()-1,j=0;i>=0;i--,j++) {
        b[j] = int(y[i])-48;
    }
    for (int i=0;i<y.size();i++) {
        carry=0;
        for (int j=i;j<=i+x.size();j++) {
            sum = carry + b[i]*a[j-i];
            carry = sum/10;
            sum = sum %10;
            c[j] += sum;
        }
    }
    bool flag = false;
    for (int i=509;i>=0;i--) {
        if (c[i]==0&&!flag) continue;
        else flag = true;
        cout << c[i];
    }
    cout << endl;
}

int main() {
    string x;
    while (cin >> x) solution(x);
}*/

/* 10106 Product Accepted C++ 0.016 2011-02-28 13:18:26 */
#include<stdio.h>
#include<string.h>
void multiply(char str1[],char str2[],char result[]){
	int len_1,len_2;
	int i,j,temp,carry;
	len_1=strlen(str1);
	len_2=strlen(str2);
	for(i=0;i<len_1+len_2;i++)
		result[i]='0';
	result[i]='\0';
	for(i=len_1-1;i>=0;i--){
		for(j=len_2-1,carry=0;j>=0;j--){
			temp=(str1[i]-'0')*(str2[j]-'0')+result[i+j+1]-'0'+carry;
			carry=temp/10;
			result[i+j+1]=(temp%10)+'0';
		}
		result[i]=carry+'0';
	}
	for(j=0;result[j]=='0';j++);
	if(j>=len_1+len_2)
		result[1]='\0';
	else
		for(i=0;result[i]!='\0';i++)
			result[i]=result[i+j];
}
int main(){
	char str1[100000];
	char str2[100000];
	char result[100000];
	while(gets(str1)){
		gets(str2);
		multiply(str1,str2,result);
		printf("%s\n",result);
	}
	return 0;
}
/*

The problem is to multiply two integers X, Y. (0<=X,Y<10250) 

The Input

The input will consist of a set of pairs of lines. Each line in pair contains one multiplyer. 

The Output

For each input pair of lines the output line should consist one integer the product. 

Sample Input

12
12
2
222222222222222222222222

Sample Output

144
444444444444444444444444

*/