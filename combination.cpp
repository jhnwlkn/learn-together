#include<bits/stdc++.h>
#include<math.h>
using namespace std;


long long int faktorial(int a){
	long long int fact = 1;
	
	for(long long int bil=1; bil<=a; bil++){
		fact = fact * bil;
	}
	return fact;
	}	
		
//	rumus combinasi = a!/b!(a-b)!
	int main(){
		long long int px;
		int a, c , b;
		
		cout << "masukan a\t= ";
		cin >>  a;
		cout << "masukan b\t= ";
		cin >> b;
		
		c = a-b;
		px = faktorial(a)/(faktorial(b)*faktorial(c));
		cout <<"faktorial a\t\t= "<< faktorial(a)<<endl;
		cout <<"faktorial b\t\t= "<< faktorial(b)<<endl;
		cout <<"faktorial c(c=a-b)\t= "<< faktorial(c)<<endl;
		cout <<"C(a,b)\t\t\t= "<<px<< endl;	
		
	return 0;
}
