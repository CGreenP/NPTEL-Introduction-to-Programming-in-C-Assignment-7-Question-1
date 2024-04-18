#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud
{
    char name[128];
    int phy,chem,math;

};

int main()
{
    int n,i,j,pos=0,count=0;
    char inp='a';
    scanf("%d",&n);
    struct stud s[n];
    for(i=0;i<n;i++)
    {
        j=0;
        scanf("%c",&s[i].name[j]);
        while((s[i].name[j++]=getchar()) != ' ' && i < 128);
        s[i].name[j-1] = '\0';
        //scanf("%c",&inp);
        //scanf(" %[^ ]%s",&s[i].name);
        //fgets(s[i].name,100,stdin);
        //gets(s[i].name);
        scanf("%d",&s[i].phy);
        scanf("%d",&s[i].chem);
        scanf("%d",&s[i].math);
    }
    struct stud temp;
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(s[pos].phy>s[j].phy)
            {
                pos=j;
            }
            if(s[pos].phy==s[j].phy)
            {
                if(s[pos].chem>s[j].chem)
                {
                    pos=j;
                }
            }
            if(s[pos].phy==s[j].phy)
            {
                if(s[pos].chem==s[j].chem)
                {
                    if(s[pos].math>s[j].math)
                    {
                        pos=j;
                    }
                }
            }
            if(s[pos].phy==s[j].phy)
            {
                if(s[pos].chem==s[j].chem)
                {
                    if(s[pos].math==s[j].math)
                    {
                        if(strcmp(s[pos].name,s[j].name)>0)
                        {
                            pos=j;
                        }
                    }
                }
            }
        }
        if(pos!=i)
        {
            temp=s[i];
            s[i]=s[pos];
            s[pos]=temp;
        }
        if((i==(n-2))&&(count<3))
        {
            i=0;
            count++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s-%d-%d-%d",s[i].name,s[i].phy,s[i].chem,s[i].math);
        if(i!=n-1)
        {
            printf("\n");
        }
    }
    return 0;
}
