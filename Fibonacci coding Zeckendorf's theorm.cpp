#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 10000007
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000

//ZECKENDORF'S THEORM
/*it states that any positive number can be represented in the form of summation of fibonnacii number
which in non equivalent to each other.*/


ll binFibboNum(ll n)
{
	if (n == 0 || n == 1)
		return n;


	ll f1 = 0, f2 = 1 , f3 = 1;
	while (f3 <= n)       //finding nearest fibonacci which less than or equal to that
	{
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;

	}
	return f2;
}

void  printBinFibo(ll n)
{
	while (n > 0)
	{	ll f = binFibboNum(n);
		n = n - f;
		cout << f << " ";


	}

}



int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);

//////////////////////////////////////start...............
	ll n;
	cin >> n;
	printBinFibo(n);


/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//printf("\nRun Time -> %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
