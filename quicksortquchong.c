//快速排序并去重
#include"stdio.h"

void quicksort(int [],int left,int right);

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(int i=0;i<=n-1;i++)
    {
        while(a[i]==a[i+1])
        {
            i+=1;
        }
        printf("%d\n",a[i]);
    }

}
void quicksort(int a[],int left,int right)
{
    int i,j,base;
    if(left>right)
        return ;
    i=left;
    j=right;
    base=a[left];
    while(i!=j)
    {
        while(a[j]>=a[left]&&i<j)
            j--;
        while(a[i]<=a[left]&&i<j)
            i++;
        if(i<j)
        {
            int t;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }

    }
    a[left]=a[i];
    a[i]=base;
    quicksort(a,left,i-1);
    quicksort(a,i+1,right);
}
