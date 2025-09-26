#include <bits/stdc++.h>
using namespace std;
//pointer of pointer
// pass by refrence(alias)

void change(int &b){
    b=20;
}

int main() {
	// your code goes here
	int a=5;
	int *p=&a;
	int **q=&p;
	cout<<*p<<endl; //value of a 
	cout<<**q<<endl; //value of a 
	cout<<p<<endl;   //value of p that is address of a 
	cout<<*q<<endl; //value of p 
	change(a);
	cout<<a<<endl;
	
	
	int arr[]={1,2,3,4,5,6}; //arr is a constant pointer. not chnaged through out the program 
	
	cout<<p<<endl;//print address of a 
	p++; // increase address of a by 4 bytes 
	cout<<p<<endl;
	p++;
	cout<<p<<endl;
	p++;
	cout<<p<<endl;
	
	p=p+3; //increase by 12 bytes
	cout<<p<<endl;
	cout<<*arr<<endl;
	cout<<*(arr+1)<<endl; //next value in array 
	cout<<*(arr+2)<<endl;
	cout<<*(arr+3)<<endl;
	
	int *ptr1 = &a;
	int *ptr2 = ptr1 +2;
	cout<<ptr2-ptr1<<endl; //give value 2 
	
	int *ptr=arr;
	cout<<*(ptr+1)<<endl;
	cout<<*(ptr+3)<<endl; 

}
