//¿ìËÙÅÅĞòquicksort

#include<iostream>
using namespace std;

void quicksort(int [],int left,int right);

int main()
{
   int a[10];
   for(int i=0;i<=9;i++)
    cin>>a[i];
   quicksort(a,0,9);
   for(int i=0;i<=9;i++)
    cout<<a[i]<<endl;
   return 0;
}

void quicksort(int a[],int left,int right)
{
    int i,j,base;
    if(left>right)
        return;
    base=a[left];
    i=left;
    j=right;
    while(i!=j)
    {
        while(a[j]>=a[left]&&i<j)
           j--;
        while(a[i]<=a[left]&&i<j)
           i++;
        if(i<j)
         {
           int t;
           t=a[j];
           a[j]=a[i];
           a[i]=t;
         }
    }
    a[left]=a[i];
    a[i]=base;
    quicksort(a,left,i-1);
    quicksort(a,i+1,right);
    return ;

}
