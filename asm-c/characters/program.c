#include<stdio.h>
#include "program.h"
int main(void){
//strl function call
char name[10]="name";
int n=10;
char f='n';
int res=strl(name,n);
printf("String lenght is: %d\n",res);
printf("\n");
//charfind funcion call
int charf=charfind(name,f);
printf("Result is: %d\n",charf);
printf("\n");
//chararrcmp funcion call
char str1[]="name";
char str2[]="age";
int strcnt1=4;
int strcnt2=3;
int strcres=chararrcmp(str1,str2,strcnt1,strcnt2);
printf("Count of same characters is:%d\n",strcres);
//selfchar function call
int selfcharres=selfchar(str1,f);
printf("Character is founded:%d times\n",selfcharres);
//asciifind  function call
char afres=asciifind(f);
printf("Character type is :%d\n",afres);

return (0);
}
