//进行快速排序并查重
#include"stdio.h"

void bubblingsort(int [],int);

int main()
{
    int n1;
    int geshu=0;
    printf("请输入您要进行排序的数字的个数：");
    scanf("%d",&n1);
    int a[n1];
    for(int i=0;i<=n1-1;i++)
    {
        printf("请输入要进行排序的数：");
        scanf("%d",&a[i]);
    }
    bubblingsort(a,n1);
    for(int i=0;i<=n1-1;i++)
    {

        while(a[i]==a[i+1]&&i<=n1-2)
        {
            i+=1;
        }
        printf("%d\n",a[i]);
        geshu++;
    }
    printf("%d\n",geshu);
    return 0;

}

void bubblingsort(int a[],int n)
{
    for(int i=1;i<=n-1;i++)
        for(int j=0;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }

}
