#include <stdio.h>
#include <stdlib.h>
#include "laba2.h"
void create(Products**arr, int *n){
printf("n=");
scanf("%d",n);
if(*n<=0)
	return;
*arr=(Products*)calloc(*n,sizeof(Products));
for(int i=0;i<*n;i++){
	printf("name - ");
	scanf("%s",(*arr)[i].name);
	printf("price - ");
	scanf("%d",&(*arr)[i].price);
	printf("term -  ");
	scanf("%d",&(*arr)[i].term);
	}
}
void read(Products**arr,int *n){
FILE*fp=fopen("file.txt","r");
if(!fp) return;
if(fscanf(fp,"%d",n)!=1){
	fclose(fp);
	return;
	}
if(*n<=0){
	fclose(fp);
	return;
	}
*arr=(Products*)calloc(*n,sizeof(Products));
for(int i=0;i<*n;i++){
	if(fscanf(fp,"%s %d %d",(*arr)[i].name,(*arr)[i].price,(*arr)[i].term)!=3)
		break;
	}
fclose(fp);
}
void write(Products*arr,int n){
if(n<=0)
	return;
FILE*fp=fopen("file.txt","w");
if(!fp)
	return;
fprintf(fp,"%d\n",n);
for(int i=0;i<n;i++){
	fprintf(fp,"%s %i %i\n",arr[i].name,arr[i].price,arr[i].term);
	}
fclose(fp);
}








