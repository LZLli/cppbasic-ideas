/*
	Name: 计算时间 
	Author: liuzi 
	Date: 2023/7/1
	Description: 输入秒数，获取几小时，几分钟，几秒 
*/
#include<iostream>
using namespace std;
int main(){
	int a,h,m,s;//定义a用于存储描述；h用于存储小时；m用于存储分钟 ；s用于存储秒数 
	cin>>a;//获取秒数 
	h=a/3600;//获取小时数 
	m=a%3600/60;//获取分钟数 
	s=a%3600%60;//获取小时数 
	cout<<"小时："h<<"分钟："<<m<<"秒："<<s;//输出 
	
}
