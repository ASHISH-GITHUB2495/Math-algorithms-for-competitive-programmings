#include<bits/stdc++.h>
using namespace std;


int power(int a,int n,int m)
{
  int res=1;
  while(n)
  {
  	if(n%2==0)
  		n-- , res=(res*a)%m;
  	else
  		n/=2 , a=(a*a)%m;
  }

return res;
}


int32_t main()
{
/////////////////////start...............

int t,a,b,m;
cin>>t;
while(t--)
{
	cin>>a>>m;
	cout<<"a^-1 = "<<power(a,m-2,m)<<endl; 
}




///////////////////////end-.........................
#ifndef ONLINE_JUDGE
	//cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}



