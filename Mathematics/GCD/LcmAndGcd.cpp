#include <iostream> 
using namespace std;

int main(){
	int a,b,result;
	cout<<"Enter two numbers = ";
	cin>>a>>b;
#using stl for finding gcd of 2 numbers..
	result=__gcd(a,b);
	cout<<"GCD is= "<<result;
	cout<<"LCM is="<<(a*b)/result;

}
return 0;
}