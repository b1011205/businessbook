#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
char name[30];
char district[30];
int id;
float turnover;
} BUSINESS;



int main(void){
    int n,i,flag=0;
    float k=0,l=0;
    char question[256];
    BUSINESS info[10];
scanf("%d",&n);//何社入力するか
for(i=0;i<n;i++){

scanf("%s",info[i].name);
scanf("%s",info[i].district);
scanf("%d",&info[i].id);
scanf("%f",&info[i].turnover);

}

scanf("%s",question);

//平均を出す場合
if(strcmp(question,"average")==0){
for(i=0;i<sizeof(info)/sizeof(info[0]);i++){
	k=k+info[i].turnover;
	l++;
}
printf("Average turnover of all companies is %.2f\n",k/l);
}

//企業名or企業idで検索結果を出力する
for(i=0;i<sizeof(info)/sizeof(info[0]);i++){

//企業名一致
if(strcmp(info[i].name,question)==0)
printf("企業名一致\nName:%s\nDistrict:%s\nId:%d\nTurnover:%.2f\n\n",info[i].name,info[i].district,info[i].id,info[i].turnover);

//id一致
if(info[i].id==atoi(question) && atoi(question)!=0)
	printf("Id一致\nName:%s\nDistrict:%s\nId:%d\nTurnover:%.2f\n\n",info[i].name,info[i].district,info[i].id,info[i].turnover);

//地域一致
if(strcmp(info[i].district,question)==0&&flag==0)
        printf("Companies in district %s :\n",question); flag=1;
if(strcmp(info[i].district,question)==0&&flag==1)
	printf("%s\n",info[i].name);

}



}
