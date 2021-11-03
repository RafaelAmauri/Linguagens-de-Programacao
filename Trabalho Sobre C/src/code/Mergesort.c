#include <stdio.h>

void merge_sort(int i, int j, int a[], int aux[]) {
if (j <= i)
{
    		return;
	}
	
int mid = (i + j) / 2;

	merge_sort(i, mid, a, aux);
	merge_sort(mid + 1, j, a, aux);

	int pointer_left  = i;
	int pointer_right = mid + 1;
	int k;

	for(k = i; k <= j; k++)
	{
    		if(pointer_left == mid + 1)
    		{
aux[k] = a[pointer_right];
        			pointer_right++;
    		}
    		
else if(pointer_right == j + 1)
    		{
        	aux[k] = a[pointer_left];
        	pointer_left++;
    		}
    		else if(a[pointer_left] < a[pointer_right])
    		{
        	aux[k] = a[pointer_left];
        	pointer_left++;
    		}
    		else
    		{
        	aux[k] = a[pointer_right];
        	pointer_right++;
    		}
	}

	for (k = i; k <= j; k++)
	{
    		a[k] = aux[k];
	}
}


int main()
{
	int array[100], aux[100], n, i, d, swap;

	printf("Digite numero de elementos no array:\n");
	scanf("%d", &n);

	printf("Digite %d inteiros\n", n);

	for (i = 0; i < n; i++)
	scanf("%d", &array[i]);

	merge_sort(0, n - 1, array, aux);

	printf("Printando array ordenado:\n");

	for (i = 0; i < n; i++)
	{
    		printf("%d\n", array[i]);
	}

	return 0;
}
