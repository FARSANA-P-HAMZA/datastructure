#include <stdio.h>
void main()
{
int limit1,limit2,a[10],b[10],c[20],i,j,k,p;
printf("enter the limit of first array\n");
scanf("%d",&limit1);
printf("enter %d values of first array\n",limit1);
for(i=0;i<limit1;i++){
scanf("%d",&a[i]);
}
printf("enter the limit of second array\n");
scanf("%d",&limit2);
printf("enter %d values of second array\n",limit2);
for(j=0;j<limit2;j++){
scanf("%d",&b[j]);
}

i=j=0;
while(i<limit1 && j<limit2) 
{

if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}

else if(a[i]>b[j])
{
c[k]=b[j];
j++;
k++;
}

else 
{
c[k]=a[i];
i++;
j++;
k++;
}

}

while(i<limit1)
{
c[k]=a[i];
i++;
k++;
}

while(j<limit2)
{
c[k]=b[j];
j++;
k++;
}

p=k;
printf("merged and sorted array is:\n");
for(k=0;k<p;k++)
{
printf("%d\n",c[k]);

}

}

