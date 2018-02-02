#include <stdio.h>
#include <conio.h>
void main(){
     int charcnt=0,dotcnt=0,commacnt=0;
     char ch,str[125];
     clrscr();  
     printf("Enter a string );
     scanf("%s",str);     
     for(i=0;str[i]!='\0';i++){
          elseif(str[i]=='.')
        dotcnt++;
     elseif(str[i]==',')
        commacnt++;
     }
     charcnt=i;
     printf("\n\nTotal Characters : %d",charcnt);   
     printf("\nTotal Full stops : %d",dotcnt);
     printf("\nTotal Commas     : %d",commacnt);
     getch();
}
  	
