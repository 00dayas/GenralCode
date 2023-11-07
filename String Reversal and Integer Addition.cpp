# include<iostream>
# include<algorithm>
# include<string.h>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"Enter the strings"<<endl;
	cin>>str1>>str2;
	reverse(str1.begin(),str1.end());	
	reverse(str2.begin(),str2.end());	
	int a= stoi(str1);
	int b=stoi(str2);
	int c=a+b;
	string k=to_string(c);
	reverse(k.begin(),k.end());
	cout<<k;
}
