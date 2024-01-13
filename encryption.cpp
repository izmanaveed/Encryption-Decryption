#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void encrypt (char x[]);
void decrypt (char y[]);
void R();
int r;
main()
{
	char a [100];
	cout<<"Enter text to be encrypted"<<endl;
	cin.getline(a,100);
	cout<<"Key used for encryption will be: "<<endl;
	R();
	cout<<"The encrypted text is: "<<endl;
	encrypt(a);
	cout<<a<<endl;
	cout<<"The decrypted text is:"<<endl;
	decrypt(a);	
	cout<<a<<endl;

}
void R()
{
	srand (time(NULL));
	r=rand() %26+1;
	cout<<r<<endl;
}
void encrypt(char x[])
{
	for (int i=0; x[i]!='\0'; i++)
	{
		x[i]=x[i]+r;
	}
}
void decrypt (char y[])
{
	for (int j=0; y[j]!='\0'; j++)
	{
		y[j]=y[j]-r;
	}
}

