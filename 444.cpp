/*
	Name: 输出正方形 
	Author: liuzi 
	Date:2023/7/1
	Description: 输入一个数，输出一个长和宽都是它的正方形 
*/
#include<iostream>
using namespace std;
int main(){
	int n;//定义n，存储边长 
	cin>>n;//输入边长，存入n中 
	int mm=n,l=0;
	for(int k=0;k<mm;k++){
		for(int i=l;i<n;i++){
		if(i>=26)cout<<char(i%26+65)<<" ";//如果Z之后，变成A ...... 
		else cout<<char(65+i)<<" ";//其他情况 ,无事发生 
		}
	l+=1;
	n+=1;
	cout<<endl;
	}	
}
