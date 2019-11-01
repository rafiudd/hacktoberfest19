#include<iostream>
using namespace std;

int bottomup(char *a,char *b){
	int dp[100][100]={0};
	int len1=strlen(a);
	int len2=strlen(b);

	for(int i=0;i<=len1;i++){
		for(int j=0;j<=len2;j++){
			if(i==0 || j==0){
				dp[i][j]=0;
			}
			else if(a[i-1]==b[j-1]){          //as we have incremented the index
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	for(int i=0;i<=len1;i++){
		for(int j=0;j<=len2;j++){
			cout<<dp[i][j]<<' ';
		}
		cout<<endl;
	}
	return dp[len1][len2];
}

int main(){
	char a[]={"cbc"};
	char b[]={"abcabc"};
	cout<<bottomup(a,b)<<endl;
	return 0;
}