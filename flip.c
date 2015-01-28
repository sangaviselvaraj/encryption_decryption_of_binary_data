#include<stdio.h>
void main()
{

    int a[20],b[10];
    int i;
    int n;
    int key[]={1,0,1,0,0};
    printf("enter the number of bits ");
    scanf("%d",&n);
    printf("enter the old message");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("new message is:");
    for(i=0;i<=n-1;i++)
    {

    b[i]=exor(a[i],key[i]);
        printf("%d ",b[i]);
    }
}

int exor(int m,int n)
{
    if(m==n)
    {
        return 0;
    }
        else
    return 1;

}





