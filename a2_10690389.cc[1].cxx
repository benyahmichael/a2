#include <iostream>
using namespace std;

int main () 
{
	// definition and initialization of variables
	
	int n;
	int c=0;
	int i;
	
	// get user input
	
cout<<"Enter any number n"<<endl;

 cin>>n;
 
 // logic
 
 for ( i=1; i<=n; i+1 )
 {
 	if ( n%i == 0 )
 	{
 		c++;
 	}
 	
 }
 
 {
 	if ( c==2 )
 	{
 
 cout<<"n is a prime number"<<endl;
  
 	}
 	
 	else
 	{
 cout<<"n is not a prime number"<<endl;
 		
 		return 0;
 		
 	}
 }
 }