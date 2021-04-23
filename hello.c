/*
 * hello.c
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int g;
 
int f(int i) {
  g = i;
  return i;
}


int tmpFunc(int i1)
{
  return 5;
}
  
char tmpFunction1(char * buf)
{
 int i = 20;
 int a;
 while(i<10){
  a+=4;
 tmpFunc(a);
 i--;
 if(a==12) break;

 }
 if(i==12) goto err;
 return 12;
 err:
 tmpFunc(a);
  return 11;
}
