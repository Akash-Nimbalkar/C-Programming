#include<stdio.h>
#include<string.h>

struct batsman
{
    char name[10];
    float runs;
    float balls;
    float strikerate;
};
struct bowler
{
    char name[10];
    float overs;
    float runs;
    float wickets;
    float economy;
};

int main()
{   
	FILE *fp;
    int n, m, sum=0, run_toss=0, run_ntoss=0, k; 
    char date[15],time[5],team1[10],team2[10],toss[10],ntoss[10],team1memb[200],fname[10],venue[10], ap[5];
    
    
    struct batsman Bt[400];
    struct bowler Bw[400];
    
    printf("\t\t\t\t\t\t** Welcome in this cricket Match **\n \n");

    printf("Enter your choice\n 1.New Score Sheet\n 2.View Score Sheet\n 3.Exit\n");
    printf("Your choice is : \n");
    scanf("%d",&n);
    

    switch(n)
    {
        case 1 :
        {
        printf("Enter name of file ending with .txt : \n");
        scanf("%s",fname);
        fp = fopen(fname,"w");
        
        if (fp==NULL)
        {
            printf("ERROR!File cannot be opened");
            return 1;
        }
      
    printf("Enter Date in dd/mm/yy format : \n");
    scanf("%s",date);
    fprintf(fp,"Date: \n");
    fprintf(fp,"%s", date);
    
    
    printf("Enter time in 00:00 AM/PM format : \n");
    scanf("%s %s",time, ap);
    fprintf(fp,"Time:\n");
    fprintf(fp, "%s %s\n", time, ap);

    printf("Enter venue place\n");
    scanf("%s",venue);
    fprintf(fp,"Venue: \n");
    fprintf(fp, "%s", venue);

    printf("Enter First team's name\n");
    scanf("%s",team1);

    printf("Enter Second team's name\n");
    scanf("%s",team2);
    
    printf("Enter the no. of overs that will be played in this match : \n");
    scanf("%d", &k);

    printf("\n\t\t\tWelcome in %s Vs %s %d overs match...\n",team1,team2, k);
    printf("\t\t\t    ..%s %s At %s %s..\n\n", time, ap, venue, date);
    fprintf(fp,"\n\t\t\t\tMatch was between %s Vs %s\n",team1,team2);
    

    printf("Let's toss the coin\n\n");

    printf("Who won the toss? :- \n");
    scanf("%s",toss);
    fprintf(fp,"%s won the toss\n",toss);

    

    printf("\nTeam %s Please Enter your choice\n 1.Batting\n 2.Bowling\n",toss);
    printf("The choice is : \n");
    scanf("%d",&m);
    (m==1)?fprintf(fp,"%s choose to bat first\n",toss):fprintf(fp,"%s choose to bowl first\n",toss); //Ternary Operator
    (m==1)?printf("%s choose to bat first\n",toss):printf("%s choose to bowl first\n",toss);
    
    if(strcmp(toss, team1))
    {
  	strcpy(ntoss, team2);
	};
     
    if(m==1)
    { 
    int i;
    printf("For %s team :- \n", toss);
	for(i=0;i<11;i++)
       {
        printf("Enter Name of batter %d, runs scored & balls played : ", i+1);
        scanf("%s %f %f", Bt[i].name, &Bt[i].runs, &Bt[i].balls);
       }
       
    printf("\n");
    fprintf(fp,"\n");

    printf("\t\t\t\t\t** Displaying Scorecard **\n");
    printf("\t\t\t\tTeam %s's batting scorecard !!", toss);
    fprintf(fp,"\t\t\t\t\t** Final Scorecard **\n\n");

    printf("\nBatter's name\tRuns\tBalls\tSR\n");
    fprintf(fp,"\nName of batsman\tRuns\tBalls\tSR\n");

    printf("\n");
    fprintf(fp,"\n");
    
    float total_runs=0, total_runs1=0, total_balls=0;
	float total_overs, total_overs1; 

    for(i=0;i<11;i++)
    {   
        float(strikerate) = ((Bt[i].runs) / (Bt[i].balls));
        printf("%s\t\t%.0f\t%.0f\t%.2f\n", Bt[i].name, Bt[i].runs, Bt[i].balls, strikerate*100);
        fprintf(fp,"%s\t\t%.0f\t%.0f\t%.2f\n", Bt[i].name, Bt[i].runs, Bt[i].balls, strikerate*100);
        total_runs = total_runs + Bt[i].runs;
        total_balls = total_balls + Bt[i].balls;
        total_overs = total_balls/6;
    }
    
    printf("\n");
    fprintf(fp,"\n");
    
    printf("Team %s scored %.0f runs in %.1f overs\n", toss, total_runs, total_overs);
    fprintf(fp,"Team %s scored %.0f runs\n", toss, total_runs);
       

    printf("Team %s has to score %.0f runs to win this match in %d overs\n\n",ntoss, total_runs+1, k);
    printf("Now....Let's begin the second inning....\n");
    
    printf("Enter runs scored and overs played by %s team : \n",ntoss);
    scanf("%f %f",&total_runs1, &total_overs1);
    fprintf(fp,"Team %s scored %.0f runs\n", ntoss, total_runs1);
    printf("Team %s has scored %.0f runs in %.1f overs\n", ntoss, total_runs1, total_overs1);

	if(total_runs>total_runs1)
    printf("\n\n\t\tHeyy...!!Team %s won the match!!...(by %.0f runs) \n", toss, total_runs-total_runs1);
    else if(total_runs<total_runs1)
    printf("\n\n\t\tHeyy...!!Team %s won the match!!...\n", ntoss);
    else
    printf("\n\n\t\t\t\tIncredible...The match is drawn!!!..");
    	
    if(total_runs>total_runs1)
    fprintf(fp,"\t\t\tHeyy...!!Team %s won the match!!... \n", toss);
    else if(total_runs<total_runs1)
    fprintf(fp,"\t\t\tHeyy...!!Team %s won the match!!... \n", ntoss);
    else
    fprintf(fp,"\t\t\t\tThe match is drawn");
    

   }
   
   
    if(m==2)
    { 
    printf("For %s team :- \n", toss);
	int i;
    for(i=0; i<5; i++)
    {
        printf("Enter Name of bowler %d, overs, runs given & wickets taken : ", i+1);
        scanf("%s %f %f %f", Bw[i].name, &Bw[i].overs, &Bw[i].runs, &Bw[i].wickets);
    }
       
      	printf("\n");
      	fprintf(fp,"\n");

     	printf("\t\t\t\t\t** Displaying Scorecard **\n");
     	printf("\t\t\t\t\t Team %s's Bowling scorecard !!", toss);
     	fprintf(fp,"\t\t\t\t\t** Final Scorecard **\n");


     	printf("\nName of bowler\tOvers\tRuns\tWickets\tEconomy\n");
     	fprintf(fp,"\nBowler's name'\tOvers\t\tRuns\tWickets\tEconomy\n");

     	printf("\n");
     	fprintf(fp,"\n");
     
     	float total_scr=0, total_scr1=0;
     	float total_ovs, total_ovs1;

    
    for(i=0;i<5;i++)
    {   
        float(economy) = (Bw[i].runs)/(Bw[i].overs);
        printf("%s\t\t%.0f\t%.0f\t%.0f\t%.2f\n", Bw[i].name, Bw[i].overs, Bw[i].runs, Bw[i].wickets, economy);
        fprintf(fp,"%s\t\t\t%.0f\t%.0f\t%.2f\n", Bw[i].name, Bw[i].overs, Bw[i].runs, Bw[i].wickets, economy);
        total_scr = total_scr + Bw[i].runs;
        total_ovs = total_ovs + Bw[i].overs;
    }

    
    printf("\n");
    fprintf(fp,"\n");
    
    printf("Runs scored by team %s are %.0f in %.1f overs\n",toss,total_scr, total_ovs);
    fprintf(fp,"Runs scored by team %s are %.0f\n",toss,total_ovs);
    
    printf("Team %s has to score %.0f runs to win this match in %d overs\n\n", ntoss, total_scr+1, k);
    printf("Now... let's begin the second inning of the match\n");
    printf("Enter runs scored and overs played by team %s : \n",ntoss);
    scanf("%f %f",total_scr1, total_ovs1);

    printf("The runs has scored by %s team is %.0f in %.1f overs", ntoss, total_scr1, total_ovs1);
    
    if(total_scr>total_scr1)
    printf("\n\n\t\tHeyy...!!Team %s won the match!!...(by %.0f runs) \n", toss, total_scr-total_scr1);
    else if(total_scr<total_scr1)
    printf("\n\n\t\tHeyy...!!Team %s won the match!!...\n", ntoss);
    else
    printf("\n\n\t\t\tIncredible...The match is drawn!!!..");
    	
    if(total_scr>total_scr1)
    fprintf(fp,"\t\t\tHeyy...!!Team %s won the match!!... \n", toss);
    else if(total_scr<total_scr1)
    fprintf(fp,"\t\t\tHeyy...!!Team %s won the match!!... \n", ntoss);
    else
    fprintf(fp,"\t\t\t\tThe match is drawn\n");

     fclose(fp);  
    
    } 
        break;

        case 2 : fp = fopen("Score.txt","r");
                 if (fp==NULL)
               {
                 printf("ERROR!File not found");
                 return 1;
               }
               fclose(fp); 
               break;

        case 3 : printf("Thanks for visiting!!");
                break;

    }
    }
    printf("\n\t\t\tThank You...!!..");
    return 0;
}