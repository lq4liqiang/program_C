#include <stdio.h>
#define B "I am a programmer"
int out=4;
static ou1=7;

struct liqiang{
    char name[40];
	int age;
	char address[80];
};

int main(void){
    extern char l;
    int i;
	char c;
	unsigned char t=6;
	int temp[30];
    struct liqiang LQ={"liqiang",25,"YongJia"};
	//printf("%d",i);
	i=3;
	printf("%d\n",i);
    c='a';
	//unsigned char t=6;
	printf("%c\n",c);
    
	
	printf("age=%d  ",LQ.age);
	printf("name=%s  ",LQ.name);
	printf("address=%s  \n",LQ.address);


	while(scanf("%d",&t)==1){
	   printf("%d",t);
	   //func1();
	   c=l;
       printf("%c",c);
       c='b';
       printf("%c",c);
	}
	

}