#include<stdio.h>
int main()
{
    FILE*fp;
    int ch;
    fp=fopen("Feedback.txt","w");
    if(fp==NULL)
    {
        printf("file open failed\n");
        return 0;
    }
    fprintf(fp,"about the c progamming feedback\n");
    fprintf(fp,"1.improves logical thinking and problem-solving skills.");
    fprintf(fp,"2.help us understand the basics of computer programming");
    fprintf(fp,"3.devolps coding skills and improves analytical thinking");
    fprintf(fp,"4.it improves our ability to find and correct errors in program");
    fclose(fp);
    fp=fopen("feedback.txt","a");
    fprintf(fp,"sir feedback");
    fprintf(fp,"c-sir feedback");
    fprintf(fp,"1.explain concept very easily.");
    fprintf(fp,"2.making programming easy to understand.");
    fprintf(fp,"3.encourages students to learn coding.");
    fprintf(fp,"4.provides excellent practical guidance.");
    fclose(fp);
    fp=fopen("feedback.txt","r");
    if(fp==NULL)
    {
        printf("file cannot be opened");
        return 1;
    }
    printf("Feedback details:\n");
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}