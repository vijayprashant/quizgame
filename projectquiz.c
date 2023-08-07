#include <stdio.h>

int main() {
    int i;
    int a1,a2,a3,a4,a5,e;
    int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
    int p01,p02,p03,p04,p05,p06,p07,p08,p09,p010;
    int t1,t2,t3;
    printf("Welcome to the Game\n\n");
    printf(">Press 7 to start the game");
    printf(">Press 0 to quit the game");
    scanf("%d",&i);
    
    if(i==7)
    {
        printf("The game has started\n\n");
    }
    else if(i==0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }
    if(i==7)
    {
        printf("1)Which one is the first search engine in internet?\n\n");
        printf("1)Google\n");
        printf("2)Archive\n");
        printf("3)Wais\n");
        printf("4)Altavista\n");
        
        printf("Enter Your Answer:");
        scanf("%d",&a1);
        
        if(a1==2)
        {
            printf("Correct Answer");
            p1=5;
            printf("You have scored %d point\n",p1);
        }
        else
        {
            printf("Wrong Answer\n");
            p01=0;
            printf("You have scored %d point\n",p01);
        }
        printf("2)Which one is the first web browser invented in 1990?\n\n");
        printf("1)Internet Explorer\n");
        printf("2)Mosaic\n");
        printf("3)Mozilla\n");
        printf("4)Nexus\n");
        
        printf("Enter Your Answer:");
        scanf("%d",&a2);
        
        if(a2==4)
        {
            
            printf("Correct Answer");
            p2=5;
            printf("You have scored %d point\n",p2); 
        }
        else
        {
            printf("Wrong Answer\n");
            p02=0;
            printf("You have scored %d point\n",p02);
            
        }
        
        printf("3)First computer virus is known as?\n\n");
        printf("1)Rabbit\n");
        printf("2)Creeper Virus\n");
        printf("3)Elk Cloner\n");
        printf("4)SCA Virus\n");
        
        
        printf("Enter Your Answer:");
        scanf("%d",&a3);
        
        if(a3==2)
        {
            
            printf("Correct Answer");
            p3=5;
            printf("You have scored %d point\n",p3); 
        }
        else
        {
            printf("Wrong Answer\n");
            p03=0;
            printf("You have scored %d point\n",p03);
            
        }
        
        
        
        printf("4)Firewall in computer is used for?\n\n");
        printf("1)Security\n");
        printf("2)Data Transmission\n");
        printf("3)Monitering\n");
        printf("4)Autentication\n");
        
        printf("Enter Your Answer:");
        scanf("%d",&a4);
        
        if(a4==1)
        {
            
            printf("Correct Answer");
            p4=5;
            printf("You have scored %d point\n",p4); 
        }
        else
        {
            printf("Wrong Answer\n");
            p04=0;
            printf("You have scored %d point\n",p04);
            
        }
        
        
        
        
        printf("5)Which of the following is not a database management software?\n\n");
        printf("1)Mysql\n");
        printf("2)Oracle\n");
        printf("3)cobal\n");
        printf("4)Sybase\n");
        
        printf("Enter Your Answer:");
        scanf("%d",&a5);
        
        if(a5==3)
        {
            
            printf("Correct Answer");
            p5=5;
            printf("You have scored %d point\n",p5); 
        }
        else
        {
            printf("Wrong Answer\n");
            p05=0;
            printf("You have scored %d point\n",p05);
            
        }
        
        
        
        
        
        
        
    }

    return 0;
}