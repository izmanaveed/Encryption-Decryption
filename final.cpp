#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<fstream>
using namespace std;
void encrypt (char x[],int l);
void decrypt (char y[], int l);
int read (char f[]);
void R();
int r;
char s[100];
main()
{   
	int L,a,sl;
	cout<<"Press 1 to encrypt and decrypt file OR press 2 to encypt and decrypt text entered by user"<<endl;
	cin>>a;
   {
	 if (a==1)
    {
    	char t[100];
		cout<<"Enter file name you wish to encrypt"<<endl;
		cin>>t;
		cout<<"Key used for encryption will be: "<<endl;
		R();		
		L=read(t);
		cout<<"Length of this text file is: "<<L-1<<endl;
		encrypt(s,L);
		decrypt(s,L);
}
	if (a==2)
	{
	char u[100];
	cout<<"Enter text you wish to encrypt: "<<endl;
	cin>>u;
	cout<<"Key used for encryption will be: "<<endl;
	R();	
	encrypt(s,L);
	decrypt(s,L);
	}
}
}
void R()
{
	srand (time(NULL));
	r=rand() %26+1;
	cout<<r<<endl;
}
int read(char f[])
{	
	int i=0;
	int len=0;
	ifstream myfile (f);
	if (myfile.is_open()) 
	{ 
	myfile>>noskipws;
	 while ( !myfile.eof())
          {
                myfile >> s[i];
                cout<<s[i];
                i++;
				len++; 
    }
	cout<<endl;
	}
	else  
	{
	cout << "File does not exist"<<endl;
	exit (1);
}
	return len;
}

void encrypt(char x[], int l)
{
	for (int i=0; i<=l; i++)
	{
		x[i]=x[i]+r;
	}
	cout<<"Encrypted Text is"<<endl;
	cout<<x<<endl;
}
void decrypt (char y[], int l)
{
	for (int j=0; j<=l; j++)
	{
		y[j]=y[j]-r;
	}
	cout<<"Decrypted Text is"<<endl;
	cout<<y<<endl;
}
