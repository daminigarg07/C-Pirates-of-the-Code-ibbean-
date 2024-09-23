int Comfac(int n,int k)
{
	int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) 
	{
        return 1;
    }
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}
}

int main()
{
	int n;
	cin>>n;
	
	cout<<"\n"<<"fac: "<<fac(n);
	return 0;
}