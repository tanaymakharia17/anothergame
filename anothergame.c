#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
 {
        int n;
        scanf("%d",&n);
        if(n==1)
{
            printf(":(\n");
}
if(n!=1)
{
        for(int i=0; i<n; i++)
{
         if(n==2+5*i || n==3+5*i || n==4+5*i)
{
            printf(":)\n");
                    break;
 }
        if(n==5+5*i || n==6+5*i)
{
            printf(":(\n");
                    break;
}
}
}
        
}
}
