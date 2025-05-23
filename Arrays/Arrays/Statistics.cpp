int Sum(int arr[], const int n)
{
	int sum{ 0 };
	for (int i = 0; i < n; ++i) sum += arr[i];
	return sum;
}

float Sum(float arr[], const int n)
{
	float sum{ 0 };
	for (int i = 0; i < n; ++i) sum += arr[i];
	return sum;
}

double Sum(double arr[], const int n)
{
	double sum{ 0 };
	for (int i = 0; i < n; ++i) sum += arr[i];
	return sum;
}

char Sum(char arr[], const int n)
{
	char sum{ 0 };
	for (int i = 0; i < n; ++i) sum += arr[i];
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(float arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int MinValueIn(int arr[], const int n)
{
	int minValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

float MinValueIn(float arr[], const int n)
{
	float minValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

double MinValueIn(double arr[], const int n)
{
	double minValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

char MinValueIn(char arr[], const int n)
{
	char minValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

int MaxValueIn(int arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

float MaxValueIn(float arr[], const int n)
{
	float maxValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

double MaxValueIn(double arr[], const int n)
{
	double maxValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

char MaxValueIn(char arr[], const int n)
{
	char maxValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}