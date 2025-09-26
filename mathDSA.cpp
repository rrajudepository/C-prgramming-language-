#include <bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
    int cubeDigit=0;
    int copyNumber=n;
    while(copyNumber!=0){
        int digit=copyNumber%10;
        cubeDigit+=digit*digit*digit;
        copyNumber=copyNumber/10;
        
    }
    if(cubeDigit==n)
    return true;
    else
    return false;
    
}
int findGCD(int a, int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}
//recursive code
int findGCD2(int a, int b){
    if(a==0) return b;
    else if(b==0) return a;
    else{
        if(a>b)
        a=a%b;
        else
        b=b%a;
        return findGCD2(a,b);
    }
}
//revrse digits of a number
int revNumber(int n){
    int revNo=0;
    int digit;
    while(n!=0){
        int digit=n%10;
        revNo=digit+revNo*10;
        n=n/10;
    }
    return revNo;
}


int main() {
	// your code goes here
	int n=371;
	if(isArmstrong(n)){
	    cout<<"Armstrong Number\n";
	}
	else{
	    cout<<"Not an Armstrong Number\n"; 
	}
	
	int a=20;
	int b=28;
	cout<<"GCD is : "<<findGCD(a,b)<<"\n";
    cout<<"GCD is : "<<findGCD2(a,b)<<"\n";
    cout<<"LCM is : "<<(a*b)/findGCD(a,b)<<"\n";
    
    cout<<revNumber(-4573)<<"\n";

}
