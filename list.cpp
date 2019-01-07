#include<iostream>
#include<array>
#include<list>

using namespace std;
int main(){
	list<int>l1{11,12,13}; list<int>:: iterator itr = l1.begin();
	cout<<*itr;
	return 0;
}
