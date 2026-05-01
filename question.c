 #include<stdio.h>
void quizes_easy_level(int number1, int number2,int answer,int help);
void quizes_medium_level(int number1, int number2,int answer, int help);
void quizes_hard_level(int number1, int number2,int answer, int help);
void quizes_advance_level(int number1, int number2,int answer, int help,float pei,int radius);
int main(){
    int number1 = 56, number2 = 77,answer,a,help, pei = 3.14,radius = 17;
    answer = number1 + number2;
    printf("press 1 for easy level\n");
    printf("press 2 for medium level\n");
    printf("press 3 for hard level\n");
    printf("press 4 for advenced level\n");
    printf("enter the number of level :");
    scanf("%d",&a);

    if (a == 1){
        quizes_easy_level(number1,number2,answer,help);
    }
else if (a==2)
{
    int number1 =13;
    int number2 =7;
    quizes_medium_level(number1,number2,answer,help);
}   
else if (a==3)
{
    quizes_hard_level( number1, number2, answer, help);
}
else if(a==4)
{
    quizes_advance_level(number1,  number2, answer, help,pei,radius);
}
else{
    printf("the level is not exist\n");
}
return 0;


}
void quizes_easy_level(int number1, int number2,int answer,int help){
    printf("what is %d + %d = ?\n",number1,number2);
    printf("write 108 for options :\n");
    scanf("%d",&help);
    if(help == 108)
    {
        printf("A.134\tB.133\tC.232\tD.131\n");
        printf("write your selected option number:");
        scanf("%d",&answer);
        if(answer == 133){
            printf("your answer is correct \n");
    
            printf("congratulations\n");
        }

        else{
            printf("your answer is wrong\n");
            printf("sorry your answer is wrong\n");
            printf("the correct answer is 133");
         }  
    
        
    }
    else if(help == 133)
    {
         printf("your answer is correct \n");
    
            printf("congratulations\n");
        
    }
        else{
            printf("your answer is wrong\n");
            printf("sorry your answer is wrong\n");
            printf("the correct answer is 133");
         }
    
}
void quizes_medium_level(int number1, int number2,int answer, int help){
    answer = number1 * number2;
    answer--;
    printf("what is %d * %d = ?\n",number1,number2);
    printf("write 108 for options :\n");
    scanf("%d",&help);
    if(help == 108)
    {
        printf("A.101\tB.127\tC.99\tD.91\n");
        printf("write your selected option number:");
        scanf("%d",&answer);
        if(answer == 91){
            printf("your answer is correct \n");
    
            printf("congratulations\n");
        }

        else{
            printf("sorry your answer is wrong\n");
            printf("the correct answer is 91");
         }  
    
        
    }
    else if(help == 91)
    {
         printf("your answer is correct \n");
    
            printf("congratulations\n");
        
    }
        else{
            printf("your answer is wrong\n");
            printf("sorry your answer is wrong\n");
            printf("the correct answer is 91");
         } 
    
}
void quizes_hard_level(int number1, int number2,int answer, int help)
{
     answer = 300;
    printf("find value of x : 2(x)= 6(100) ?\n");
    printf("write 108 for options :\n");
    scanf("%d",&help);
    if(help == 108)
    {
        printf("A.325\tB.200\tC.600\tD.300\n");
        printf("write your selected option number:");
        scanf("%d",&answer);
        if(answer == 300){
            printf("your answer is correct \n");
    
            printf("congratulations\n");
        }

        else{
            printf("sorry your answer is wrong\n");
            printf("the correct answer is 300");
         }  
    
    }    
    
    else if(help == 300)
    {
         printf("your answer is correct \n");
    
            printf("congratulations\n");
        
    }
        else{
            printf("your answer is wrong\n");
            printf("sorry your answer is wrong\n");
            printf("the correct answer is 300");
         } 
    
   
}
void quizes_advance_level(int number1, int number2,int answer, int help,float pei,int radius)
{
     answer = 300;
    printf("find the arae of a circle \n");
    printf("the value of pei is 3.14\n");
    printf("the radius of a circle is 21\n");
    printf("write 108 for options :\n");
    scanf("%d",&help);
    if(help == 108)
    {
        printf("A.150\tB.122\tC.128\tD.132\n");
        printf("write your selected option number:");
        scanf("%d",&answer);
        if(answer == 132){
            printf("your answer is correct \n");
    
            printf("congratulations\n");
        }

        else{
            printf("sorry your answer is wrong\n");
            printf("the correct answer is 132");
         }  
    
    }    
    
    else if(help == 132)
    {
         printf("your answer is correct \n");
    
            printf("congratulations\n");
        
    }
        else{
            printf("your answer is wrong\n");
            printf("sorry your answer is wrong\n");
            printf("the correct answer is 132");
         } 
}