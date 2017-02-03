#include<stdio.h>
int PLAY();
int ABOUT();
int main()
{
int ch;
while(1)
{
printf("1.PLAY\n2.ABOUT\n3.EXIT\n");
scanf("%d",&ch);
switch(ch)
{
case 1:PLAY();
break;
case 2:ABOUT();
break;
case 3:return 1;
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
int sum=0,yes;
printf("ENTER THE NAME OF player_1:");
scanf("%s",player_1);
printf("ENTER THE NAME OF player_2:");
scanf("%s",player_2);
printf("YOU CAN REMOVE ONLY 2,3 AND 5 STONES.");
printf("NUMBER OF STONES ARE %d\n",stones[i]);
printf("%s WILL PLAY FIRST\n",player_1);
while(sum<stones[i])
{
printf("%s:",player_1);
scanf("%d",&del_stone1);
sum=sum+del_stone1;
if(sum>=stones[i])
{
printf("%s is winner\n",player_1);
break;
}
printf("%s:",player_2);
scanf("%d",&del_stone2);
sum=sum+del_stone2;
if(sum>=stones[i])
printf("%s is winner\n",player_2);
}
printf("\n\t\t\t\tDO YOU WANT TO PLAY AGAIN:if yes then press 1,for no press 0.\n");
scanf("%d",&yes);
if(yes==1)
continue;
else
break;
}
}
int ABOUT()
{
printf("DISCRIPTION:- the three stones game is very simple in this game there is only two players can play at a time\n\nRULES:- \n1.PLAYER 1 WILL PALY FIRST ALWAYS \n\n2.YOU CAN REMOVE ONLY 2,3 AND 5 STONES AT A TIME\n\n3.THE PLAYER WHO WILL REMOVE THE LAST STONE IS THE WINNER OF THIS GAME\n\n4.IF YOU WANT TO PLAY AGAIN THEN CHOSE YES OPTION AT THE END OF THE GAME.");
}
