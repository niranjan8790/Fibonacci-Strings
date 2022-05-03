/*Project completed by Niranjan*/



#include<stdio.h>
#include<conio.h>
#include<string.h>
int frequencies(char * str, char * Search);
int main()
{
char a[1000][40],b[1000][40],temp[100];
int k,m,i,j,count;
strcpy(a[0],"a");
strcpy(a[1],"b");
printf("enter k,m\n");
scanf("%d%d",&k,&m);
for(i=2;i<k;i++)
{
strcpy(a[i],a[i-1]);
strcat(a[i],a[i-2]);
}
printf("\nenter queries\n");
for(j=0;j<m;j++)
{
scanf("%s",b[j]);
}
strcpy(temp,a[k-1]);
for(i=0;i<m;i++)
{
count = frequencies(temp, b[i]);
printf("%d\n",count);
}
9
return 0;
}
int frequencies(char * str, char * Search)
{
int i, j, found, count;
int len, searchLen;
len = strlen(str);
searchLen = strlen(Search);
count = 0;
for(i=0; i<= len-searchLen; i++)
{
found = 1;
for(j=0; j<searchLen; j++)
{
if(str[i + j] != Search[j])
{
found = 0;
break;
}
}
if(found == 1)
{
count++;
}
}
return count;
}
