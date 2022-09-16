#include <stdio.h>
int main()
{
   int array[100], search, n, count = 0;

 scanf("%d", &n); 

 int c;
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   scanf("%d", &search); 
int k=0;
for(c=0;c<n;c++)
{
  if(search==array[c])
     {
       k=1;
       break;
     }
}
if(k==1)
     {
for(c=0;c<n;c++)
{
  if(search==array[c])
  {
    printf("%d is present at location %d.\n",search,(c+1));
    count++;
  }
}
printf("%d is present %d times in the array.\n",search,count);
}
else
printf("%d is not present in the array.\n",search);
return 0;
}
