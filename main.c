#include <stdio.h>
#include <stdlib.h>
int a[100],n,i,j,temp;
heapsort(int *a,int n)
{
    int heapsize=n;
    for(i=n/2;i>=1;i--)
    {
        maxheapify(a,i,n);
    }
    for(i=n;i>=2;i--)
    {
        temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        heapsize=heapsize-1;
        maxheapify(a,1,heapsize);
    }

}
maxheapify(int *a, int i,int n)
{
    int l,r,largest;
    l=2*i;
    r=2*i+1;
    if(l<=n&&a[l]>a[i])
    largest=l;
    else largest=i;
    if(r<=n&&a[r]>a[largest])
    largest=r;
    if(largest!=i)
    {
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        maxheapify(a,largest,n);
    }
}
int main() {
	int t,k;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	heapsort(a,n);
	printf("%d\n",a[k]);
	}
	return 0;
}
