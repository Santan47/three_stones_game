#include<stdio.h>
int PLAY();
int ABOUT();
int main()
{
int ch;
while(1){
printf("1.PLAY\n2.ABOUT\n3.EXIT\n");
scanf("%d",&ch);
	switch(ch){
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
printf("\n\nENTER THE NAME OF player_1:");
scanf("%s",player_1);
printf("ENTER THE NAME OF player_2:");
scanf("%s",player_2);
printf("\n\n                       *************YOU CAN REMOVE ONLY 2,3 AND 5 STONES.****************\n\n");
printf("\n                             *************NUMBER OF STONES ARE %d*****************\n\n",stones[i]);
printf("%s WILL PLAY FIRST\n\n\n",player_1);
	while(sum<stones[i]){
		printf("%s:  ",player_1);
		scanf("%d",&del_stone1);
		if(del_stone1 == 2 || del_stone1 == 3|| del_stone1 == 5){
			sum=sum+del_stone1;
		}
		else{
		printf("\n\nYOU CAN REMOVE ONLY 2,3 AND 5 STONES.\n\n");
		printf("%s:  ",player_1);
		del_stone1=0;
		int temp1;
                scanf("%d",&temp1);
		del_stone1=temp1;
		temp1=0;
		sum=sum+del_stone1;
		}
		if(sum==stones[i]||sum+1==stones[i]){
			printf("%s is winner\n",player_1);
			break;
		}
		else if(sum>stones[i]){
			printf("%s is winner\n",player_2);
			break;
		}
		printf("%s:  ",player_2);
		scanf("%d",&del_stone2);
		if(del_stone2 == 2 || del_stone2 == 3 || del_stone2 == 5){
			sum=sum+del_stone2;
		}
		else{
                printf("\n\nYOU CAN REMOVE ONLY 2,3 AND 5 STONES.\n\n");
                printf("%s:  ",player_2);
		del_stone2=0;
		int temp2;
                scanf("%d",&temp2);
		del_stone2=temp2;
		temp2=0;
		sum=sum+del_stone2;
		}
		if(sum==stones[i]||sum+1==stones[i])
		printf("%s is winner\n",player_2);
		else if(sum>stones[i]){
                        printf("%s is winner\n",player_1);
                        break;
                }
	}
printf("\n\t\t\t\tDO YOU WANT TO PLAY AGAIN:if yes then press 1,for no press 0 :");
scanf("%d",&yes);
printf("\n\n");
if(yes==1)
continue;
else
break;
}
}
int ABOUT()
{
printf("                           ***************************DISCRIPTION*****************************\n\nThe three stones game is very simple in this game there is only two players can play at a time\n\n->RULES:- \n\n1. PLAYER 1 WILL PLAY FIRST ALWAYS \n\n2. YOU CAN REMOVE ONLY 2,3 AND 5 STONES AT A TIME\n\n3. IF YOU CHOSE TO REMOVE SOME STONE ALWAYS REMEMBER THAT THE TOTAL SUM OF STONES WILL NOT EXEED THE GIVEN NUMBER OF STONES.\n\n4. THE PLAYER WHO REMOVE THE LAST STONE IS THE WINNER OF THIS GAME\n\n5. IF YOU WANT TO PLAY AGAIN THEN CHOSE 1 OPTION AT THE END OF THE GAME.\n\n");
}
