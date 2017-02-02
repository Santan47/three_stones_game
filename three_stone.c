#include<stdio.h>
int PLAY();
int main()
{
int ch;
while(1)
{
printf("1.PLAY\n2.EXIT\n");
scanf("%d",&ch);
switch(ch)
{
case 1:PLAY();
break;
case 2:return 1;
defult: printf("invalid choice\n");
}
}
return 0;
}
int PLAY()
{
char player_1[50],player_2[50];
int stones[]={37,23,19,41,29,23,33,24,57,51},i,count=1,del_stone1,t_stone=0,del_stone2,sum=0,two=2,three=3,five=5;
for(i=0;i<10;i++)
{
printf("ENTER THE NAME OF player_1:");
scanf("%s",player_1);
printf("ENTER THE NAME OF player_2:");
scanf("%s",player_2);
printf("YOU CAN REMOVE ONLY 2,3 AND 5 STONES.");
printf("NUMBER OF STONES ARE %d\n",stones[i]);
printf("player_1 WILL PLAY FIRST\n");
while(sum<stones[i])
{
printf("player_1:");
scanf("%d",&del_stone1);
sum=sum+del_stone1;
printf("player_2:");
scanf("%d",&del_stone2);
sum=sum+del_stone2;
}
}
}
