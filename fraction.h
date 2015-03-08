class fraction
{
public:
	int n1;
	int n2;
	int d1;
	int d2;
	fraction(int denom1, int nume1, int denom2, int nume2) //constructor

	{
		d1 = denom1;
		d2 = denom2;
		n1 = nume1;
		n2 = nume2;

	};

	int add() // add function
	{
		int ans;
		return ans = (n1 / d1) + (n2 / d2);
	}

	int sub() //subraction function
	{

		int a;
		return a = (n1 / d1) - (n2 / d2);
	}

	int multiply() //multiplication function
	{
		int b;
		return b = (n1 / d1) * (n2 / d2);
	}

	int divide() // division function
	{
		int c;
		return c = (n1 / d1) / (n2 / d2);
	}

	void print()
	{

	}
};
