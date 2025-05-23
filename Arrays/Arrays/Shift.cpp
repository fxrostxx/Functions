void ShiftLeft(int arr[], const int n, int shiftStep)
{
	int temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[0];
		for (int j = 1; j < n; ++j)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = temp;
	}
}

void ShiftLeft(float arr[], const int n, int shiftStep)
{
	float temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[0];
		for (int j = 1; j < n; ++j)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = temp;
	}
}

void ShiftLeft(double arr[], const int n, int shiftStep)
{
	double temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[0];
		for (int j = 1; j < n; ++j)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = temp;
	}
}

void ShiftLeft(char arr[], const int n, int shiftStep)
{
	char temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[0];
		for (int j = 1; j < n; ++j)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = temp;
	}
}

void ShiftRight(int arr[], const int n, int shiftStep)
{
	ShiftLeft(arr, n, n - shiftStep);
}

void ShiftRight(float arr[], const int n, int shiftStep)
{
	ShiftLeft(arr, n, n - shiftStep);
}

void ShiftRight(double arr[], const int n, int shiftStep)
{
	ShiftLeft(arr, n, n - shiftStep);
}

void ShiftRight(char arr[], const int n, int shiftStep)
{
	ShiftLeft(arr, n, n - shiftStep);
}