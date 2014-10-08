#include <stdio.h>
#include <string.h>

typedef struct {
char name[30];
char district[30];
int id;
float turnover;
} BUSINESS;



int main(void){
    int n,i;
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


printf("%s\n%s\n%d\n%.2f\n",info[0].name,info[0].district,info[0].id,info[0].turnover);

}
