// #include<iostream>
// using namespace std;
// float Power(float x, float n)
// {
	 
// 	if (n == 0)
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return Power(x, n - 1) * x;

// 	}


// }
// int main()
// {
	
// 	for(float n=0; n<20;n++)
// 	{
	
// 		cout << Power(2, n)<<endl;
		
// 	}

	
// }

// #include<iostream>
// using namespace std;
// int Ack(int m, int n)
// {
// 	if (m == 0)

// 	{
// 		return n + 1;
// 	}
// 	else if(m>0&&n==0)
// 	{
// 		return Ack(m - 1, 1);

// 	}
// 	else if (m > 0 && n > 0)
// 	{
// 		return Ack(m - 1, Ack(m, n - 1));
// 	}
// }
// int main()
// {
// 	cout<<Ack(3, 4);
// }

// #include<iostream>
// using namespace std;
// void Print(int n)
// {
// 	if (n < 0)
// 	{
// 		return;
// 	}
// 	else
// 	{
// 		//printing the current no
// 		cout << n << endl;

// 		//calling the recursive function 
// 		Print(n - 1);
// 	}
	
	


// }
// int BinomialCoefficients(int n, int k)
// {
// 	if (n == k)
// 	{
// 		return 1;
// 	}
// 	else if (k == 0)
// 	{
// 		return 1;
// 	}
// 	else if (n > 1 && k > 1)
// 	{
// 		return BinomialCoefficients(n - 1, k - 1) + BinomialCoefficients(n - 1, k);
// 	}
	
// }
// bool isPrime(int n, int divisor = 2)
// {
// 	if (n <= 1)
// 	{
// 		return false;

//     }
// 	else if (divisor * divisor > n)
// 	{
// 		return true;
// 	}
// 	else if (n % divisor == 0)
// 	{
// 		return false;
// 	}
// 	return isPrime(n, divisor + 1);


// }

// int main()
// {
// 	//Print(6);
// 	//cout<<BinomialCoefficients(5, 4);
// 	cout<<isPrime(7);


// }