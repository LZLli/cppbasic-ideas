/*
	Name: ����ʱ�� 
	Author: liuzi 
	Date: 2023/7/1
	Description: ������������ȡ��Сʱ�������ӣ����� 
*/
#include<iostream>
using namespace std;
int main(){
	int a,h,m,s;//����a���ڴ洢������h���ڴ洢Сʱ��m���ڴ洢���� ��s���ڴ洢���� 
	cin>>a;//��ȡ���� 
	h=a/3600;//��ȡСʱ�� 
	m=a%3600/60;//��ȡ������ 
	s=a%3600%60;//��ȡСʱ�� 
	cout<<"Сʱ��"h<<"���ӣ�"<<m<<"�룺"<<s;//��� 
	
}
