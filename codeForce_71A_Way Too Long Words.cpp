#include<stdio.h>
#include<string.h>
int main()
{
    char a[150];
    int l,i,b;
    scanf("%d",&b);
    for(i=0;i<=b;i++){
    gets(a);
    l=strlen(a);
    if(l>10){
    printf("\n%c%d%c",a[0],l-2,a[l-1]);
    }
    else {
        printf("\n");
        puts(a);
    }
        }
    return 0;
}
