#include<stdio.h>
#include<stdlib.h>

int sum_up_to_k(int *list, int size, int k)
{
	for(int outer = 0; outer != size-1; ++outer)
	{
		for(int inner = outer+1; inner != size; ++inner)
		{
			int sum = list[outer] + list[inner];
			
			if( sum == k )
				return 1;
		}
	}
	return 0;
}

int main(int argc, char** argv)
{
	int num_test_cases, size_of_list, key;
	int *list;

	scanf(" %d ", &num_test_cases);

	for(int i=0; i!= num_test_cases; ++i)
	{
		scanf(" %d ", &size_of_list);

		list = (int *) malloc(sizeof(int) * size_of_list);

		for(int j=0; j!= size_of_list; ++j)
		{
			scanf(" %d ", &list[j]);
		}
		scanf(" %d ", &key);

		if(sum_up_to_k(list, size_of_list, key))
		{
			printf("2 numbers in the list can sum up to %d\n", key);
		}

		else
		{
			printf("2 numbers in the list cant sum up to %d\n", key);
		}
		
		free(list);
	}
	
}
