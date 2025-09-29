#include<stdio.h>
#include<string.h>
int main()
{
//xor encryption

char a[100];
int n;
scanf("%[^\n]",a);
int l=strlen(a);
printf("enter Key\n");
scanf("%d",&n);

for(int i=0;i<l;i++)
{
    
    {
    a[i]=a[i]^n;
    }
}
printf("%s\n",a);
for(int i=0;i<l;i++)
{
  
    {
    a[i]=a[i]^n;
    }
}


printf("%s\n",a);
}