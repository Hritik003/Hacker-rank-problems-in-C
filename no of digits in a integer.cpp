#include<stdio.h>
#include<math.h>

int   main()
{
	int long long n;
	scanf("%d",&n);
	 int i = 0;
    int len = 0;
    for (i = 0; n / pow(10, i) >= 1; i++)
    {
        len++;
    }
    printf("%i\n", len);
    return len;
	
}

