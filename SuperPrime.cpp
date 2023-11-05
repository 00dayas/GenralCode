# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

int main()
{
	int n,A,SP;
        bool res;
	cin>>n;
	vector<int> V(n);
	vector<int> arr;
	int k=0;
	for(int i=0;i<n;i++)
	{
		cin>>V[i];
	}
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		if(V[i]==0||V[i]==1)
		{
		continue;
		}
		A=V[i];
		for(int j=1;j<=A;j++)
		{
         	if(A%j==0)
			{
	          count++;
	      	         }
					   }

	   if(count==2)
	         {
	     	   arr.push_back(A);
	              } 
	               count=0;
                     }
    int size=arr.size();
	    for(int i=0;i<size;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(arr[i]==V[i]+V[j+1])
    		{
    			SP=arr[i];
			res=true;
			}
		}
		
	}
	if(res)
	{
	auto it = find(V.begin(),V.end(),SP);
		int index;
		cout<<"The superprime number is "<<SP;
		index=distance(V.begin(),it);
		cout<<"\nat Index "<<index;
	}
	else
	return 0;
}
