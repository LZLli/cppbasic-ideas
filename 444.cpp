/*
	Name: ��������� 
	Author: liuzi 
	Date:2023/7/1
	Description: ����һ���������һ�����Ϳ������������� 
*/
#include<iostream>
using namespace std;
int main(){
	int n;//����n���洢�߳� 
	cin>>n;//����߳�������n�� 
	int mm=n,l=0;
	for(int k=0;k<mm;k++){
		for(int i=l;i<n;i++){
		if(i>=26)cout<<char(i%26+65)<<" ";//���Z֮�󣬱��A ...... 
		else cout<<char(65+i)<<" ";//������� ,���·��� 
		}
	l+=1;
	n+=1;
	cout<<endl;
	}	
}
