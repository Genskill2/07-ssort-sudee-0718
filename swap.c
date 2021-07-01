#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

void swap_max(int arr[],int l,int n)
{
	int i,c,nmax;
	int max= arr[n];
	for(int i=n;i<l;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
			nmax=i;
		}
		else
		{
			max = max; 
		}
	}
	if(max==arr[n])
	{
		nmax=n;
	}
	c=arr[nmax];
	arr[nmax]=arr[n];
	arr[n]=c;
}

void ssort(int arr[],int l)
{
	for(int j=0;j<l;j++)
	{
		swap_max(arr,l,j);
	}
}
