#include<stdio.h>

int a[100000] = {0};

int main()
{
	int n, k, now = -1, head = 0;
	scanf("%d", &n);
	for(int i = 0; i <n; i++)
	{
		scanf("%d", &k);
		if(k ==1)
		{
			now++;
			scanf("%d", &a[now]);
		}else if(k == 2)
		{
			if(head - 1 == now)
				printf("-1\n");
			else
				printf("%d\n", a[head]);
		}else
		{
			if(head - 1 != now)
			{
				a[head] = 0;
				head++;
			}
		}
	}	
	

	return 0;	
}
