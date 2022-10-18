//sieve method  for finding it is prime or not           5*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxi=1e6+5;
ll primes[maxi];
void is_sieve()
{
	for(int i=0;i<=maxi;i++)
	{
		primes[i]=1;
		primes[0]=primes[1]=0;
	}
	for(int i=2;i<i*i;i++)
	{
		for(int j=i*i;j<maxi;j+=2)
		{
			primes[j]=0;
		}
	}
}
int main()
{
	is_sieve();
	ll n;
	cin>>n;
	if(primes[n]==1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}


//BINARY EXPONENTIATION   time complexity--o(log b)   5*
/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
ll power(ll a,ll b)
{
	if(b==0)
	{
		return 1;
	}
	ll ans=power(a,b/2);
	if(b%2==0)
	{
		return (ans*ans)%mod;
	}
	else
	{
		return (a*ans*ans)%mod;
	}
}
int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<power(a,b);
}*/




//matrix exponentiation                   time complexity  ->o(k^2*(log n))->o(log n)    2*
/*#include<bits/stdc++.h>
using namespace std;
struct Matrix{
	int a[2][2];	
};

Matrix identity(){
	Matrix id;
	id.a[0][0]=1 ,id.a[0][1]=0;
	id.a[1][0]=0 ,id.a[1][1]=1;
	return id;
}
Matrix mul(Matrix A,Matrix B){
	Matrix C;
	for(int row = 0 ; row < 2 ; row++){
		for(int col = 0; col < 2 ; col++){
			int sum =0;
			for(int i = 0 ; i < 2; i++){
				sum+=A.a[row][i]*B.a[i][col];
			}
			C.a[row][col]=sum;
		}
	}
	return C;
}
Matrix Matrixexp(Matrix A,int exp){
	if(exp==0)return identity();
	//cout<<exp<<"rr \n";
	Matrix ans = Matrixexp(A,exp/2);
	//cout<<exp<<"pp \n";
	if(exp%2==0){
		return mul(ans,ans);
	}
	else{
		return mul(mul(ans,ans),A);
	}
}
int main(){

	Matrix A;
	A.a[0][0]=1 ,A.a[0][1]=1;
	A.a[1][0]=0 ,A.a[1][1]=2;
	Matrix B;
	B=Matrixexp(A,6);
	cout<<B.a[0][0]<<" "<<B.a[0][1]<<endl;
	cout<<B.a[1][0]<<" "<<B.a[1][1]<<endl;
}*/
