#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "laba2.h"
void search(Products*arr,int n){
	FILE*fp=fopen("file.txt","r");
	if(!fp) return;
	int flt;
	printf("1-name,2-price,3-term\n");
	scanf("%d",&flt);
switch(flt){
	case 1:{
		char s1[40];
		int f1=0;
		printf("name - ");
		scanf("%s",s1);
		for(int i=0;i<n;i++){
			if(strcmp(s1,arr[i].name)==0){
				printf("found - %s %d %d\n", arr[i].name,arr[i].price,arr[i].term);
				f1=1;
				} else printf("not found\n");
			}
		break;
		}
	case 2:{
		int s2;
		int f2=0;
		printf("price - ");
		scanf("%d",&s2);
		for(int i=0;i<n;i++){
			if(s2=arr[i].price){
				printf("found - %s %d %d\n",arr[i].name,arr[i].price,arr[i].term);
				f2=1;
				} else printf("not found\n");
			}
		break;
		}
	case 3:{
		int s3;
		int f3=0;
		printf("term - ");
		scanf("%d",&s3);
		for(int i=0;i<n;i++){
			if(s3==arr[i].term){
				printf("fount - %s %d %d\n",arr[i].name,arr[i].price,arr[i].term);
				f3=1;
				} else printf("not found\n");
		}
		break;
		}
	default:
		break;
	}
fclose(fp);
}

