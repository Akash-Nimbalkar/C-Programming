#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    int word,ch,line;
    word=ch=line=0;

    printf("Enter any string terminated with $");
    scanf("%[^$]", str);

    for(int i=0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == '\n'){
            line++;
            word++;
        }
         
        else {
               if(str[i]== ' ' || str[i]=='\t')
               {
                   word++;
                   ch++;
               }
               else
               {
                   ch++;
               }


        }
    }
    printf("No.of lines are %d\n",line);
    printf("No.of characters are %d\n",ch);
    printf("No.of words are %d\n",word);

    return 0;
 }